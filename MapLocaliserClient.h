#pragma once
#include "pch.h"

ref class MapLocaliserClient {
public:
	MapLocaliserClient(void);
	String^ INSERT(void);
	String^ DELETE(void);
	String^ UPDATE(String^);
	void setID_client(int);
	void setID_address(int);
	int getID_client(void);
	int getID_address(void);
private:
	int ID_address;
	int ID_client;
};

