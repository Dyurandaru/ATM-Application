#pragma once

namespace ATMMachineProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for PINChange
	/// </summary>
	public ref class PINChange : public System::Windows::Forms::Form
	{
	public:
		PINChange(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		PINChange(String^ accNumdta)
		{
			InitializeComponent();
			accountnum->Text = accNumdta;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PINChange()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ confirmbutton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ accountnum;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ pin2;
	private: System::Windows::Forms::MaskedTextBox^ pin1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PINChange::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->accountnum = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pin2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->pin1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->confirmbutton = (gcnew System::Windows::Forms::Button());
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
			this->panel1->Location = System::Drawing::Point(42, 67);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 277);
			this->panel1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->accountnum);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->pin2);
			this->panel2->Controls->Add(this->pin1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->confirmbutton);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(494, 271);
			this->panel2->TabIndex = 3;
			// 
			// accountnum
			// 
			this->accountnum->AutoSize = true;
			this->accountnum->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountnum->Location = System::Drawing::Point(13, 9);
			this->accountnum->Name = L"accountnum";
			this->accountnum->Size = System::Drawing::Size(35, 15);
			this->accountnum->TabIndex = 10;
			this->accountnum->Text = L"null";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(44, 62);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 15);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Enter PIN:";
			// 
			// pin2
			// 
			this->pin2->BackColor = System::Drawing::SystemColors::Window;
			this->pin2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pin2->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pin2->Location = System::Drawing::Point(254, 141);
			this->pin2->Mask = L"0000";
			this->pin2->Name = L"pin2";
			this->pin2->PromptChar = ' ';
			this->pin2->Size = System::Drawing::Size(58, 32);
			this->pin2->TabIndex = 2;
			this->pin2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->pin2->UseSystemPasswordChar = true;
			this->pin2->ValidatingType = System::Int32::typeid;
			// 
			// pin1
			// 
			this->pin1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pin1->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pin1->Location = System::Drawing::Point(254, 87);
			this->pin1->Mask = L"0000";
			this->pin1->Name = L"pin1";
			this->pin1->PromptChar = ' ';
			this->pin1->Size = System::Drawing::Size(58, 32);
			this->pin1->TabIndex = 1;
			this->pin1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->pin1->UseSystemPasswordChar = true;
			this->pin1->ValidatingType = System::Int32::typeid;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(153, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Confirm PIN:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(181, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"New PIN:";
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(112, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 35);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PINChange::button1_Click);
			// 
			// confirmbutton
			// 
			this->confirmbutton->BackColor = System::Drawing::Color::Black;
			this->confirmbutton->FlatAppearance->BorderSize = 0;
			this->confirmbutton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->confirmbutton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmbutton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->confirmbutton->Location = System::Drawing::Point(265, 213);
			this->confirmbutton->Name = L"confirmbutton";
			this->confirmbutton->Size = System::Drawing::Size(115, 35);
			this->confirmbutton->TabIndex = 3;
			this->confirmbutton->Text = L"Confirm";
			this->confirmbutton->UseVisualStyleBackColor = false;
			this->confirmbutton->Click += gcnew System::EventHandler(this, &PINChange::confirmbutton_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(159, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Change PIN";
			// 
			// PINChange
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 411);
			this->Controls->Add(this->panel1);
			this->Name = L"PINChange";
			this->Text = L"PINChange";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		// Database Connection
		String^ connctString = "Server=localhost;port=3306;database=atm_machine;uid=root;password=pass;";
		MySqlConnection^ connct = gcnew MySqlConnection(connctString);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
private: System::Void confirmbutton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (pin1->Text != "" && pin2->Text != "" && pin1->Text->Length == 4 && pin2->Text->Length == 4)
	{
		if (pin1->Text == pin2->Text)
		{
			try
			{
				connct->Open();

				MySqlCommand^ cmd = gcnew MySqlCommand("UPDATE atm_machine.banktable SET pincode = '" + this->pin2->Text + "' WHERE account_number = '" + this->accountnum->Text + "';", connct);

				cmd->ExecuteReader();
				connct->Close();
				MessageBox::Show("PIN Changed, Please Login.");
				Application::Exit();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
				connct->Close();
			}
		}
		else
		{
			MessageBox::Show("PIN did not matched.");
		}
	}
	else
	{
		MessageBox::Show("Please Enter PIN.");
	}
}
};
}
