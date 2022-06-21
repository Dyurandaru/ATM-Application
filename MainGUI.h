#pragma once

#include "WithdrawGUIform.h"
#include "DepositGUI.h"
#include "BalanceGUI.h"
#include "FundTransferGUI.h"
#include "PINChange.h"
//#include "LoginGUI.h"

namespace ATMMachineProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	
	

	/// <summary>
	/// Summary for MainGUI
	/// </summary>
	public ref class MainGUI : public System::Windows::Forms::Form
	{
	public:
		MainGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
		MainGUI(String^ accNumdta)
		{
			InitializeComponent();
			label2->Text = accNumdta;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ LogoutButton;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ changepinbutton;
	private: System::Windows::Forms::Button^ profileButton;



	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainGUI::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->changepinbutton = (gcnew System::Windows::Forms::Button());
			this->profileButton = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LogoutButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(75, 110);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Withdraw";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainGUI::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(274, 110);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Deposit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainGUI::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(75, 193);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Balance";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainGUI::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(150, 83);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 430);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->changepinbutton);
			this->panel2->Controls->Add(this->profileButton);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->LogoutButton);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Location = System::Drawing::Point(4, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(492, 422);
			this->panel2->TabIndex = 3;
			// 
			// changepinbutton
			// 
			this->changepinbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->changepinbutton->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->changepinbutton->Location = System::Drawing::Point(75, 276);
			this->changepinbutton->Name = L"changepinbutton";
			this->changepinbutton->Size = System::Drawing::Size(140, 50);
			this->changepinbutton->TabIndex = 4;
			this->changepinbutton->Text = L"Change PIN";
			this->changepinbutton->UseVisualStyleBackColor = true;
			this->changepinbutton->Click += gcnew System::EventHandler(this, &MainGUI::changepinbutton_Click);
			// 
			// profileButton
			// 
			this->profileButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->profileButton->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profileButton->Location = System::Drawing::Point(274, 276);
			this->profileButton->Name = L"profileButton";
			this->profileButton->Size = System::Drawing::Size(140, 50);
			this->profileButton->TabIndex = 5;
			this->profileButton->Text = L"Profile";
			this->profileButton->UseVisualStyleBackColor = true;
			this->profileButton->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(274, 193);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Fund Transfer";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainGUI::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(121, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 19);
			this->label4->TabIndex = 7;
			this->label4->Text = L"null";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Welcome!";
			// 
			// LogoutButton
			// 
			this->LogoutButton->BackColor = System::Drawing::Color::Black;
			this->LogoutButton->FlatAppearance->BorderSize = 0;
			this->LogoutButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->LogoutButton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogoutButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->LogoutButton->Location = System::Drawing::Point(342, 362);
			this->LogoutButton->Name = L"LogoutButton";
			this->LogoutButton->Size = System::Drawing::Size(113, 37);
			this->LogoutButton->TabIndex = 6;
			this->LogoutButton->Text = L"Logout";
			this->LogoutButton->UseVisualStyleBackColor = false;
			this->LogoutButton->Click += gcnew System::EventHandler(this, &MainGUI::LoginButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(410, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"null";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(211, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 28);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Menu";
			// 
			// MainGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(800, 600);
			this->Controls->Add(this->panel1);
			this->Name = L"MainGUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ATM Machine";
			this->Load += gcnew System::EventHandler(this, &MainGUI::MainGUI_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainGUI_Load(System::Object^ sender, System::EventArgs^ e) {
		// ====== MAIN GUI ======
		// server = 127.0.0.1
		// port = 3306
		// database = atm_machine
		// uid = root
		// pass = pass
		String^ connctString = "Server=localhost;port=3306;database=atm_machine;uid=root;password=pass;";
		MySqlConnection^ connct = gcnew MySqlConnection(connctString);
		
		connct->Open();
		MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM atm_machine.banktable WHERE account_number = '" + this->label2->Text + "';", connct);
		MySqlDataReader^ dataRead;
		dataRead = cmd->ExecuteReader();

		if (dataRead->Read())
		{
			label4->Text = dataRead->GetString("firstn");
			connct->Close();
		}
		else
		{
			connct->Close();
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	}

		   // >>>>> Withdraw GUI button
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		WithdrawGUIform^ withdraw = gcnew WithdrawGUIform(label2->Text);
		withdraw->Show();
		
	}

		   // >>>>> Balance GUI button
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		BalanceGUI^ balanceGUI = gcnew BalanceGUI(label2->Text);
		balanceGUI->Show();
		
	}

		   // >>>>> Deposit GUI button
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		DepositGUI^ depositGUI = gcnew DepositGUI(label2->Text);
		depositGUI->Show();
	}

		   // >>>>> Transfer Fund GUI button
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		FundTransferGUI^ fundtransferUI = gcnew FundTransferGUI(label2->Text);
		fundtransferUI->Show();
	}
	private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
		/*
		LoginGUI^ loginGUI = gcnew LoginGUI();
		loginGUI->Show();
		//this->Hide();
		*/
		//MessageBox::Show("Ok?");
	}

private: System::Void changepinbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	PINChange^ pinchange = gcnew PINChange(label2->Text);
	pinchange->Show();
}
};
}
