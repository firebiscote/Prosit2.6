#include "MapEmploye.h"

MapEmploye::MapEmploye() {
	this->ID = -1;
	this->Nom = "";
	this->Adresse = "";
}

System::String^ MapEmploye::SELECT() {
	return "SELECT employe.nom, adresse.adresse FROM employe LEFT JOIN localiserEmploye ON employe.ID = localiserEmploye.ID_employe LEFT JOIN adresse ON localiserEmploye.ID_adresse = adresse.ID";
}
