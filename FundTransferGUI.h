#pragma once
#include <cstdint>
namespace ATMMachineProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for FundTransferGUI
	/// </summary>
	public ref class FundTransferGUI : public System::Windows::Forms::Form
	{
	public:
		FundTransferGUI(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		FundTransferGUI(String^ accNumdta)
		{
			InitializeComponent();
			account_number_label->Text = accNumdta;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FundTransferGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;




	private: System::Windows::Forms::MaskedTextBox^ accountnum_inputbox;



	private: System::Windows::Forms::Label^ label5;



	private: System::Windows::Forms::Label^ label2;


	private: System::Windows::Forms::Label^ account_number_label;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ amount_inputbox;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ confirm_button;
	private: System::Windows::Forms::Button^ cancel_button;







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FundTransferGUI::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->confirm_button = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->amount_inputbox = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->accountnum_inputbox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->account_number_label = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->amount_inputbox))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(42, 63);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 284);
			this->panel1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->cancel_button);
			this->panel2->Controls->Add(this->confirm_button);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->amount_inputbox);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->accountnum_inputbox);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->account_number_label);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(494, 278);
			this->panel2->TabIndex = 3;
			// 
			// cancel_button
			// 
			this->cancel_button->BackColor = System::Drawing::Color::White;
			this->cancel_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cancel_button->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_button->ForeColor = System::Drawing::Color::Black;
			this->cancel_button->Location = System::Drawing::Point(105, 220);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(115, 35);
			this->cancel_button->TabIndex = 4;
			this->cancel_button->Text = L"Cancel";
			this->cancel_button->UseVisualStyleBackColor = false;
			this->cancel_button->Click += gcnew System::EventHandler(this, &FundTransferGUI::cancel_button_Click);
			// 
			// confirm_button
			// 
			this->confirm_button->BackColor = System::Drawing::Color::Black;
			this->confirm_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->confirm_button->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm_button->ForeColor = System::Drawing::Color::White;
			this->confirm_button->Location = System::Drawing::Point(267, 220);
			this->confirm_button->Name = L"confirm_button";
			this->confirm_button->Size = System::Drawing::Size(115, 35);
			this->confirm_button->TabIndex = 3;
			this->confirm_button->Text = L"Confirm";
			this->confirm_button->UseVisualStyleBackColor = false;
			this->confirm_button->Click += gcnew System::EventHandler(this, &FundTransferGUI::confirm_button_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(163, 162);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(72, 19);
			this->label7->TabIndex = 28;
			this->label7->Text = L"Amount:";
			// 
			// amount_inputbox
			// 
			this->amount_inputbox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->amount_inputbox->DecimalPlaces = 2;
			this->amount_inputbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amount_inputbox->Location = System::Drawing::Point(241, 159);
			this->amount_inputbox->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->amount_inputbox->Name = L"amount_inputbox";
			this->amount_inputbox->Size = System::Drawing::Size(118, 26);
			this->amount_inputbox->TabIndex = 2;
			this->amount_inputbox->ThousandsSeparator = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(375, 157);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 24);
			this->label6->TabIndex = 27;
			this->label6->Text = L"₱";
			// 
			// accountnum_inputbox
			// 
			this->accountnum_inputbox->BackColor = System::Drawing::Color::WhiteSmoke;
			this->accountnum_inputbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->accountnum_inputbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->accountnum_inputbox->Location = System::Drawing::Point(241, 117);
			this->accountnum_inputbox->Mask = L"000000";
			this->accountnum_inputbox->Name = L"accountnum_inputbox";
			this->accountnum_inputbox->Size = System::Drawing::Size(100, 19);
			this->accountnum_inputbox->TabIndex = 1;
			this->accountnum_inputbox->ValidatingType = System::Int32::typeid;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(91, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 19);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Account Number:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(33, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 15);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Enter Details:";
			// 
			// account_number_label
			// 
			this->account_number_label->AutoSize = true;
			this->account_number_label->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->account_number_label->Location = System::Drawing::Point(13, 13);
			this->account_number_label->Name = L"account_number_label";
			this->account_number_label->Size = System::Drawing::Size(35, 15);
			this->account_number_label->TabIndex = 21;
			this->account_number_label->Text = L"null";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(146, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 32);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Fund Transfer";
			// 
			// FundTransferGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 411);
			this->Controls->Add(this->panel1);
			this->Name = L"FundTransferGUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Fund Transfer";
			this->Load += gcnew System::EventHandler(this, &FundTransferGUI::FundTransferGUI_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->amount_inputbox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// Database Connection
		String^ connctString = "Server=localhost;port=3306;database=atm_machine;uid=root;password=pass;";
		MySqlConnection^ connct = gcnew MySqlConnection(connctString);
	private: System::Void FundTransferGUI_Load(System::Object^ sender, System::EventArgs^ e) {
		
		
	}


private: System::Void confirm_button_Click(System::Object^ sender, System::EventArgs^ e) {
	int64_t newBalance, newBalance2, databaseBalance, databaseBalance2;
	bool rwFail = false;
	bool usrRWData = false;
	int inputAmount = Convert::ToInt32(amount_inputbox->Value); // where user enter amount

	if (inputAmount != 0 && accountnum_inputbox->Text != "")
	{
		if (account_number_label->Text != accountnum_inputbox->Text)
		{
			//
			// ================================== Read and Write data from database for user 2 ====================================
			// ADD
			// Transfer money to user 2
			//
			try
			{
				connct->Open();
				// get the data on database
				MySqlCommand^ cmd2 = gcnew MySqlCommand("SELECT * FROM atm_machine.banktable WHERE account_number = '" + this->accountnum_inputbox->Text + "';", connct); // <--- from user 1
				MySqlDataReader^ dataRead2;
				dataRead2 = cmd2->ExecuteReader();

				if (dataRead2->Read())
				{
					databaseBalance2 = Convert::ToInt64(dataRead2->GetDouble("balance"));
					connct->Close(); // close current sql connection

					newBalance2 = databaseBalance2 + inputAmount; // Add yes
					//numericUpDown2->Value = newBalance2; //Debug box 

					rwFail = false;
				}
				else
				{
					rwFail = true;
					MessageBox::Show("Wrong Account Number or Name.");
					connct->Close();
				}
			}
			catch (Exception^ ex)
			{
				rwFail = true;
				MessageBox::Show(ex->Message);
			}

			//
			// =============================== Read and Write data from database for user 1 =============================
			// MINUS
			// Current user 
			//
			try
			{
				connct->Open();
				// get the data on database
				MySqlCommand^ cmd1 = gcnew MySqlCommand("SELECT * FROM atm_machine.banktable WHERE account_number = '" + this->account_number_label->Text + "';", connct); // <--- from user 1
				MySqlDataReader^ dataRead;
				dataRead = cmd1->ExecuteReader();

				if (dataRead->Read() && rwFail == false)
				{
					// get data read test
					databaseBalance = Convert::ToInt64(dataRead->GetDouble("balance")); // get data from balance column
					connct->Close(); // close current database

					newBalance = databaseBalance - inputAmount; // minus the current balance from database and the amount in user input

					//numericUpDown1->Value = newBalance; // Debug box show current value
					if (newBalance >= 0)
					{
						connct->Open();
						//write data
						MySqlCommand^ cmds1 = gcnew MySqlCommand("UPDATE atm_machine.banktable SET balance = '" + newBalance + "' WHERE account_number = '" + this->account_number_label->Text + "';", connct); // <--- user 1 account number

						cmds1->ExecuteReader();
						connct->Close();
						usrRWData = true;
						rwFail = false;
					}
					else
					{
						usrRWData = false;
						rwFail = true;
						MessageBox::Show("Insufficient Fund!");

					}
				}
				else
				{
					rwFail = true;
					connct->Close();
				}

			}
			catch (Exception^ e)
			{
				rwFail = true;
				MessageBox::Show(e->Message);
			}
			
			if (usrRWData)
			{
				//
				// write Data in Database
				// 
				try
				{
					connct->Open();

					MySqlCommand^ cmds2 = gcnew MySqlCommand("UPDATE atm_machine.banktable SET balance = '" + newBalance2 + "' WHERE account_number = '" + this->accountnum_inputbox->Text + "';", connct); // <--- user 2 account number

					cmds2->ExecuteReader();
					connct->Close();
					rwFail = false;
					
				}
				catch (Exception^ exe)
				{
					MessageBox::Show(exe->Message);
				}

			}

			if (!rwFail)
			{
				MessageBox::Show("Transfer Successful!");
				this->Hide();
			}
			else
			{
				MessageBox::Show("Transfer Failed!");
			}
		}
		else
		{
			MessageBox::Show("Illegal");
		}
	}
	else
	{
		MessageBox::Show("Please Enter Account Number or Amount.");
	}
	
}
private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}

