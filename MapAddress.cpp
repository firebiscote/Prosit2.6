#include "MapAddress.h"

MapAddress::MapAddress(void) {
	this->ID = -1;
	this->Address = "";
}

String^ MapAddress::INSERT(void) {
	return "BEGIN TRANSACTION; INSERT INTO address (address) VALUES('" + this->getAddress() + "');SELECT @@IDENTITY; COMMIT;";
}

String^ MapAddress::DELETE(void) {
	return "BEGIN TRANSACTION; DELETE FROM address WHERE address.address = '" + this->getAddress() + "'; COMMIT;";
}

String^ MapAddress::UPDATE(String^ newAddress) {
	return "BEGIN TRANSACTION; UPDATE address SET address.address = '" + newAddress + "' WHERE address.address = '" + this->getAddress() + "'; COMMIT";
}

void MapAddress::setID(int idAddress) {
	if (idAddress > 0) {
		this->ID = idAddress;
	}
}

void MapAddress::setAddress(String^ address) {
	if (address != "") {
		this->Address = address;
	}
}

int MapAddress::getID(void) {
	return this->ID;
}

String^ MapAddress::getAddress(void) {
	return this->Address;
}