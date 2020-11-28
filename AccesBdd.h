#pragma once

ref class AccesBdd {
public:
	AccesBdd();
	System::Data::DataSet^ getRows(System::String^, System::String^);
	void actionRows(System::String^);
	int actionRowsID(System::String^);
private:
	System::String^ _connectionString;
	System::String^ _requestSql;
	System::Data::SqlClient::SqlConnection^ _sqlConnection;
	System::Data::SqlClient::SqlDataAdapter^ _sqlDataAdapter;
	System::Data::SqlClient::SqlCommand^ _sqlCommand;
	System::Data::DataSet^ _dataSet;
	void setSql(System::String^);
};

