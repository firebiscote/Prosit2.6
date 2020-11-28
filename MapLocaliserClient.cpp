#include "MapLocaliserClient.h"

MapLocaliserClient::MapLocaliserClient(void) {
	this->ID_address = -1;
	this->ID_client = -1;
}

String^ MapLocaliserClient::INSERT(void) {
	return "BEGIN TRANSACTION; INSERT INTO localiserClient (ID_address, ID_client) VALUES('" + this->getID_address() + "', '" + this->getID_client() + "'); COMMIT;";
}

String^ MapLocaliserClient::DELETE(void) {
	return "BEGIN TRANSACTION; DELETE FROM address WHERE address.address = '" + this->getID_address() + "'; COMMIT;";
}

String^ MapLocaliserClient::UPDATE(String^ newAddress) {
	return "BEGIN TRANSACTION; UPDATE address SET address.address = '" + newAddress + "' WHERE address.address = '" + this->getID_address() + "'; COMMIT";
}

void MapLocaliserClient::setID_address(int idAddress) {
	if (idAddress > 0) {
		this->ID_address = idAddress;
	}
}

void MapLocaliserClient::setID_client(int idClient) {
	if (idClient > 0) {
		this->ID_client = idClient;
	}
}

int MapLocaliserClient::getID_address(void) {
	return this->ID_address;
}

int MapLocaliserClient::getID_client(void) {
	return this->ID_client;
}