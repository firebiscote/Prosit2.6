#pragma once

#include "AccesBdd.h"
#include "MapEmploye.h"
#include "GestionEmploye.h"

namespace Prosit26 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Home : public System::Windows::Forms::Form {
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
	private: System::Windows::Forms::Button^ homeButtonModify;
	private: System::Windows::Forms::Button^ homeButtonDelete;
	private: System::Windows::Forms::Button^ homeButtonAdd;
	private: System::Windows::Forms::TextBox^ modifyTB1;
	private: System::Windows::Forms::TextBox^ modifyTB2;
	private: System::Windows::Forms::Button^ modifyProcess;
	private: System::Windows::Forms::Button^ backButton;
	private: System::ComponentModel::Container^ components;


	private: 
		void initialiseHome() {
			this->SuspendLayout();
			this->Controls->Clear();
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 468);
			this->Controls->Add(this->homeButtonAdd);
			this->Controls->Add(this->homeButtonDelete);
			this->Controls->Add(this->homeButtonModify);
			this->Controls->Add(this->dataGrid);
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		void initialiseModify() {
			this->SuspendLayout();
			this->Controls->Clear();
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 468);
			this->Controls->Add(this->modifyProcess);
			this->Controls->Add(this->modifyTB2);
			this->Controls->Add(this->modifyTB1);
			this->Controls->Add(this->backButton);
			this->ResumeLayout(false);
			this->PerformLayout();
		}

#pragma region Windows Form Designer generated code
		void InitializeComponent(void) {
			this->dataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->homeButtonModify = (gcnew System::Windows::Forms::Button());
			this->homeButtonDelete = (gcnew System::Windows::Forms::Button());
			this->homeButtonAdd = (gcnew System::Windows::Forms::Button());
			this->modifyTB1 = (gcnew System::Windows::Forms::TextBox());
			this->modifyTB2 = (gcnew System::Windows::Forms::TextBox());
			this->modifyProcess = (gcnew System::Windows::Forms::Button());
			this->backButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGrid
			// 
			this->dataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGrid->DataMember = L"Employe";
			this->dataGrid->Location = System::Drawing::Point(125, 12);
			this->dataGrid->Name = L"dataGrid";
			this->dataGrid->RowHeadersWidth = 51;
			this->dataGrid->RowTemplate->Height = 24;
			this->dataGrid->Size = System::Drawing::Size(568, 320);
			this->dataGrid->TabIndex = 0;
			// 
			// homeButtonModify
			// 
			this->homeButtonModify->Location = System::Drawing::Point(125, 380);
			this->homeButtonModify->Name = L"homeButtonModify";
			this->homeButtonModify->Size = System::Drawing::Size(100, 40);
			this->homeButtonModify->TabIndex = 1;
			this->homeButtonModify->Text = L"Modify";
			this->homeButtonModify->UseVisualStyleBackColor = true;
			this->homeButtonModify->Click += gcnew System::EventHandler(this, &Home::homeButtonModify_Click);
			// 
			// homeButtonDelete
			// 
			this->homeButtonDelete->Location = System::Drawing::Point(361, 380);
			this->homeButtonDelete->Name = L"homeButtonDelete";
			this->homeButtonDelete->Size = System::Drawing::Size(100, 40);
			this->homeButtonDelete->TabIndex = 2;
			this->homeButtonDelete->Text = L"Delete";
			this->homeButtonDelete->UseVisualStyleBackColor = true;
			// 
			// homeButtonAdd
			// 
			this->homeButtonAdd->Location = System::Drawing::Point(593, 380);
			this->homeButtonAdd->Name = L"homeButtonAdd";
			this->homeButtonAdd->Size = System::Drawing::Size(100, 40);
			this->homeButtonAdd->TabIndex = 3;
			this->homeButtonAdd->Text = L"Add";
			this->homeButtonAdd->UseVisualStyleBackColor = true;
			// 
			// modifyTB1
			// 
			this->modifyTB1->Location = System::Drawing::Point(135, 96);
			this->modifyTB1->Name = L"modifyTB1";
			this->modifyTB1->Size = System::Drawing::Size(130, 22);
			this->modifyTB1->TabIndex = 4;
			// 
			// modifyTB2
			// 
			this->modifyTB2->Location = System::Drawing::Point(533, 96);
			this->modifyTB2->Name = L"modifyTB2";
			this->modifyTB2->Size = System::Drawing::Size(130, 22);
			this->modifyTB2->TabIndex = 5;
			// 
			// modifyProcess
			// 
			this->modifyProcess->Location = System::Drawing::Point(346, 173);
			this->modifyProcess->Name = L"modifyProcess";
			this->modifyProcess->Size = System::Drawing::Size(100, 40);
			this->modifyProcess->TabIndex = 6;
			this->modifyProcess->Text = L"Process";
			this->modifyProcess->UseVisualStyleBackColor = true;
			this->modifyProcess->Click += gcnew System::EventHandler(this, &Home::modifyProcess_Click);
			// 
			// backButton
			// 
			this->backButton->Location = System::Drawing::Point(12, 12);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(45, 41);
			this->backButton->TabIndex = 7;
			this->backButton->Text = L"<";
			this->backButton->UseVisualStyleBackColor = true;
			this->backButton->Click += gcnew System::EventHandler(this, &Home::backButton_Click);
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(853, 468);
			this->Controls->Add(this->homeButtonAdd);
			this->Controls->Add(this->homeButtonDelete);
			this->Controls->Add(this->homeButtonModify);
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
		Services::GestionEmploye^ gestionEmploye = gcnew Services::GestionEmploye();
		this->dataGrid->DataSource = gestionEmploye->listeEmploye("Employe");
		this->dataGrid->DataMember = "Employe";
	}

	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->initialiseHome();
	}

	private: System::Void homeButtonModify_Click(System::Object^ sender, System::EventArgs^ e) {
		this->initialiseModify();
	}

	private: System::Void modifyProcess_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
