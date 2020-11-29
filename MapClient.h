#pragma once
#include "pch.h"

ref class MapClient{
public:
	MapClient(void);
	String^ SELECT(void);
	String^ INSERT(void);
	String^ DELETE(void);
	String^ UPDATE_CLIENT(String^);
	String^ UPDATE_ADDRESS(String^);
	void setID(int);
	void setName(String^);
	void setAddress(String^);
	int getID(void);
	String^ getName(void);
	String^ getAddress(void);
private:
	int ID;
	String^ Name;
	String^ Address;
};

