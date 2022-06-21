﻿#pragma once

namespace ATMMachineProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for DepositGUI
	/// </summary>
	public ref class DepositGUI : public System::Windows::Forms::Form
	{
	public:
		DepositGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		DepositGUI(String^ accNumdta)
		{
			InitializeComponent();
			label4->Text = accNumdta;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DepositGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ withdrawbutton1;
	private: System::Windows::Forms::NumericUpDown^ depositInput;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DepositGUI::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->withdrawbutton1 = (gcnew System::Windows::Forms::Button());
			this->depositInput = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->depositInput))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(41, 61);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 264);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->withdrawbutton1);
			this->panel2->Controls->Add(this->depositInput);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(494, 258);
			this->panel2->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(19, 14);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"null";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(118, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"₱";
			// 
			// withdrawbutton1
			// 
			this->withdrawbutton1->BackColor = System::Drawing::Color::Black;
			this->withdrawbutton1->FlatAppearance->BorderSize = 0;
			this->withdrawbutton1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->withdrawbutton1->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->withdrawbutton1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->withdrawbutton1->Location = System::Drawing::Point(190, 192);
			this->withdrawbutton1->Name = L"withdrawbutton1";
			this->withdrawbutton1->Size = System::Drawing::Size(113, 37);
			this->withdrawbutton1->TabIndex = 4;
			this->withdrawbutton1->Text = L"Proceed";
			this->withdrawbutton1->UseVisualStyleBackColor = false;
			this->withdrawbutton1->Click += gcnew System::EventHandler(this, &DepositGUI::withdrawbutton1_Click);
			// 
			// depositInput
			// 
			this->depositInput->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->depositInput->DecimalPlaces = 2;
			this->depositInput->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->depositInput->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			this->depositInput->Location = System::Drawing::Point(146, 133);
			this->depositInput->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->depositInput->Name = L"depositInput";
			this->depositInput->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->depositInput->Size = System::Drawing::Size(216, 26);
			this->depositInput->TabIndex = 3;
			this->depositInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->depositInput->ThousandsSeparator = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(93, 93);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Amount:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(151, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Deposit Cash";
			// 
			// DepositGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 411);
			this->Controls->Add(this->panel1);
			this->Name = L"DepositGUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Deposit";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->depositInput))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	// Database connection
	String^ connctString = "Server=localhost;port=3306;database=atm_machine;uid=root;password=pass;";
	MySqlConnection^ connct = gcnew MySqlConnection(connctString);

	private: System::Void withdrawbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
		int newBalance, currentBalance, inputAmount;
		inputAmount = Convert::ToInt32(depositInput->Value);
		
		if (inputAmount > 0)
		{
			try
			{
				connct->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand("SELECT balance FROM atm_machine.banktable WHERE account_number = '" + this->label4->Text + "';", connct);
				MySqlDataReader^ dataRead;
				dataRead = cmd->ExecuteReader();
				if (dataRead->Read())
				{
					currentBalance = Convert::ToInt32(dataRead->GetDouble("balance"));

					connct->Close();
					newBalance = currentBalance + inputAmount;
					connct->Open();

					MySqlCommand^ cmd2 = gcnew MySqlCommand("UPDATE atm_machine.banktable SET balance = '" + newBalance + "' WHERE account_number = '" + this->label4->Text + "';", connct);

					cmd2->ExecuteReader();
					connct->Close();
					MessageBox::Show("Deposit Successful!");
					this->Hide();
				}
				else
				{
					MessageBox::Show("Read Write Data Failed!");
					connct->Close();
				}
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
				connct->Close();
			}
		}
		else
		{
			MessageBox::Show("Please Enter Amount.");
		}
		
	}
};
}
