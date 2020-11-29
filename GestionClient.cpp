#include "GestionClient.h"

namespace Services {
	GestionClient::GestionClient() {
		this->_cad = gcnew CAD();
		this->_client = gcnew MapClient();
	}

	DataSet^ GestionClient::listeClient(String^ dataTableName) {
		this->_ds = gcnew DataSet();
		this->_ds = this->_cad->getRows(this->_client->SELECT(), dataTableName);
		return this->_ds;
	}

	void GestionClient::addClient(String^ name) {
		int idClient;
		this->_client->setName(name);
		idClient = this->_cad->actionRowsID(this->_client->INSERT());
	}

	void GestionClient::addClient(String^ name, String^ address) {
		int idClient;
		this->_client->setName(name);
		this->_client->setAddress(address);
		idClient = this->_cad->actionRowsID(this->_client->INSERT());
	}

	void GestionClient::deleteClient(String^ name) {
		int id;
		this->_client->setName(name);
		id = this->_cad->actionRowsID(this->_client->DELETE());
	}

	void GestionClient::updateClient(String^ name, String^ newName) {
		int id;
		this->_client->setName(name);
		id = this->_cad->actionRowsID(this->_client->UPDATE_CLIENT(newName));
	}

	void GestionClient::updateAddress(String^ address, String^ newAddress) {
		int id;
		this->_client->setAddress(address);
		id = this->_cad->actionRowsID(this->_client->UPDATE_ADDRESS(newAddress));
	}
}

