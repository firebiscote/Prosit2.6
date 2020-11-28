#include "GestionEmploye.h"

namespace Services {
	GestionEmploye::GestionEmploye() {
		this->_accesBdd = gcnew AccesBdd();
		this->_employe = gcnew MapEmploye();
	}

	System::Data::DataSet^ GestionEmploye::listeEmploye(System::String^ dataTableName) {
		this->_ds = gcnew System::Data::DataSet();
		this->_ds = this->_accesBdd->getRows(this->_employe->SELECT(), dataTableName);
		return this->_ds;
	}
}