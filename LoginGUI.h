#pragma once
#include "MainGUI.h"
#include "RegisterGUI.h"

namespace ATMMachineProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for LoginGUI
	/// </summary>
	public ref class LoginGUI : public System::Windows::Forms::Form
	{
	public:
		LoginGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::MaskedTextBox^ pinInputBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ LoginButtonk;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ accountnumberInputBox;
	private: System::Windows::Forms::Button^ createaccount;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginGUI::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->createaccount = (gcnew System::Windows::Forms::Button());
			this->accountnumberInputBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->pinInputBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LoginButtonk = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(143, 131);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 277);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->createaccount);
			this->panel2->Controls->Add(this->accountnumberInputBox);
			this->panel2->Controls->Add(this->pinInputBox);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->LoginButtonk);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(494, 271);
			this->panel2->TabIndex = 3;
			// 
			// createaccount
			// 
			this->createaccount->FlatAppearance->BorderSize = 0;
			this->createaccount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->createaccount->Font = (gcnew System::Drawing::Font(L"Consolas", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createaccount->Location = System::Drawing::Point(194, 180);
			this->createaccount->Name = L"createaccount";
			this->createaccount->Size = System::Drawing::Size(110, 23);
			this->createaccount->TabIndex = 7;
			this->createaccount->Text = L"Create Account";
			this->createaccount->UseVisualStyleBackColor = true;
			this->createaccount->Click += gcnew System::EventHandler(this, &LoginGUI::createaccount_Click);
			// 
			// accountnumberInputBox
			// 
			this->accountnumberInputBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->accountnumberInputBox->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountnumberInputBox->Location = System::Drawing::Point(246, 85);
			this->accountnumberInputBox->Mask = L"000000";
			this->accountnumberInputBox->Name = L"accountnumberInputBox";
			this->accountnumberInputBox->PromptChar = ' ';
			this->accountnumberInputBox->Size = System::Drawing::Size(85, 32);
			this->accountnumberInputBox->TabIndex = 1;
			this->accountnumberInputBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pinInputBox
			// 
			this->pinInputBox->BackColor = System::Drawing::Color::White;
			this->pinInputBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pinInputBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->pinInputBox->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pinInputBox->Location = System::Drawing::Point(246, 136);
			this->pinInputBox->Mask = L"0000";
			this->pinInputBox->Name = L"pinInputBox";
			this->pinInputBox->PromptChar = ' ';
			this->pinInputBox->Size = System::Drawing::Size(65, 32);
			this->pinInputBox->TabIndex = 2;
			this->pinInputBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->pinInputBox->UseSystemPasswordChar = true;
			this->pinInputBox->ValidatingType = System::Int32::typeid;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(190, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"PIN:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(80, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 22);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Account Number:";
			// 
			// LoginButtonk
			// 
			this->LoginButtonk->BackColor = System::Drawing::Color::Black;
			this->LoginButtonk->FlatAppearance->BorderSize = 0;
			this->LoginButtonk->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LoginButtonk->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButtonk->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->LoginButtonk->Location = System::Drawing::Point(191, 220);
			this->LoginButtonk->Name = L"LoginButtonk";
			this->LoginButtonk->Size = System::Drawing::Size(113, 37);
			this->LoginButtonk->TabIndex = 3;
			this->LoginButtonk->Text = L"Login";
			this->LoginButtonk->UseVisualStyleBackColor = false;
			this->LoginButtonk->Click += gcnew System::EventHandler(this, &LoginGUI::LoginButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(204, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(90, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Login";
			// 
			// LoginGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->panel1);
			this->Name = L"LoginGUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ATM Login";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		//
		// Login 
		//
		String^ connctString = "Server=localhost;port=3306;database=atm_machine;uid=root;password=pass;";
		MySqlConnection^ connct = gcnew MySqlConnection(connctString);

	private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int databaseAccountNum, databasePin, accountNumberInput, pincodeInput;
		connct->Open();
		
		try
		{
			
			accountNumberInput = Convert::ToInt32(accountnumberInputBox->Text);
			pincodeInput = Convert::ToInt32(pinInputBox->Text);
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM atm_machine.banktable WHERE account_number='" + accountNumberInput + "' AND pincode ='" + pincodeInput + "';", connct);
			MySqlDataReader^ dataRead;
			dataRead = cmd->ExecuteReader();

			if (dataRead->Read())
			{
				databaseAccountNum = dataRead->GetInt32("account_number");
				databasePin = dataRead->GetInt32("pincode");
				//MessageBox::Show("Working"); Debug
					
				MainGUI^ mainUI = gcnew MainGUI(databaseAccountNum.ToString());
				mainUI->Show();
				this->Hide();
				connct->Close();
				
			}
			else
			{
				connct->Close();
				MessageBox::Show("Wrong Account Number or PIN.");
			}
		}
		catch(Exception^ e)
		{
			MessageBox::Show("Please Enter Account Number or PIN "+ e->HelpLink);
			//MessageBox::Show(e->Message);
			connct->Close();
		}
	}
private: System::Void createaccount_Click(System::Object^ sender, System::EventArgs^ e) {
	RegisterGUI^ regUI = gcnew RegisterGUI();
	regUI->Show();
}


};
}
