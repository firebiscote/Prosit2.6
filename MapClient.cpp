#include "MapClient.h"

MapClient::MapClient(void) {
	this->ID = -1;
	this->Name = "";
}

String^ MapClient::SELECT(void) {
	return "SELECT client.name, address.address FROM client LEFT JOIN localiserClient ON client.ID = localiserClient.ID_client LEFT JOIN address ON localiserClient.ID_address = address.ID";
}

String^ MapClient::INSERT(void) {
	return "BEGIN TRANSACTION; INSERT INTO client (name) VALUES('" + this->getName() + "');SELECT @@IDENTITY; COMMIT;";
}

String^ MapClient::DELETE(void) {
	return "BEGIN TRANSACTION; DECLARE @idAddress INT; DECLARE @idClient INT;" +
		"SET @idClient = (SELECT ID FROM client WHERE client.name = '" + this->getName() + "');" +
		"SET @idAddress = (SELECT ID_address FROM client LEFT JOIN localiserClient ON @idClient = localiserClient.ID_client);" +
		"DELETE FROM localiserClient WHERE @idClient = localiserClient.ID_client;" +
		"DELETE FROM address WHERE @idAddress = address.ID;" +
		"DELETE FROM client WHERE @idClient = client.ID; COMMIT;";
}

String^ MapClient::UPDATE(String^ newName) {
	return "BEGIN TRANSACTION; UPDATE client SET client.name = '" + newName + "' WHERE client.name = '" + this->getName() + "'; COMMIT";
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

int MapClient::getID(void) {
	return this->ID;
}

String^ MapClient::getName(void) {
	return this->Name;
}