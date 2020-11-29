#pragma once

#include "pch.h"
#include "CAD.h"
#include "MapClient.h"

namespace Services {
	ref class GestionClient {
	public:
		GestionClient(void);
		DataSet^ listeClient(String^);
		void addClient(String^);
		void addClient(String^, String^);
		void deleteClient(String^);
		void updateClient(String^, String^);
		void updateAddress(String^, String^);
	private:
		CAD^ _cad;
		MapClient^ _client;
		DataSet^ _ds;
	};
}

