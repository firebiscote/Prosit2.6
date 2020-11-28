#include "GestionClient.h"

namespace Services {
	GestionClient::GestionClient() {
		this->_cad = gcnew CAD();
		this->_client = gcnew MapClient();
		this->_address = gcnew MapAddress();
		this->_localiserClient = gcnew MapLocaliserClient();
	}

	DataSet^ GestionClient::listeClient(String^ dataTableName) {
		this->_ds = gcnew DataSet();
		this->_ds = this->_cad->getRows(this->_client->SELECT(), dataTableName);
		return this->_ds;
	}

	void GestionClient::addClient(String^ name, String^ address) {
		int idClient, idAddress;
		this->_client->setName(name);
		this->_address->setAddress(address);
		idClient = this->_cad->actionRowsID(this->_client->INSERT());
		idAddress = this->_cad->actionRowsID(this->_address->INSERT());
		this->_localiserClient->setID_address(idAddress);
		this->_localiserClient->setID_client(idClient);
		this->_cad->actionRowsID(this->_localiserClient->INSERT());
	}

	void GestionClient::deleteClient(String^ name) {
		int id;
		this->_client->setName(name);
		id = this->_cad->actionRowsID(this->_client->DELETE());
	}

	void GestionClient::updateClient(String^ name, String^ newName) {
		int id;
		this->_client->setName(name);
		id = this->_cad->actionRowsID(this->_client->UPDATE(newName));
	}
}

