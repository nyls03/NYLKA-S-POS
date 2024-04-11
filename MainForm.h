#pragma once

namespace POS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;






	private: System::DirectoryServices::DirectorySearcher^ directorySearcher1;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;

	private: System::Windows::Forms::Button^ button2;





	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;




	private: System::Windows::Forms::DataGridView^ dataGridView1;












	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;

	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;






























	private: System::ComponentModel::IContainer^ components;
	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->directorySearcher1 = (gcnew System::DirectoryServices::DirectorySearcher());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// directorySearcher1
			// 
			this->directorySearcher1->ClientTimeout = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerPageTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			this->directorySearcher1->ServerTimeLimit = System::TimeSpan::Parse(L"-00:00:01");
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Tan;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button14);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(11, 59);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(314, 387);
			this->panel1->TabIndex = 9;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::OldLace;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(208, 283);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(93, 84);
			this->button12->TabIndex = 24;
			this->button12->Text = L"Clr";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::OldLace;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(109, 283);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(93, 84);
			this->button13->TabIndex = 23;
			this->button13->Text = L".";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::OldLace;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(10, 283);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(93, 84);
			this->button14->TabIndex = 22;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::OldLace;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(208, 193);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(93, 84);
			this->button9->TabIndex = 21;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::OldLace;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(109, 193);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(93, 84);
			this->button10->TabIndex = 20;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::OldLace;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(10, 193);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(93, 84);
			this->button11->TabIndex = 19;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::OldLace;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(208, 103);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(93, 84);
			this->button6->TabIndex = 18;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::OldLace;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(109, 103);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(93, 84);
			this->button7->TabIndex = 17;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::OldLace;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(10, 103);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(93, 84);
			this->button8->TabIndex = 16;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::OldLace;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(207, 11);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 84);
			this->button5->TabIndex = 15;
			this->button5->Text = L"9";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::OldLace;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(108, 11);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(93, 84);
			this->button4->TabIndex = 14;
			this->button4->Text = L"8";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::OldLace;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(9, 10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(93, 85);
			this->button3->TabIndex = 13;
			this->button3->Text = L"7";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Wheat;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(29, 37);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Point of Sale";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Wheat;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(12, 7);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(133, 39);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"NYLKA\'S";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2_TextChanged_1);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Tan;
			this->button1->Location = System::Drawing::Point(1050, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Admin";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Tan;
			this->button2->Location = System::Drawing::Point(427, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(302, 35);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Search Products";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::OldLace;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->GridColor = System::Drawing::Color::Wheat;
			this->dataGridView1->Location = System::Drawing::Point(331, 58);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(455, 388);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Items";
			this->Column1->MinimumWidth = 3;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 200;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Quantity";
			this->Column2->MinimumWidth = 3;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 70;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Price";
			this->Column3->MinimumWidth = 3;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 70;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Discount";
			this->Column4->MinimumWidth = 3;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 70;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Tan;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->button23);
			this->panel2->Controls->Add(this->button24);
			this->panel2->Controls->Add(this->button21);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->button20);
			this->panel2->Controls->Add(this->button19);
			this->panel2->Location = System::Drawing::Point(789, 58);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(368, 388);
			this->panel2->TabIndex = 10;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::OldLace;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(184, 286);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(164, 75);
			this->button23->TabIndex = 34;
			this->button23->Text = L"More";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::OldLace;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(14, 284);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(164, 77);
			this->button24->TabIndex = 33;
			this->button24->Text = L"Return";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::OldLace;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(184, 193);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(164, 75);
			this->button21->TabIndex = 32;
			this->button21->Text = L"Items";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::OldLace;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(14, 191);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(164, 77);
			this->button22->TabIndex = 31;
			this->button22->Text = L"Discounts";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(3, 34);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(118, 24);
			this->label13->TabIndex = 20;
			this->label13->Text = L"Item Lookup:\r\n";
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(129, 12);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(227, 56);
			this->label12->TabIndex = 20;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::OldLace;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(184, 96);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(164, 75);
			this->button20->TabIndex = 30;
			this->button20->Text = L"Item Inventory";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::OldLace;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(14, 94);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(164, 77);
			this->button19->TabIndex = 29;
			this->button19->Text = L"Transactions";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MainForm::button19_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Wheat;
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Location = System::Drawing::Point(11, 452);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(364, 162);
			this->panel3->TabIndex = 11;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(138, 8);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(209, 42);
			this->label11->TabIndex = 24;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(138, 109);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(209, 42);
			this->label9->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(14, 17);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 33);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Subtotal:";
			this->label6->Click += gcnew System::EventHandler(this, &MainForm::label6_Click);
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(138, 60);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(209, 42);
			this->label10->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(14, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(88, 33);
			this->label4->TabIndex = 23;
			this->label4->Text = L"Total:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(16, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 33);
			this->label5->TabIndex = 22;
			this->label5->Text = L"VAT";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Wheat;
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->label7);
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->comboBox1);
			this->panel4->Location = System::Drawing::Point(381, 452);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(458, 162);
			this->panel4->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(239, 111);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(202, 42);
			this->label7->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(239, 62);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(202, 42);
			this->label8->TabIndex = 18;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 110);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 29);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Change:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 29);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Cost:";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 35);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Method of Payment:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(239, 9);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(202, 41);
			this->comboBox1->TabIndex = 14;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Wheat;
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->button18);
			this->panel5->Controls->Add(this->button17);
			this->panel5->Controls->Add(this->button16);
			this->panel5->Controls->Add(this->button15);
			this->panel5->Location = System::Drawing::Point(845, 452);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(312, 162);
			this->panel5->TabIndex = 13;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::OldLace;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(157, 83);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(143, 69);
			this->button18->TabIndex = 28;
			this->button18->Text = L"Enter";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::OldLace;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(8, 83);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(143, 69);
			this->button17->TabIndex = 27;
			this->button17->Text = L"Remove Item";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::OldLace;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(157, 8);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(143, 69);
			this->button16->TabIndex = 26;
			this->button16->Text = L"Reset";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::OldLace;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(8, 8);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(143, 69);
			this->button15->TabIndex = 25;
			this->button15->Text = L"Print";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackColor = System::Drawing::Color::Wheat;
			this->ClientSize = System::Drawing::Size(1162, 775);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox2);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MainForm";
			this->Text = L"s";
			this->TransparencyKey = System::Drawing::Color::Teal;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_4(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
