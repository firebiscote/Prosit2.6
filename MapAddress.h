#pragma once
#include "pch.h"

ref class MapAddress {
public:
	MapAddress(void);
	String^ INSERT(void);
	String^ DELETE(void);
	String^ UPDATE(String^);
	void setID(int);
	void setAddress(String^);
	int getID(void);
	String^ getAddress(void);
private:
	int ID;
	String^ Address;
};

