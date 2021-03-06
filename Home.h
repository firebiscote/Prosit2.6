#pragma once

#include "pch.h"
#include "CAD.h"
#include "MapClient.h"
#include "GestionClient.h"

namespace Prosit26 {

	public ref class Home : public Form {
	public:
		Home(void) {
			InitializeComponent();
		}

	protected:
		~Home() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGrid;
	private: System::Windows::Forms::TextBox^ newClientBox;
	private: System::Windows::Forms::Button^ addButton;
	private: System::ComponentModel::Container^ components;
	private: System::Windows::Forms::TextBox^ deleteClientBox;
	private: System::Windows::Forms::Button^ deleteButton;
	private: System::Windows::Forms::TextBox^ updateActualClientBox;
	private: System::Windows::Forms::TextBox^ updateNewClientBox;
	private: System::Windows::Forms::Button^ updateClientButton;
	private: System::Windows::Forms::TextBox^ newAddressBox;
	private: System::Windows::Forms::Button^ updateAddressButton;
	private: System::Windows::Forms::TextBox^ updateActualAddressBox;
	private: System::Windows::Forms::TextBox^ updateNewAddressBox;
	private: Services::GestionClient^ gestionClient;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void) {
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->newClientBox = (gcnew System::Windows::Forms::TextBox());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->deleteClientBox = (gcnew System::Windows::Forms::TextBox());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->updateActualClientBox = (gcnew System::Windows::Forms::TextBox());
			this->updateNewClientBox = (gcnew System::Windows::Forms::TextBox());
			this->updateClientButton = (gcnew System::Windows::Forms::Button());
			this->newAddressBox = (gcnew System::Windows::Forms::TextBox());
			this->updateAddressButton = (gcnew System::Windows::Forms::Button());
			this->updateActualAddressBox = (gcnew System::Windows::Forms::TextBox());
			this->updateNewAddressBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGrid
			// 
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid->Location = System::Drawing::Point(336, 12);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->RowHeadersWidth = 51;
			this->dataGrid->RowTemplate->Height = 24;
			this->dataGrid->Size = System::Drawing::Size(505, 444);
			this->dataGrid->TabIndex = 0;
			// 
			// newClientBox
			// 
			this->newClientBox->Location = System::Drawing::Point(12, 12);
			this->newClientBox->Name = L"newClientBox";
			this->newClientBox->Size = System::Drawing::Size(100, 22);
			this->newClientBox->TabIndex = 1;
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(225, 11);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(75, 23);
			this->addButton->TabIndex = 2;
			this->addButton->Text = L"add";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &Home::addButton_Click);
			// 
			// deleteClientBox
			// 
			this->deleteClientBox->Location = System::Drawing::Point(12, 41);
			this->deleteClientBox->Name = L"deleteClientBox";
			this->deleteClientBox->Size = System::Drawing::Size(100, 22);
			this->deleteClientBox->TabIndex = 3;
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(119, 40);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(75, 23);
			this->deleteButton->TabIndex = 4;
			this->deleteButton->Text = L"delete";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &Home::deleteButton_Click);
			// 
			// updateActualClientBox
			// 
			this->updateActualClientBox->Location = System::Drawing::Point(13, 83);
			this->updateActualClientBox->Name = L"updateActualClientBox";
			this->updateActualClientBox->Size = System::Drawing::Size(100, 22);
			this->updateActualClientBox->TabIndex = 5;
			// 
			// updateNewClientBox
			// 
			this->updateNewClientBox->Location = System::Drawing::Point(12, 112);
			this->updateNewClientBox->Name = L"updateNewClientBox";
			this->updateNewClientBox->Size = System::Drawing::Size(100, 22);
			this->updateNewClientBox->TabIndex = 6;
			// 
			// updateClientButton
			// 
			this->updateClientButton->Location = System::Drawing::Point(119, 97);
			this->updateClientButton->Name = L"updateClientButton";
			this->updateClientButton->Size = System::Drawing::Size(75, 23);
			this->updateClientButton->TabIndex = 7;
			this->updateClientButton->Text = L"update C";
			this->updateClientButton->UseVisualStyleBackColor = true;
			this->updateClientButton->Click += gcnew System::EventHandler(this, &Home::updateClientButton_Click);
			// 
			// newAddressBox
			// 
			this->newAddressBox->Location = System::Drawing::Point(119, 12);
			this->newAddressBox->Name = L"newAddressBox";
			this->newAddressBox->Size = System::Drawing::Size(100, 22);
			this->newAddressBox->TabIndex = 8;
			// 
			// updateAddressButton
			// 
			this->updateAddressButton->Location = System::Drawing::Point(119, 169);
			this->updateAddressButton->Name = L"updateAddressButton";
			this->updateAddressButton->Size = System::Drawing::Size(75, 23);
			this->updateAddressButton->TabIndex = 9;
			this->updateAddressButton->Text = L"update A";
			this->updateAddressButton->UseVisualStyleBackColor = true;
			this->updateAddressButton->Click += gcnew System::EventHandler(this, &Home::updateAddressButton_Click);
			// 
			// updateActualAddressBox
			// 
			this->updateActualAddressBox->Location = System::Drawing::Point(13, 154);
			this->updateActualAddressBox->Name = L"updateActualAddressBox";
			this->updateActualAddressBox->Size = System::Drawing::Size(100, 22);
			this->updateActualAddressBox->TabIndex = 10;
			// 
			// updateNewAddressBox
			// 
			this->updateNewAddressBox->Location = System::Drawing::Point(13, 183);
			this->updateNewAddressBox->Name = L"updateNewAddressBox";
			this->updateNewAddressBox->Size = System::Drawing::Size(100, 22);
			this->updateNewAddressBox->TabIndex = 11;
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 468);
			this->Controls->Add(this->updateNewAddressBox);
			this->Controls->Add(this->updateActualAddressBox);
			this->Controls->Add(this->updateAddressButton);
			this->Controls->Add(this->newAddressBox);
			this->Controls->Add(this->updateClientButton);
			this->Controls->Add(this->updateNewClientBox);
			this->Controls->Add(this->updateActualClientBox);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->deleteClientBox);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->newClientBox);
			this->Controls->Add(this->dataGrid);
			this->Name = L"Home";
			this->Text = L"Home";
			this->Load += gcnew System::EventHandler(this, &Home::Home_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Home_Load(System::Object^ sender, System::EventArgs^ e) {
		this->gestionClient = gcnew Services::GestionClient();
		this->loadDataGridView();
	}

	private: void loadDataGridView() {
		this->dataGrid->DataSource = this->gestionClient->listeClient("Client");
		this->dataGrid->DataMember = "Client";
	}

	private: System::Void addButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->gestionClient->addClient(this->newClientBox->Text, this->newAddressBox->Text);
		this->loadDataGridView();
	}

	private: System::Void deleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->gestionClient->deleteClient(this->deleteClientBox->Text);
		this->loadDataGridView();
	}

	private: System::Void updateClientButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->gestionClient->updateClient(this->updateActualClientBox->Text, this->updateNewClientBox->Text);
		this->loadDataGridView();
	}

	private: System::Void updateAddressButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->gestionClient->updateAddress(this->updateActualAddressBox->Text, this->updateNewAddressBox->Text);
		this->loadDataGridView();
	}
};
}
