#pragma once

#include "AccesBdd.h"
#include "MapEmploye.h"

namespace Services {
	ref class GestionEmploye {
	public:
		GestionEmploye();
		System::Data::DataSet^ listeEmploye(System::String^);
	private:
		AccesBdd^ _accesBdd;
		MapEmploye^ _employe;
		System::Data::DataSet^ _ds;
	};
}

