#pragma once

ref class MapEmploye{
public:
	MapEmploye();
	System::String^ SELECT();
private:
	int ID;
	System::String^ Nom;
	System::String^ Adresse;
};

