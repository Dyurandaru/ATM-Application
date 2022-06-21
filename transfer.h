#pragma once

namespace ATMMachineProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ confirmbutton;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->confirmbutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(42, 73);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(500, 284);
			this->panel1->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->maskedTextBox1);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->numericUpDown1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->confirmbutton);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(3, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(494, 278);
			this->panel2->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(135, 181);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 15);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Amount";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(79, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 15);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Account Number";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(107, 100);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 15);
			this->label5->TabIndex = 10;
			this->label5->Text = L"First Name";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(35, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 15);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Enter Details:";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown1->Location = System::Drawing::Point(205, 180);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(100, 20);
			this->numericUpDown1->TabIndex = 4;
			this->numericUpDown1->ThousandsSeparator = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 15);
			this->label2->TabIndex = 7;
			this->label2->Text = L"101001";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(311, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"₱";
			// 
			// confirmbutton
			// 
			this->confirmbutton->BackColor = System::Drawing::Color::Black;
			this->confirmbutton->FlatAppearance->BorderSize = 0;
			this->confirmbutton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->confirmbutton->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmbutton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->confirmbutton->Location = System::Drawing::Point(190, 220);
			this->confirmbutton->Name = L"confirmbutton";
			this->confirmbutton->Size = System::Drawing::Size(113, 37);
			this->confirmbutton->TabIndex = 5;
			this->confirmbutton->Text = L"Confirm";
			this->confirmbutton->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(150, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Fund Transfer";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(205, 98);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->maskedTextBox1->Location = System::Drawing::Point(205, 150);
			this->maskedTextBox1->Mask = L"000000";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->PromptChar = ' ';
			this->maskedTextBox1->Size = System::Drawing::Size(100, 20);
			this->maskedTextBox1->TabIndex = 3;
			this->maskedTextBox1->ValidatingType = System::Int32::typeid;
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(205, 124);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(114, 126);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 15);
			this->label8->TabIndex = 16;
			this->label8->Text = L"Last Name";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 411);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
