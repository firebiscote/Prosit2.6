#pragma once

#include "pch.h"
#include "CAD.h"
#include "MapClient.h"
#include "MapAddress.h"
#include "MapLocaliserClient.h"

namespace Services {
	ref class GestionClient {
	public:
		GestionClient(void);
		DataSet^ listeClient(String^);
		void addClient(String^, String^);
		void deleteClient(String^);
		void updateClient(String^, String^);
	private:
		CAD^ _cad;
		MapClient^ _client;
		MapAddress^ _address;
		MapLocaliserClient^ _localiserClient;
		DataSet^ _ds;
	};
}

