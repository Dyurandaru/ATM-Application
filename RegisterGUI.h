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
	/// Summary for RegisterGUI
	/// </summary>
	public ref class RegisterGUI : public System::Windows::Forms::Form
	{
	public:
		RegisterGUI(void)
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
		~RegisterGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::MaskedTextBox^ pincodebox1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MaskedTextBox^ pincodebox2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::Button^ CreateButton;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterGUI::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->CreateButton = (gcnew System::Windows::Forms::Button());
			this->pincodebox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pincodebox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(42, 73);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 264);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->CancelButton);
			this->panel2->Controls->Add(this->CreateButton);
			this->panel2->Controls->Add(this->pincodebox2);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->pincodebox1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(494, 258);
			this->panel2->TabIndex = 3;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &RegisterGUI::panel2_Paint);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 50);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 15);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Enter Details:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(265, 80);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 15);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Last Name:";
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(348, 77);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			// 
			// CancelButton
			// 
			this->CancelButton->BackColor = System::Drawing::Color::White;
			this->CancelButton->FlatAppearance->BorderSize = 0;
			this->CancelButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CancelButton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelButton->ForeColor = System::Drawing::Color::Black;
			this->CancelButton->Location = System::Drawing::Point(111, 200);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(113, 37);
			this->CancelButton->TabIndex = 5;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = false;
			this->CancelButton->Click += gcnew System::EventHandler(this, &RegisterGUI::CancelButton_Click);
			// 
			// CreateButton
			// 
			this->CreateButton->BackColor = System::Drawing::Color::Black;
			this->CreateButton->FlatAppearance->BorderSize = 0;
			this->CreateButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CreateButton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->CreateButton->Location = System::Drawing::Point(261, 200);
			this->CreateButton->Name = L"CreateButton";
			this->CreateButton->Size = System::Drawing::Size(113, 37);
			this->CreateButton->TabIndex = 4;
			this->CreateButton->Text = L"Create";
			this->CreateButton->UseVisualStyleBackColor = false;
			this->CreateButton->Click += gcnew System::EventHandler(this, &RegisterGUI::CreateButton_Click);
			// 
			// pincodebox2
			// 
			this->pincodebox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pincodebox2->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pincodebox2->Location = System::Drawing::Point(234, 158);
			this->pincodebox2->Mask = L"0000";
			this->pincodebox2->Name = L"pincodebox2";
			this->pincodebox2->PromptChar = ' ';
			this->pincodebox2->Size = System::Drawing::Size(55, 32);
			this->pincodebox2->TabIndex = 3;
			this->pincodebox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->pincodebox2->UseSystemPasswordChar = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(137, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 15);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Confirm PIN:";
			// 
			// pincodebox1
			// 
			this->pincodebox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pincodebox1->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pincodebox1->Location = System::Drawing::Point(234, 117);
			this->pincodebox1->Mask = L"0000";
			this->pincodebox1->Name = L"pincodebox1";
			this->pincodebox1->PromptChar = ' ';
			this->pincodebox1->Size = System::Drawing::Size(55, 32);
			this->pincodebox1->TabIndex = 2;
			this->pincodebox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->pincodebox1->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(193, 123);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 15);
			this->label3->TabIndex = 3;
			this->label3->Text = L"PIN:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(50, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"First Name:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(201, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Register";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(140, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// RegisterGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(584, 411);
			this->Controls->Add(this->panel1);
			this->Name = L"RegisterGUI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterGUI";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void CreateButton_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ connctString = "Server=localhost;port=3306;database=atm_machine;uid=root;password=pass;";
	MySqlConnection^ connct = gcnew MySqlConnection(connctString);
	// textbox 1 and textbox 2 is firstn and lastn


	if (textBox1->Text != "" && textBox2->Text != "" && pincodebox1->Text != "" && pincodebox2->Text != "" && pincodebox1->Text->Length == 4 && pincodebox2->Text->Length == 4)
	{
		if (pincodebox1->Text == pincodebox2->Text)
		{
			try
			{
				connct->Open();

				MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO atm_machine.banktable (firstn, lastn, balance, pincode) VALUES ('" + this->textBox1->Text + "','" + this->textBox2->Text + "', '0', '" + pincodebox2->Text + "');", connct);

				cmd->ExecuteReader();
				connct->Close();
				MessageBox::Show("Account Created, Please Login.");
				this->Hide();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message);
			}
		}
		else
		{
			MessageBox::Show("PIN did not match!");
		}
	}
	else
	{
		MessageBox::Show("Please Enter Name or PIN.");
	}
	


}
private: System::Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
