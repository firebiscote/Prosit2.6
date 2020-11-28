#include "AccesBdd.h"

AccesBdd::AccesBdd() {
	this->_requestSql = "";
	this->_connectionString = "Data Source=.;Initial Catalog=Prosit26;Integrated Security=True";
	this->_sqlConnection = gcnew System::Data::SqlClient::SqlConnection(this->_connectionString);
	this->_sqlCommand = gcnew System::Data::SqlClient::SqlCommand(this->_requestSql, this->_sqlConnection);
	this->_sqlCommand->CommandType = System::Data::CommandType::Text;
	this->_sqlConnection->Open();
	this->_sqlConnection->Close();
}

System::Data::DataSet^ AccesBdd::getRows(System::String^ requestSql, System::String^ dataTableName) {
	this->setSql(requestSql);
	this->_sqlDataAdapter = gcnew System::Data::SqlClient::SqlDataAdapter(this->_sqlCommand);
	this->_sqlCommand->CommandText = this->_requestSql;
	this->_dataSet = gcnew System::Data::DataSet();
	this->_sqlDataAdapter->Fill(this->_dataSet, dataTableName);
	return this->_dataSet;
}

void AccesBdd::actionRows(System::String^) {
	throw gcnew System::NotImplementedException();
}

int AccesBdd::actionRowsID(System::String^) {
	return 0;
}

void AccesBdd::setSql(System::String^ requestSql) {
	this->_requestSql = requestSql;
}