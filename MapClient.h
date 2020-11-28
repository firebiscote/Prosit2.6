#pragma once
#include "pch.h"

ref class MapClient{
public:
	MapClient(void);
	String^ SELECT(void);
	String^ INSERT(void);
	String^ DELETE(void);
	String^ UPDATE(String^);
	void setID(int);
	void setName(String^);
	int getID(void);
	String^ getName(void);
private:
	int ID;
	String^ Name;
};

