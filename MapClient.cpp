#include "MapClient.h"

MapClient::MapClient(void) {
	this->ID = -1;
	this->Name = "";
	this->Address = "";
}

String^ MapClient::SELECT(void) {
	return "SELECT client.name, address.address FROM client LEFT JOIN localiserClient ON client.ID = localiserClient.ID_client LEFT JOIN address ON localiserClient.ID_address = address.ID";
}

String^ MapClient::INSERT(void) {
	if (this->getAddress() == "") {
		return	"BEGIN TRANSACTION;" +
				"IF '" + this->getName() + "' NOT IN (SELECT client.name FROM client) BEGIN" +
				"	INSERT INTO client (name) VALUES('" + this->getName() + "');" +
				"END COMMIT;";
	} else {
		return	"BEGIN TRANSACTION; DECLARE @idClient INT; DECLARE @idAddress INT;" +
				"IF '" + this->getName() + "' NOT IN (SELECT client.name FROM client) BEGIN" +
				"	INSERT INTO client (name) VALUES('" + this->getName() + "');\nEND" +
				"\nSET @idClient = (SELECT client.ID FROM client WHERE '" + this->getName() + "' = client.name);" +
				"IF '" + this->getAddress() + "' NOT IN (SELECT address.address FROM address) BEGIN" +
				"	INSERT INTO address (address) VALUES('" + this->getAddress() + "');\nEND" +
				"\nSET @idAddress = (SELECT address.ID FROM address WHERE '" + this->getAddress() + "' = address.address);" +
				"IF CONCAT(@idClient, @idAddress) NOT IN (SELECT CONCAT(localiserClient.id_client, localiserClient.id_address) FROM localiserClient) BEGIN" +
				"	INSERT INTO localiserClient (id_client, id_address) VALUES(@idClient, @idAddress);\nEND" +
				"\nCOMMIT;";
	}
}

String^ MapClient::DELETE(void) {
	return "BEGIN TRANSACTION; DECLARE @idClient INT;" +
		"SET @idClient = (SELECT ID FROM client WHERE client.name = '" + this->getName() + "');" +
		"DELETE FROM localiserClient WHERE @idClient = localiserClient.ID_client;" +
		"DELETE FROM address WHERE address.ID NOT IN (SELECT localiserClient.id_address FROM localiserClient);" +
		"DELETE FROM client WHERE @idClient = client.ID; COMMIT;";
}

String^ MapClient::UPDATE_CLIENT(String^ newName) {
	return "BEGIN TRANSACTION; UPDATE client SET client.name = '" + newName + "' WHERE client.name = '" + this->getName() + "'; COMMIT";
}

String^ MapClient::UPDATE_ADDRESS(String^ newAddress) {
	return "BEGIN TRANSACTION; UPDATE address SET address.address = '" + newAddress + "' WHERE address.address = '" + this->getAddress() + "'; COMMIT;";
}

void MapClient::setID(int idClient) {
	if (idClient > 0) {
		this->ID = idClient;
	}
}

void MapClient::setName(String^ name) {
	if (name != "") {
		this->Name = name;
	}
}

void MapClient::setAddress(String^ address) {
	this->Address = address;
}

int MapClient::getID(void) {
	return this->ID;
}

String^ MapClient::getName(void) {
	return this->Name;
}

String^ MapClient::getAddress(void) {
	return this->Address;
}