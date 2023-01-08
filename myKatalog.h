#pragma once
#include <string>
#include <iostream>
#include"SearchAutoForm.h"
#include"myOptions.h"
#include<Windows.h>
#include"send_mail_form.h"
namespace KursachProject1 {

	using namespace System;
	using namespace System::Net;
	using namespace System::IO;
	using namespace System::Threading::Tasks;
	using namespace System::Net::Mail;
	using namespace System::Net::Mail;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace std;
	/// <summary>
	/// Сводка для myKatalog
	/// </summary>
	public ref class myKatalog : public System::Windows::Forms::Form
	{
	public:
		myKatalog(void)
		{
			InitializeComponent();
			//int screenW = GetSystemMetrics(SM_CXSCREEN);//Получить ширину экрана
			//int  screenH = GetSystemMetrics(SM_CYSCREEN);
			/*int
			this->Size = GetSystemMetrics(SM_CXSCREEN)*/
			//
			//TODO: добавьте код конструктора
			//
		}
		//my constr
	public:
		myKatalog(bool pr)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			if (pr)
			{
				this->Show();
			}
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~myKatalog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel1;

private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::LinkLabel^ linkLabel1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;





private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::WebBrowser^ webBrowser1;
private: System::Windows::Forms::ListView^ listView1;
private: System::Windows::Forms::ColumnHeader^ columnHeader1;
private: System::Windows::Forms::ColumnHeader^ columnHeader2;
private: System::Windows::Forms::ColumnHeader^ columnHeader3;
private: System::Windows::Forms::ColumnHeader^ columnHeader4;
private: System::Windows::Forms::GroupBox^ groupBox2;




private: System::Windows::Forms::Panel^ panel3;

private: System::Windows::Forms::Button^ button71;
private: System::Windows::Forms::Button^ button70;
private: System::Windows::Forms::GroupBox^ groupBox3;

private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label5;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::GroupBox^ groupBox4;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button66;
private: System::Windows::Forms::Button^ button65;
private: System::Windows::Forms::Button^ button64;
private: System::Windows::Forms::Button^ button63;
private: System::Windows::Forms::Button^ button62;
private: System::Windows::Forms::Button^ button61;
private: System::Windows::Forms::Button^ button60;
private: System::Windows::Forms::Button^ button59;
private: System::Windows::Forms::Button^ button58;
private: System::Windows::Forms::Button^ button57;
private: System::Windows::Forms::Button^ button56;
private: System::Windows::Forms::Button^ button55;
private: System::Windows::Forms::Button^ button54;
private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::Button^ button52;
private: System::Windows::Forms::Button^ button51;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::Button^ button49;
private: System::Windows::Forms::Button^ button48;
private: System::Windows::Forms::Button^ button47;
private: System::Windows::Forms::Button^ button46;
private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::Button^ button44;
private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::Button^ button42;
private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button72;

private: System::Windows::Forms::RichTextBox^ richTextBox2;
private: System::Windows::Forms::Label^ label10;

private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton21;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Button^ button67;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton22;
private: System::Windows::Forms::PrintDialog^ printDialog1;
private: System::Drawing::Printing::PrintDocument^ printDocument1;

private: Bunifu::Framework::UI::BunifuCards^ bunifuCards1;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton23;



private: System::ComponentModel::IContainer^ components;






public:
private:






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(myKatalog::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton21 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button72 = (gcnew System::Windows::Forms::Button());
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->bunifuThinButton22 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button71 = (gcnew System::Windows::Forms::Button());
			this->button70 = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton23 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->bunifuCards1 = (gcnew Bunifu::Framework::UI::BunifuCards());
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panel6->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->bunifuCards1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(1321, -1);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &myKatalog::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &myKatalog::button1_MouseEnter);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(1271, -1);
			this->button2->Margin = System::Windows::Forms::Padding(0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"❐";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &myKatalog::button2_Click);
			this->button2->MouseEnter += gcnew System::EventHandler(this, &myKatalog::button2_MouseEnter);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(173)), static_cast<System::Int32>(static_cast<System::Byte>(239)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(1221, -1);
			this->button3->Margin = System::Windows::Forms::Padding(0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"—";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &myKatalog::button3_Click);
			this->button3->MouseEnter += gcnew System::EventHandler(this, &myKatalog::button3_MouseEnter);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(24)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button6->Location = System::Drawing::Point(464, 14);
			this->button6->Margin = System::Windows::Forms::Padding(0);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(226, 48);
			this->button6->TabIndex = 2;
			this->button6->Text = L"О компании";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &myKatalog::button6_Click);
			this->button6->MouseEnter += gcnew System::EventHandler(this, &myKatalog::button6_MouseEnter);
			this->button6->MouseLeave += gcnew System::EventHandler(this, &myKatalog::button6_MouseLeave);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(47)), static_cast<System::Int32>(static_cast<System::Byte>(130)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Location = System::Drawing::Point(14, 14);
			this->button4->Margin = System::Windows::Forms::Padding(0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(226, 48);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Обзор";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &myKatalog::button4_Click);
			this->button4->MouseEnter += gcnew System::EventHandler(this, &myKatalog::button4_MouseEnter);
			this->button4->MouseLeave += gcnew System::EventHandler(this, &myKatalog::button4_MouseLeave);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
				static_cast<System::Int32>(static_cast<System::Byte>(212)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button5->Location = System::Drawing::Point(238, 14);
			this->button5->Margin = System::Windows::Forms::Padding(0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(226, 48);
			this->button5->TabIndex = 1;
			this->button5->Text = L"Автомобили";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &myKatalog::button5_Click);
			this->button5->MouseEnter += gcnew System::EventHandler(this, &myKatalog::button5_MouseEnter);
			this->button5->MouseLeave += gcnew System::EventHandler(this, &myKatalog::button5_MouseLeave);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel3->Controls->Add(this->bunifuThinButton21);
			this->panel3->Location = System::Drawing::Point(250, 185);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(226, 72);
			this->panel3->TabIndex = 12;
			this->panel3->Visible = false;
			this->panel3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &myKatalog::panel3_MouseMove);
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 20;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(179)));
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->bunifuThinButton21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"Поиск авто";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton21->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 20;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(228)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->bunifuThinButton21->IdleForecolor = System::Drawing::SystemColors::ActiveCaptionText;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->bunifuThinButton21->Location = System::Drawing::Point(11, 15);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(203, 39);
			this->bunifuThinButton21->TabIndex = 3;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton21->Click += gcnew System::EventHandler(this, &myKatalog::bunifuThinButton21_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(107, 107);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(215, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 46);
			this->label6->TabIndex = 8;
			this->label6->Text = L"BMW";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Location = System::Drawing::Point(12, 205);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1346, 677);
			this->panel1->TabIndex = 9;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->tableLayoutPanel1->ColumnCount = 6;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				16.66667F)));
			this->tableLayoutPanel1->Controls->Add(this->button15, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->button66, 4, 11);
			this->tableLayoutPanel1->Controls->Add(this->button65, 3, 11);
			this->tableLayoutPanel1->Controls->Add(this->button64, 2, 11);
			this->tableLayoutPanel1->Controls->Add(this->button63, 1, 11);
			this->tableLayoutPanel1->Controls->Add(this->button62, 0, 11);
			this->tableLayoutPanel1->Controls->Add(this->button61, 4, 10);
			this->tableLayoutPanel1->Controls->Add(this->button60, 3, 10);
			this->tableLayoutPanel1->Controls->Add(this->button59, 2, 10);
			this->tableLayoutPanel1->Controls->Add(this->button58, 1, 10);
			this->tableLayoutPanel1->Controls->Add(this->button57, 0, 10);
			this->tableLayoutPanel1->Controls->Add(this->button56, 4, 9);
			this->tableLayoutPanel1->Controls->Add(this->button55, 3, 9);
			this->tableLayoutPanel1->Controls->Add(this->button54, 2, 9);
			this->tableLayoutPanel1->Controls->Add(this->button53, 1, 9);
			this->tableLayoutPanel1->Controls->Add(this->button52, 0, 9);
			this->tableLayoutPanel1->Controls->Add(this->button51, 4, 8);
			this->tableLayoutPanel1->Controls->Add(this->button50, 3, 8);
			this->tableLayoutPanel1->Controls->Add(this->button49, 2, 8);
			this->tableLayoutPanel1->Controls->Add(this->button48, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->button47, 0, 8);
			this->tableLayoutPanel1->Controls->Add(this->button46, 4, 7);
			this->tableLayoutPanel1->Controls->Add(this->button45, 3, 7);
			this->tableLayoutPanel1->Controls->Add(this->button44, 2, 7);
			this->tableLayoutPanel1->Controls->Add(this->button43, 1, 7);
			this->tableLayoutPanel1->Controls->Add(this->button42, 0, 7);
			this->tableLayoutPanel1->Controls->Add(this->button41, 4, 6);
			this->tableLayoutPanel1->Controls->Add(this->button40, 3, 6);
			this->tableLayoutPanel1->Controls->Add(this->button39, 2, 6);
			this->tableLayoutPanel1->Controls->Add(this->button38, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->button37, 0, 6);
			this->tableLayoutPanel1->Controls->Add(this->button36, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->button35, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->button34, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->button33, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->button32, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->button31, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->button30, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->button29, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->button28, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->button27, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->button26, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->button25, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->button24, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->button23, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->button22, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->button21, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->button19, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->button18, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->button17, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->button16, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->button14, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->button11, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->button10, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->button9, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->button8, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button13, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button7, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button12, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->button20, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->button72, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->button67, 5, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->Padding = System::Windows::Forms::Padding(3);
			this->tableLayoutPanel1->RowCount = 12;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.330279F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.333611F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.333611F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.333611F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.333611F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.333611F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.333611F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.333611F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.333611F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.333611F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.333611F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 8.333611F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1346, 677);
			this->tableLayoutPanel1->TabIndex = 18;
			this->tableLayoutPanel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &myKatalog::tableLayoutPanel1_MouseMove);
			// 
			// button15
			// 
			this->button15->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button15->Location = System::Drawing::Point(687, 62);
			this->button15->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(193, 47);
			this->button15->TabIndex = 8;
			this->button15->Text = L"M6";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &myKatalog::button15_Click);
			// 
			// button66
			// 
			this->button66->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button66->FlatAppearance->BorderSize = 0;
			this->button66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button66->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button66->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button66->Location = System::Drawing::Point(910, 612);
			this->button66->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(193, 58);
			this->button66->TabIndex = 59;
			this->button66->Text = L"M6  Gran Coupe";
			this->button66->UseVisualStyleBackColor = true;
			this->button66->Click += gcnew System::EventHandler(this, &myKatalog::button66_Click);
			// 
			// button65
			// 
			this->button65->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button65->FlatAppearance->BorderSize = 0;
			this->button65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button65->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button65->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button65->Location = System::Drawing::Point(687, 612);
			this->button65->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(193, 58);
			this->button65->TabIndex = 58;
			this->button65->Text = L"X6";
			this->button65->UseVisualStyleBackColor = true;
			this->button65->Click += gcnew System::EventHandler(this, &myKatalog::button65_Click);
			// 
			// button64
			// 
			this->button64->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button64->FlatAppearance->BorderSize = 0;
			this->button64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button64->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button64->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button64->Location = System::Drawing::Point(464, 612);
			this->button64->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(193, 58);
			this->button64->TabIndex = 57;
			this->button64->Text = L"M4";
			this->button64->UseVisualStyleBackColor = true;
			this->button64->Click += gcnew System::EventHandler(this, &myKatalog::button64_Click);
			// 
			// button63
			// 
			this->button63->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button63->FlatAppearance->BorderSize = 0;
			this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button63->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button63->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button63->Location = System::Drawing::Point(241, 612);
			this->button63->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(193, 58);
			this->button63->TabIndex = 56;
			this->button63->Text = L"7 серии";
			this->button63->UseVisualStyleBackColor = true;
			this->button63->Click += gcnew System::EventHandler(this, &myKatalog::button63_Click);
			// 
			// button62
			// 
			this->button62->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button62->FlatAppearance->BorderSize = 0;
			this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button62->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button62->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button62->Location = System::Drawing::Point(18, 612);
			this->button62->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(193, 58);
			this->button62->TabIndex = 55;
			this->button62->Text = L"321";
			this->button62->UseVisualStyleBackColor = true;
			this->button62->Click += gcnew System::EventHandler(this, &myKatalog::button62_Click);
			// 
			// button61
			// 
			this->button61->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button61->FlatAppearance->BorderSize = 0;
			this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button61->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button61->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button61->Location = System::Drawing::Point(910, 557);
			this->button61->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(193, 47);
			this->button61->TabIndex = 54;
			this->button61->Text = L"4 серии Gran Coupe";
			this->button61->UseVisualStyleBackColor = true;
			this->button61->Click += gcnew System::EventHandler(this, &myKatalog::button61_Click);
			// 
			// button60
			// 
			this->button60->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button60->FlatAppearance->BorderSize = 0;
			this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button60->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button60->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button60->Location = System::Drawing::Point(687, 557);
			this->button60->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(193, 47);
			this->button60->TabIndex = 53;
			this->button60->Text = L"X5 M";
			this->button60->UseVisualStyleBackColor = true;
			this->button60->Click += gcnew System::EventHandler(this, &myKatalog::button60_Click);
			// 
			// button59
			// 
			this->button59->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button59->FlatAppearance->BorderSize = 0;
			this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button59->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button59->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button59->Location = System::Drawing::Point(464, 557);
			this->button59->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(193, 47);
			this->button59->TabIndex = 52;
			this->button59->Text = L"M3";
			this->button59->UseVisualStyleBackColor = true;
			this->button59->Click += gcnew System::EventHandler(this, &myKatalog::button59_Click);
			// 
			// button58
			// 
			this->button58->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button58->FlatAppearance->BorderSize = 0;
			this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button58->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button58->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button58->Location = System::Drawing::Point(241, 557);
			this->button58->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(193, 47);
			this->button58->TabIndex = 51;
			this->button58->Text = L"600 \"Isetta\"";
			this->button58->UseVisualStyleBackColor = true;
			this->button58->Click += gcnew System::EventHandler(this, &myKatalog::button58_Click);
			// 
			// button57
			// 
			this->button57->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button57->FlatAppearance->BorderSize = 0;
			this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button57->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button57->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button57->Location = System::Drawing::Point(18, 557);
			this->button57->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(193, 47);
			this->button57->TabIndex = 50;
			this->button57->Text = L"3200";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &myKatalog::button57_Click);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->button56->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button56->FlatAppearance->BorderSize = 0;
			this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button56->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button56->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button56->Location = System::Drawing::Point(910, 502);
			this->button56->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(193, 47);
			this->button56->TabIndex = 49;
			this->button56->Text = L"5 серии GT";
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &myKatalog::button56_Click);
			// 
			// button55
			// 
			this->button55->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button55->FlatAppearance->BorderSize = 0;
			this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button55->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button55->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button55->Location = System::Drawing::Point(687, 502);
			this->button55->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(193, 47);
			this->button55->TabIndex = 48;
			this->button55->Text = L"X5";
			this->button55->UseVisualStyleBackColor = true;
			this->button55->Click += gcnew System::EventHandler(this, &myKatalog::button55_Click);
			// 
			// button54
			// 
			this->button54->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button54->FlatAppearance->BorderSize = 0;
			this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button54->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button54->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button54->Location = System::Drawing::Point(464, 502);
			this->button54->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(193, 47);
			this->button54->TabIndex = 47;
			this->button54->Text = L"M2";
			this->button54->UseVisualStyleBackColor = true;
			this->button54->Click += gcnew System::EventHandler(this, &myKatalog::button54_Click);
			// 
			// button53
			// 
			this->button53->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button53->FlatAppearance->BorderSize = 0;
			this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button53->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button53->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button53->Location = System::Drawing::Point(241, 502);
			this->button53->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(193, 47);
			this->button53->TabIndex = 46;
			this->button53->Text = L"6 серии";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &myKatalog::button53_Click);
			// 
			// button52
			// 
			this->button52->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button52->FlatAppearance->BorderSize = 0;
			this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button52->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button52->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button52->Location = System::Drawing::Point(18, 502);
			this->button52->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(193, 47);
			this->button52->TabIndex = 45;
			this->button52->Text = L"315";
			this->button52->UseVisualStyleBackColor = true;
			this->button52->Click += gcnew System::EventHandler(this, &myKatalog::button52_Click);
			// 
			// button51
			// 
			this->button51->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button51->FlatAppearance->BorderSize = 0;
			this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button51->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button51->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button51->Location = System::Drawing::Point(910, 447);
			this->button51->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(193, 47);
			this->button51->TabIndex = 44;
			this->button51->Text = L"3 серии GT";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &myKatalog::button51_Click);
			// 
			// button50
			// 
			this->button50->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button50->FlatAppearance->BorderSize = 0;
			this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button50->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button50->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button50->Location = System::Drawing::Point(687, 447);
			this->button50->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(193, 47);
			this->button50->TabIndex = 43;
			this->button50->Text = L"X4 M";
			this->button50->UseVisualStyleBackColor = true;
			this->button50->Click += gcnew System::EventHandler(this, &myKatalog::button50_Click);
			// 
			// button49
			// 
			this->button49->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button49->FlatAppearance->BorderSize = 0;
			this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button49->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button49->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button49->Location = System::Drawing::Point(464, 447);
			this->button49->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(193, 47);
			this->button49->TabIndex = 42;
			this->button49->Text = L"iX3";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &myKatalog::button49_Click);
			// 
			// button48
			// 
			this->button48->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button48->FlatAppearance->BorderSize = 0;
			this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button48->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button48->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button48->Location = System::Drawing::Point(241, 447);
			this->button48->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(193, 47);
			this->button48->TabIndex = 41;
			this->button48->Text = L"507";
			this->button48->UseVisualStyleBackColor = true;
			this->button48->Click += gcnew System::EventHandler(this, &myKatalog::button48_Click);
			// 
			// button47
			// 
			this->button47->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button47->FlatAppearance->BorderSize = 0;
			this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button47->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button47->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button47->Location = System::Drawing::Point(18, 447);
			this->button47->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(193, 47);
			this->button47->TabIndex = 40;
			this->button47->Text = L"3/15";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &myKatalog::button47_Click);
			// 
			// button46
			// 
			this->button46->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button46->FlatAppearance->BorderSize = 0;
			this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button46->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button46->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button46->Location = System::Drawing::Point(910, 392);
			this->button46->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(193, 47);
			this->button46->TabIndex = 39;
			this->button46->Text = L"Z8";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &myKatalog::button46_Click);
			// 
			// button45
			// 
			this->button45->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button45->FlatAppearance->BorderSize = 0;
			this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button45->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button45->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button45->Location = System::Drawing::Point(687, 392);
			this->button45->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(193, 47);
			this->button45->TabIndex = 38;
			this->button45->Text = L"X3 M";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &myKatalog::button45_Click);
			// 
			// button44
			// 
			this->button44->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button44->FlatAppearance->BorderSize = 0;
			this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button44->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button44->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button44->Location = System::Drawing::Point(464, 392);
			this->button44->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(193, 47);
			this->button44->TabIndex = 37;
			this->button44->Text = L"iX";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &myKatalog::button44_Click);
			// 
			// button43
			// 
			this->button43->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button43->FlatAppearance->BorderSize = 0;
			this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button43->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button43->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button43->Location = System::Drawing::Point(241, 392);
			this->button43->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(193, 47);
			this->button43->TabIndex = 36;
			this->button43->Text = L"503";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &myKatalog::button43_Click);
			// 
			// button42
			// 
			this->button42->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button42->FlatAppearance->BorderSize = 0;
			this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button42->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button42->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button42->Location = System::Drawing::Point(18, 392);
			this->button42->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(193, 47);
			this->button42->TabIndex = 35;
			this->button42->Text = L"3 серии";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &myKatalog::button42_Click);
			// 
			// button41
			// 
			this->button41->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button41->FlatAppearance->BorderSize = 0;
			this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button41->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button41->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button41->Location = System::Drawing::Point(910, 337);
			this->button41->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(193, 47);
			this->button41->TabIndex = 34;
			this->button41->Text = L"Z4 M";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &myKatalog::button41_Click);
			// 
			// button40
			// 
			this->button40->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button40->FlatAppearance->BorderSize = 0;
			this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button40->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button40->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button40->Location = System::Drawing::Point(687, 337);
			this->button40->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(193, 47);
			this->button40->TabIndex = 33;
			this->button40->Text = L"X3";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &myKatalog::button40_Click);
			// 
			// button39
			// 
			this->button39->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button39->FlatAppearance->BorderSize = 0;
			this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button39->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button39->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button39->Location = System::Drawing::Point(464, 337);
			this->button39->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(193, 47);
			this->button39->TabIndex = 32;
			this->button39->Text = L"i8";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &myKatalog::button39_Click);
			// 
			// button38
			// 
			this->button38->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button38->FlatAppearance->BorderSize = 0;
			this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button38->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button38->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button38->Location = System::Drawing::Point(241, 337);
			this->button38->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(193, 47);
			this->button38->TabIndex = 31;
			this->button38->Text = L"502";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &myKatalog::button38_Click);
			// 
			// button37
			// 
			this->button37->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button37->FlatAppearance->BorderSize = 0;
			this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button37->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button37->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button37->Location = System::Drawing::Point(18, 337);
			this->button37->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(193, 47);
			this->button37->TabIndex = 30;
			this->button37->Text = L"2000 C/CS";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &myKatalog::button37_Click);
			// 
			// button36
			// 
			this->button36->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button36->FlatAppearance->BorderSize = 0;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button36->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button36->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button36->Location = System::Drawing::Point(910, 282);
			this->button36->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(193, 47);
			this->button36->TabIndex = 29;
			this->button36->Text = L"Z4";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &myKatalog::button36_Click);
			// 
			// button35
			// 
			this->button35->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button35->FlatAppearance->BorderSize = 0;
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button35->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button35->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button35->Location = System::Drawing::Point(687, 282);
			this->button35->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(193, 47);
			this->button35->TabIndex = 28;
			this->button35->Text = L"X2";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &myKatalog::button35_Click);
			// 
			// button34
			// 
			this->button34->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button34->FlatAppearance->BorderSize = 0;
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button34->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button34->Location = System::Drawing::Point(464, 282);
			this->button34->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(193, 47);
			this->button34->TabIndex = 27;
			this->button34->Text = L"i4";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &myKatalog::button34_Click);
			// 
			// button33
			// 
			this->button33->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button33->FlatAppearance->BorderSize = 0;
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button33->Location = System::Drawing::Point(241, 282);
			this->button33->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(193, 47);
			this->button33->TabIndex = 26;
			this->button33->Text = L"501";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &myKatalog::button33_Click);
			// 
			// button32
			// 
			this->button32->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button32->FlatAppearance->BorderSize = 0;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button32->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button32->Location = System::Drawing::Point(18, 282);
			this->button32->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(193, 47);
			this->button32->TabIndex = 25;
			this->button32->Text = L"2 серии Gran Tourer";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &myKatalog::button32_Click);
			// 
			// button31
			// 
			this->button31->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button31->FlatAppearance->BorderSize = 0;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button31->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button31->Location = System::Drawing::Point(910, 227);
			this->button31->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(193, 47);
			this->button31->TabIndex = 24;
			this->button31->Text = L"Z3 M";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &myKatalog::button31_Click);
			// 
			// button30
			// 
			this->button30->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button30->FlatAppearance->BorderSize = 0;
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button30->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button30->Location = System::Drawing::Point(687, 227);
			this->button30->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(193, 47);
			this->button30->TabIndex = 23;
			this->button30->Text = L"X1";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &myKatalog::button30_Click);
			// 
			// button29
			// 
			this->button29->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button29->FlatAppearance->BorderSize = 0;
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button29->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button29->Location = System::Drawing::Point(464, 227);
			this->button29->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(193, 47);
			this->button29->TabIndex = 22;
			this->button29->Text = L"i3";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &myKatalog::button29_Click);
			// 
			// button28
			// 
			this->button28->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button28->FlatAppearance->BorderSize = 0;
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button28->Location = System::Drawing::Point(241, 227);
			this->button28->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(193, 47);
			this->button28->TabIndex = 21;
			this->button28->Text = L"5 серии";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &myKatalog::button28_Click);
			// 
			// button27
			// 
			this->button27->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button27->FlatAppearance->BorderSize = 0;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button27->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button27->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button27->Location = System::Drawing::Point(18, 227);
			this->button27->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(193, 47);
			this->button27->TabIndex = 20;
			this->button27->Text = L"2 серии Active Tourer";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &myKatalog::button27_Click);
			// 
			// button26
			// 
			this->button26->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button26->FlatAppearance->BorderSize = 0;
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button26->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button26->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button26->Location = System::Drawing::Point(910, 172);
			this->button26->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(193, 47);
			this->button26->TabIndex = 19;
			this->button26->Text = L"Z3";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &myKatalog::button26_Click);
			// 
			// button25
			// 
			this->button25->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button25->FlatAppearance->BorderSize = 0;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button25->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button25->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button25->Location = System::Drawing::Point(687, 172);
			this->button25->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(193, 47);
			this->button25->TabIndex = 18;
			this->button25->Text = L"New Class";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &myKatalog::button25_Click);
			// 
			// button24
			// 
			this->button24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button24->FlatAppearance->BorderSize = 0;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button24->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button24->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button24->Location = System::Drawing::Point(464, 172);
			this->button24->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(193, 47);
			this->button24->TabIndex = 17;
			this->button24->Text = L"E9";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &myKatalog::button24_Click);
			// 
			// button23
			// 
			this->button23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button23->FlatAppearance->BorderSize = 0;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button23->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button23->Location = System::Drawing::Point(241, 172);
			this->button23->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(193, 47);
			this->button23->TabIndex = 16;
			this->button23->Text = L"4 серии";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &myKatalog::button23_Click);
			// 
			// button22
			// 
			this->button22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button22->FlatAppearance->BorderSize = 0;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button22->Location = System::Drawing::Point(18, 172);
			this->button22->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(193, 47);
			this->button22->TabIndex = 15;
			this->button22->Text = L"2 серии";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &myKatalog::button22_Click);
			// 
			// button21
			// 
			this->button21->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button21->FlatAppearance->BorderSize = 0;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button21->Location = System::Drawing::Point(910, 117);
			this->button21->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(193, 47);
			this->button21->TabIndex = 14;
			this->button21->Text = L"Z1";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &myKatalog::button21_Click);
			// 
			// button19
			// 
			this->button19->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button19->Location = System::Drawing::Point(464, 117);
			this->button19->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(193, 47);
			this->button19->TabIndex = 12;
			this->button19->Text = L"E3";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &myKatalog::button19_Click);
			// 
			// button18
			// 
			this->button18->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button18->Location = System::Drawing::Point(241, 117);
			this->button18->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(193, 47);
			this->button18->TabIndex = 11;
			this->button18->Text = L"340";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &myKatalog::button18_Click);
			// 
			// button17
			// 
			this->button17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button17->Location = System::Drawing::Point(18, 117);
			this->button17->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(193, 47);
			this->button17->TabIndex = 10;
			this->button17->Text = L"1M";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &myKatalog::button17_Click);
			// 
			// button16
			// 
			this->button16->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button16->Location = System::Drawing::Point(910, 62);
			this->button16->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(193, 47);
			this->button16->TabIndex = 9;
			this->button16->Text = L"X7";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &myKatalog::button16_Click);
			// 
			// button14
			// 
			this->button14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button14->Location = System::Drawing::Point(464, 62);
			this->button14->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(193, 47);
			this->button14->TabIndex = 7;
			this->button14->Text = L"8 серии";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &myKatalog::button14_Click);
			// 
			// button11
			// 
			this->button11->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button11->Location = System::Drawing::Point(910, 7);
			this->button11->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(193, 47);
			this->button11->TabIndex = 4;
			this->button11->Text = L"X6 M";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &myKatalog::button11_Click);
			// 
			// button10
			// 
			this->button10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button10->Location = System::Drawing::Point(687, 7);
			this->button10->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(193, 47);
			this->button10->TabIndex = 3;
			this->button10->Text = L"M5";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &myKatalog::button10_Click);
			// 
			// button9
			// 
			this->button9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(464, 7);
			this->button9->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(193, 47);
			this->button9->TabIndex = 2;
			this->button9->Text = L"700";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &myKatalog::button9_Click);
			// 
			// button8
			// 
			this->button8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(241, 7);
			this->button8->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(193, 47);
			this->button8->TabIndex = 1;
			this->button8->Text = L"326";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &myKatalog::button8_Click);
			// 
			// button13
			// 
			this->button13->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button13->Location = System::Drawing::Point(241, 62);
			this->button13->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(193, 47);
			this->button13->TabIndex = 6;
			this->button13->Text = L"327";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &myKatalog::button13_Click);
			// 
			// button7
			// 
			this->button7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button7->Location = System::Drawing::Point(18, 7);
			this->button7->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(193, 47);
			this->button7->TabIndex = 0;
			this->button7->Text = L"02 (E10)";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &myKatalog::button7_Click);
			// 
			// button12
			// 
			this->button12->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button12->Location = System::Drawing::Point(18, 62);
			this->button12->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(193, 47);
			this->button12->TabIndex = 5;
			this->button12->Text = L"1 серии";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &myKatalog::button12_Click);
			// 
			// button20
			// 
			this->button20->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button20->Location = System::Drawing::Point(687, 117);
			this->button20->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(193, 47);
			this->button20->TabIndex = 13;
			this->button20->Text = L"M8";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &myKatalog::button20_Click);
			// 
			// button72
			// 
			this->button72->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button72->FlatAppearance->BorderSize = 0;
			this->button72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button72->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button72->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button72->Location = System::Drawing::Point(1133, 7);
			this->button72->Margin = System::Windows::Forms::Padding(15, 4, 15, 4);
			this->button72->Name = L"button72";
			this->button72->Size = System::Drawing::Size(195, 47);
			this->button72->TabIndex = 60;
			this->button72->Text = L"X4";
			this->button72->UseVisualStyleBackColor = true;
			this->button72->Click += gcnew System::EventHandler(this, &myKatalog::button72_Click);
			// 
			// button67
			// 
			this->button67->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button67->FlatAppearance->BorderSize = 0;
			this->button67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button67->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold));
			this->button67->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button67->Location = System::Drawing::Point(1121, 61);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(219, 49);
			this->button67->TabIndex = 62;
			this->button67->Text = L"i7";
			this->button67->UseVisualStyleBackColor = true;
			this->button67->Click += gcnew System::EventHandler(this, &myKatalog::button67_Click_1);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->panel2->Controls->Add(this->tableLayoutPanel3);
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel2->Location = System::Drawing::Point(12, 205);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1346, 677);
			this->panel2->TabIndex = 10;
			this->panel2->Visible = false;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				45)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				55)));
			this->tableLayoutPanel3->Controls->Add(this->panel5, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->panel6, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1346, 677);
			this->tableLayoutPanel3->TabIndex = 15;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->bunifuThinButton22);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->groupBox2);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->bunifuThinButton23);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(608, 3);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(735, 671);
			this->panel5->TabIndex = 0;
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 1;
			this->bunifuThinButton22->ActiveCornerRadius = 20;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::LightSeaGreen;
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bunifuThinButton22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"Печать";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 20;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::PaleTurquoise;
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton22->Location = System::Drawing::Point(12, 626);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(717, 38);
			this->bunifuThinButton22->TabIndex = 20;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton22->Click += gcnew System::EventHandler(this, &myKatalog::bunifuThinButton22_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(230, 7);
			this->label8->Margin = System::Windows::Forms::Padding(0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(54, 22);
			this->label8->TabIndex = 19;
			this->label8->Text = L"xxxx";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(82)), static_cast<System::Int32>(static_cast<System::Byte>(112)),
				static_cast<System::Int32>(static_cast<System::Byte>(118)));
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->groupBox2->Location = System::Drawing::Point(0, 43);
			this->groupBox2->Margin = System::Windows::Forms::Padding(30, 3, 3, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(732, 578);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Изображение";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->ImageLocation = L"";
			this->pictureBox2->Location = System::Drawing::Point(4, 30);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(725, 471);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &myKatalog::pictureBox2_MouseClick);
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->tableLayoutPanel2);
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Arial", 1.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(0, 500);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(3, 0, 3, 3);
			this->groupBox3->Size = System::Drawing::Size(732, 78);
			this->groupBox3->TabIndex = 18;
			this->groupBox3->TabStop = false;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				35)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				35)));
			this->tableLayoutPanel2->Controls->Add(this->button71, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->button70, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->linkLabel1, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 4);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 0, 3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(726, 71);
			this->tableLayoutPanel2->TabIndex = 18;
			// 
			// button71
			// 
			this->button71->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button71->FlatAppearance->BorderSize = 0;
			this->button71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button71->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button71->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button71.Image")));
			this->button71->Location = System::Drawing::Point(0, 0);
			this->button71->Margin = System::Windows::Forms::Padding(0);
			this->button71->Name = L"button71";
			this->button71->Size = System::Drawing::Size(254, 71);
			this->button71->TabIndex = 17;
			this->button71->UseVisualStyleBackColor = true;
			this->button71->Click += gcnew System::EventHandler(this, &myKatalog::button71_Click);
			// 
			// button70
			// 
			this->button70->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button70->FlatAppearance->BorderSize = 0;
			this->button70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button70->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button70->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button70.Image")));
			this->button70->Location = System::Drawing::Point(471, 0);
			this->button70->Margin = System::Windows::Forms::Padding(0);
			this->button70->Name = L"button70";
			this->button70->Size = System::Drawing::Size(255, 71);
			this->button70->TabIndex = 16;
			this->button70->UseVisualStyleBackColor = true;
			this->button70->Click += gcnew System::EventHandler(this, &myKatalog::button70_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::White;
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->LinkBehavior = System::Windows::Forms::LinkBehavior::HoverUnderline;
			this->linkLabel1->LinkColor = System::Drawing::Color::MediumTurquoise;
			this->linkLabel1->Location = System::Drawing::Point(257, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(211, 71);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Искать на av.by";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &myKatalog::linkLabel1_LinkClicked);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(153, 7);
			this->label5->Margin = System::Windows::Forms::Padding(0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(54, 22);
			this->label5->TabIndex = 17;
			this->label5->Text = L"xxxx";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(210, 7);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 22);
			this->label7->TabIndex = 18;
			this->label7->Text = L"-";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(8, 7);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 22);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Года выпуска:";
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 1;
			this->bunifuThinButton23->ActiveCornerRadius = 20;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::LightSeaGreen;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bunifuThinButton23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)),
				static_cast<System::Int32>(static_cast<System::Byte>(86)), static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"Отправить на e-mail";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton23->IdleBorderThickness = 1;
			this->bunifuThinButton23->IdleCornerRadius = 20;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::PaleTurquoise;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::Black;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::Black;
			this->bunifuThinButton23->Location = System::Drawing::Point(394, 626);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(5);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(335, 38);
			this->bunifuThinButton23->TabIndex = 21;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuThinButton23->Visible = false;
			this->bunifuThinButton23->Click += gcnew System::EventHandler(this, &myKatalog::bunifuThinButton23_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label2);
			this->panel6->Controls->Add(this->groupBox4);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Controls->Add(this->label9);
			this->panel6->Controls->Add(this->listView1);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel6->Location = System::Drawing::Point(3, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(599, 671);
			this->panel6->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Location = System::Drawing::Point(5, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 34);
			this->label2->TabIndex = 3;
			this->label2->Text = L"BMW";
			this->label2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &myKatalog::splitContainer1_Panel1_MouseMove);
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox4->Controls->Add(this->richTextBox1);
			this->groupBox4->Location = System::Drawing::Point(3, 413);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(593, 255);
			this->groupBox4->TabIndex = 16;
			this->groupBox4->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->richTextBox1->Location = System::Drawing::Point(12, 11);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(570, 238);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &myKatalog::richTextBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(90, 6);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 34);
			this->label3->TabIndex = 4;
			this->label3->Text = L"         ";
			this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &myKatalog::splitContainer1_Panel1_MouseMove);
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial Black", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(119, 370);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(277, 40);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Характеристики";
			// 
			// listView1
			// 
			this->listView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(22)), static_cast<System::Int32>(static_cast<System::Byte>(86)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->listView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listView1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->FullRowSelect = true;
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(3, 43);
			this->listView1->Name = L"listView1";
			this->listView1->Scrollable = false;
			this->listView1->Size = System::Drawing::Size(593, 307);
			this->listView1->TabIndex = 14;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &myKatalog::listView1_SelectedIndexChanged);
			this->listView1->Click += gcnew System::EventHandler(this, &myKatalog::listView1_Click);
			this->listView1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &myKatalog::splitContainer1_Panel1_MouseMove);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"";
			this->columnHeader1->Width = 0;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Модель";
			this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader2->Width = 133;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Код кузова";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader3->Width = 266;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Поколение";
			this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->columnHeader4->Width = 246;
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->AutoScroll = true;
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(201)));
			this->panel4->Controls->Add(this->pictureBox5);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->webBrowser1);
			this->panel4->Controls->Add(this->richTextBox2);
			this->panel4->Location = System::Drawing::Point(12, 205);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1346, 677);
			this->panel4->TabIndex = 13;
			this->panel4->Visible = false;
			this->panel4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &myKatalog::splitContainer1_Panel1_MouseMove);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox5->BackColor = System::Drawing::Color::Black;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(765, 2064);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(523, 326);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(54, 1749);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(1170, 560);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(952, 19);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(362, 376);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// label10
			// 
			this->label10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(122, 634);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(655, 24);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Штаб-квартира BMW и здание музея BMW в Мюнхене, Германия.";
			// 
			// webBrowser1
			// 
			this->webBrowser1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->webBrowser1->Location = System::Drawing::Point(24, 30);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(922, 594);
			this->webBrowser1->TabIndex = 0;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(201)));
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->Location = System::Drawing::Point(38, 675);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->richTextBox2->Size = System::Drawing::Size(1271, 1740);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = resources->GetString(L"richTextBox2.Text");
			this->richTextBox2->MouseEnter += gcnew System::EventHandler(this, &myKatalog::richTextBox2_MouseEnter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(156, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(255, 20);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Справочник автомобилей марки";
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// bunifuCards1
			// 
			this->bunifuCards1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bunifuCards1->BackColor = System::Drawing::Color::Gray;
			this->bunifuCards1->BorderRadius = 20;
			this->bunifuCards1->BottomSahddow = true;
			this->bunifuCards1->color = System::Drawing::Color::Gray;
			this->bunifuCards1->Controls->Add(this->button6);
			this->bunifuCards1->Controls->Add(this->button5);
			this->bunifuCards1->Controls->Add(this->button4);
			this->bunifuCards1->LeftSahddow = false;
			this->bunifuCards1->Location = System::Drawing::Point(12, 123);
			this->bunifuCards1->Name = L"bunifuCards1";
			this->bunifuCards1->RightSahddow = true;
			this->bunifuCards1->ShadowDepth = 20;
			this->bunifuCards1->Size = System::Drawing::Size(1346, 76);
			this->bunifuCards1->TabIndex = 14;
			this->bunifuCards1->MouseEnter += gcnew System::EventHandler(this, &myKatalog::bunifuCards1_MouseEnter);
			// 
			// myKatalog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->ClientSize = System::Drawing::Size(1370, 894);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->bunifuCards1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"myKatalog";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Каталог BMW";
			this->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &myKatalog::myKatalog_MouseDoubleClick);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &myKatalog::myKatalog_MouseDown);
			this->MouseEnter += gcnew System::EventHandler(this, &myKatalog::myKatalog_MouseEnter);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &myKatalog::myKatalog_MouseMove);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->bunifuCards1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//X
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();

	}
//—
	bool but = true;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (but)
		{
			this->WindowState = FormWindowState::Maximized;
			listView1->Select();
			listView1->Columns[1]->Width = listView1->Width / 3;
			listView1->Columns[2]->Width = listView1->Width / 3;
			listView1->Columns[3]->Width = listView1->Width / 3;
			button4->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			
			button5->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			button6->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			but = false;
			//groupBox2->Height += 30;
		}
		else
		{
			this->WindowState = FormWindowState::Normal;
			listView1->Select();
			listView1->Columns[1]->Width = listView1->Width / 3;
			listView1->Columns[2]->Width = listView1->Width / 3;
			listView1->Columns[3]->Width = listView1->Width / 3;
			button4->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			button5->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			button6->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			but = true;
			//groupBox2->Height -= 30;
		}
	}
	//свернуть
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			this->WindowState = FormWindowState::Minimized;
		}
		catch (Exception^ ex)
		{

		}
	}
	//перемещение окна
	Point lastPoint;
	private: System::Void myKatalog_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		lastPoint = Point(e->X, e->Y);
	}
	private: System::Void myKatalog_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			this->Left += e->X - lastPoint.X;
			this->Top += e->Y - lastPoint.Y;
		}
		if (e->X < panel3->Location.X && e->Y < panel3->Location.Y)
		{
			panel3->Visible = true;
		}
		else if(  (e->X > panel3->Bounds.X+ panel3->Width || e->X < panel3->Bounds.X) || (e->Y > panel3->Bounds.Y + panel3->Height || e->Y < panel3->Bounds.Y))
		{
			panel3->Visible = false;	
		}
	}
//menu
	//обзор
	private: System::Void button4_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		panel3->Hide();
		button4->ForeColor = Color::FromArgb(184, 205, 208);
}
	private: System::Void button4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button4->ForeColor = Color::WhiteSmoke;
}
	//авто
	private: System::Void button5_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		panel3->Show();
		panel3->BringToFront();
		button5->ForeColor = Color::FromArgb(184, 205, 208);
	
}
	private: System::Void button5_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button5->ForeColor = Color::WhiteSmoke;
}
	//о компании
	private: System::Void button6_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		panel3->Hide();
		button6->ForeColor = Color::FromArgb(184, 205, 208);
}
	private: System::Void button6_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button6->ForeColor = Color::WhiteSmoke;
}
//автомобили
		   bool pan1 = true;
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pan1)
	{
		panel1->Show();
		panel4->Visible = false;
		panel2->Visible = false;
	}
	}
//обзор
		   bool pan2 = true;
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pan2)
		{
			if (pictureBox2->ImageLocation != "")
			{
				panel3->BringToFront();
				panel1->Visible = false;
				panel4->Visible = false;
				panel2->Visible = true;
			}
			
			
		}
	}
//Ссылка!!!!!!!!!!!!!!!!!
	String^ txt1;//сылка на сайт
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		System::Diagnostics::Process::Start(txt1);
		
	}
//----------------------------------------------------------------------------------
	//обращение к базе
	public: void func(String^ zapros)
	{
		panel2->Visible = true;
		panel1->Visible = false;
	
		String^ conectstr = "provider = Microsoft.Jet.OLEDB.4.0; Data Source = Database2.mdb";
		OleDbConnection^ conDataBase = gcnew OleDbConnection(conectstr);//экземпляр подключения к базе

		conDataBase->Open();
		String^ query = "SELECT * FROM BMW WHERE ((BMW.[Модель]) Like '" + zapros + "' )";
		OleDbCommand^ dbComand = gcnew OleDbCommand(query, conDataBase);//
		OleDbDataReader^ dbReader = dbComand->ExecuteReader();//для чтения бд
		ListViewItem^ item = nullptr;
		listView1->Items->Clear();
		while (dbReader->Read()) 
		{
			item = gcnew ListViewItem();
			item->SubItems->Add(Convert::ToString(dbReader["Модель"]));
			item->SubItems->Add(Convert::ToString(dbReader["Код кузова"]));
			item->SubItems->Add(Convert::ToString(dbReader["Поколение"]));
			listView1->Items->Add(item);

			richTextBox1->Text = Convert::ToString(dbReader["Инфосправка"]);
			//txt1 = Convert::ToString(dbReader["Ссылка на avby"]);
		}
		dbReader->Close();
		listView1->Select();
		listView1->Columns[1]->Width = listView1->Width / 3;
		listView1->Columns[2]->Width = listView1->Width / 3;
		listView1->Columns[3]->Width = listView1->Width / 3;
		listView1->Items[0]->Selected = true;//выделение первой строки при нажатии кнопки с авто 
		
	}

	public: void func(String^ zapros, String^ zapros2)
	{
		panel2->Visible = true;
		panel1->Visible = false;
		
		String^ conectstr = "provider = Microsoft.Jet.OLEDB.4.0; Data Source = Database2.mdb";
		OleDbConnection^ conDataBase = gcnew OleDbConnection(conectstr);//экземпляр подключения к базе

		conDataBase->Open();
		String^ query = "SELECT * FROM BMW WHERE ((BMW.[Модель]) Like '" + zapros + "' AND (BMW.[Код кузова]) Like '"+zapros2+"'  )";
		OleDbCommand^ dbComand = gcnew OleDbCommand(query, conDataBase);//
		OleDbDataReader^ dbReader = dbComand->ExecuteReader();//для чтения бд

		ListViewItem^ item = nullptr;


		listView1->Items->Clear();
		while (dbReader->Read())
		{
			item = gcnew ListViewItem();

			
			item->SubItems->Add(Convert::ToString(dbReader["Модель"]));
			item->SubItems->Add(Convert::ToString(dbReader["Код кузова"]));
			item->SubItems->Add(Convert::ToString(dbReader["Поколение"]));
			listView1->Items->Add(item);

			richTextBox1->Text = Convert::ToString(dbReader["Инфосправка"]);
		}
		func3(zapros2);
		dbReader->Close();
		
		listView1->Columns[1]->Width = listView1->Width / 3;
		listView1->Columns[2]->Width = listView1->Width / 3;
		listView1->Columns[3]->Width = listView1->Width / 3;
	


	}
	public: void func3(String^ str)
	{
		listView1->Select();
		for (int i = 0; i < listView1->Items->Count; i++)
		{
			if (listView1->Items[i]->SubItems[2]->Text->ToString() == str)
			{
				listView1->Select();
				listView1->Items[i]->Selected = true;
				//listView1->SelectedIndices;
			}
		}
		
	}
//----------------------------------------------------------------------------------
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		func("M5");
		label3->Text = button10->Text;
	}
	private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		func("2 серия Active Tourer");
		label3->Text = button27->Text;
	}
	private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
		func("2 серии Gran Tourer");
		label3->Text = button32->Text;
	}
	private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
		func("2000 C/CS");
		label3->Text = button37->Text;
	}
	private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		func("2 серии");
		label3->Text = button22->Text;
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		func("1M");
		label3->Text = button17->Text;
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		func("1 серии");
		label3->Text = button12->Text;
	}
	private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
		func("X5");
		label3->Text = button55->Text;
	}
	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		func("4 серии");
		label3->Text = button23->Text;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		func("02");
		label3->Text = button7->Text;
	}
	private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
		func("3 серии");
		label3->Text = button42->Text;
	}
	private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
		func("3/15");
		label3->Text = button47->Text;
	}
	private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
		func("315");
		label3->Text = button52->Text;
	}
	private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
		func("3200");
		label3->Text = button57->Text;
	}
	private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {
		func("321");
		label3->Text = button62->Text;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		func("326");
		label3->Text = button8->Text;
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		func("327");
		label3->Text = button13->Text;
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		func("340");
		label3->Text = button18->Text;
	}
	private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		func("5 серии");
		label3->Text = button28->Text;
	}
	private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
		func("501");
		label3->Text = button33->Text;
	}
	private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
		func("502");
		label3->Text = button38->Text;
	}
	private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
		func("503");
		label3->Text = button43->Text;
	}
	private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
		func("507");
		label3->Text = button48->Text;
	}
	private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
		func("6 серии");
		label3->Text = button53->Text;
	}
private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
	func("600");
	label3->Text = button58->Text;
}
private: System::Void button63_Click(System::Object^ sender, System::EventArgs^ e) {
	func("7 серии");
	label3->Text = button63->Text;
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	func("700");
	label3->Text = button9->Text;
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	func("8 серии");
	label3->Text = button14->Text;
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	func("E3");
	label3->Text = button19->Text;
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	func("E9");
	label3->Text = button24->Text;
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	func("i3");
	label3->Text = button29->Text;
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	func("i4");
	label3->Text = button34->Text;
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
	func("i8");
	label3->Text = button39->Text;
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
	func("iX");
	label3->Text = button44->Text;
}
private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
	func("iX3");
	label3->Text = button49->Text;
}
private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
	func("M2");
	label3->Text = button54->Text;
}
private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
	func("M3");
	label3->Text = button59->Text;
}
private: System::Void button64_Click(System::Object^ sender, System::EventArgs^ e) {
	func("M4");
	label3->Text = button64->Text;
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	func("M6");
	label3->Text = button15->Text;
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	func("M8");
	label3->Text = button20->Text;
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	func("X1");
	label3->Text = button30->Text;
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
	func("X2");
	label3->Text = button35->Text;
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	func("X3");
	label3->Text = button40->Text;
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	func("New Class(Neue Klasse)");
	label3->Text = button25->Text;
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
	func("X3 M");
	label3->Text = button45->Text;
}
private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
	func("X4 M");
	label3->Text = button50->Text;
}
private: System::Void button60_Click(System::Object^ sender, System::EventArgs^ e) {
	func("X5 M");
	label3->Text = button60->Text;
}
private: System::Void button65_Click(System::Object^ sender, System::EventArgs^ e) {
	func("X6");
	label3->Text = button65->Text;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	func("X6 M");
	label3->Text = button11->Text;
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	func("X7");
	label3->Text = button16->Text;
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	func("Z1");
	label3->Text = button21->Text;
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	func("Z3");
	label3->Text = button26->Text;
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	func("Z3 M");
	label3->Text = button31->Text;
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
	func("Z4");
	label3->Text = button36->Text;
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
	func("Z4 M");
	label3->Text = button41->Text;
}
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
	func("Z8");
	label3->Text = button46->Text;
}
private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
	func("3 серии Gran Turismo");
	label3->Text = button51->Text;
}
private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
	func("5 серии Gran Turismo");
	label3->Text = button65->Text;
}
private: System::Void button61_Click(System::Object^ sender, System::EventArgs^ e) {
	func("4 серии Gran Coupe");
	label3->Text = button61->Text;
}
private: System::Void button66_Click(System::Object^ sender, System::EventArgs^ e) {
	func("M6 Gran Coupe");
	label3->Text = button66->Text;
}
private: System::Void button67_Click_1(System::Object^ sender, System::EventArgs^ e) {
	func("i7");
	label3->Text = button67->Text;
}



private: System::Void myKatalog_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
}

	   bool about_panel = true;
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (about_panel)
	{
		panel2->Visible = false;
		panel1->Visible = false;
		panel4->Visible = true;
		//richTextBox2->Parent = panel4;
		webBrowser1->Navigate("https://www.google.com/maps/place/%D0%A8%D1%82%D0%B0%D0%B1-%D0%BA%D0%B2%D0%B0%D1%80%D1%82%D0%B8%D1%80%D0%B0+BMW/@48.1770518,11.560273,2326m/data=!3m1!1e3!4m12!1m6!3m5!1s0x0:0xde9a49c9837ff33!2z0KjRgtCw0LEt0LrQstCw0YDRgtC40YDQsCBCTVc!8m2!3d48.1770518!4d11.560273!3m4!1s0x479e7680865cf475:0xde9a49c9837ff33!8m2!3d48.1770518!4d11.560273!5m1!1e4");
	}
	
}
private: System::Void listView1_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
//нажатие на строку listview!!!!!!
//------------------------------------------------------------------------------------------------------
	   int index_of_picture = 0;
	   cli::array<String^>^ mass_of_link = gcnew cli::array<String^>(3);
	   String^ text2;//модель
	   String^ text1;//кузов
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int ind;
		index_of_picture = 0;
		try
		{
			ind = listView1->FocusedItem->Index; //индекс строки по которой был клик
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Поиск завершен");
		}
	
		text2 = Convert::ToString(listView1->Items[ind]->SubItems[2]->Text);
		text1 = Convert::ToString(listView1->Items[ind]->SubItems[1]->Text);

		label3->Text = text1 + " " + text2;

		String^ conectstr = "provider = Microsoft.Jet.OLEDB.4.0; Data Source = Database2.mdb";
		OleDbConnection^ conDataBase = gcnew OleDbConnection(conectstr);//экземпляр подключения к базе
		conDataBase->Open();
		String^ query = "SELECT * FROM BMW WHERE ((BMW.[Модель]) Like '" + text1 + "' AND (BMW.[Код кузова]) Like '" + text2 + "')";
		OleDbCommand^ dbComand = gcnew OleDbCommand(query, conDataBase);//
		OleDbDataReader^ dbReader = dbComand->ExecuteReader();//для чтения бд

		dbReader->Read();

		txt1 = Convert::ToString(dbReader["Ссылка на avby"]);

		if (txt1->Contains("cars.av.by"))
		{
			linkLabel1->Text = "Искать на av.by";
		}
		if (txt1->Contains("auto.ru"))
		{
			linkLabel1->Text = "Искать на auto.ru";
		}
		if (txt1->Contains("wikipedia"))
		{
			linkLabel1->Text = "Искать на wikipedia.com";
		}

		richTextBox1->Text = Convert::ToString(dbReader["Инфосправка"]);
		mass_of_link[0] = Convert::ToString(dbReader["Фото 1"]);
		mass_of_link[1] = Convert::ToString(dbReader["Фото 2"]);
		mass_of_link[2] = Convert::ToString(dbReader["Фото 3"]);
		label5->Text = Convert::ToString(dbReader["Год начала выпуска"]);
		label8->Text = Convert::ToString(dbReader["Год конца выпуска"]);

		pictureBox2->ImageLocation = Convert::ToString(dbReader["Фото 1"]);//istochnik_foto;
}
//-----------------------------------------------------------------------------------------------------------
	   
private: System::Void button70_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ conectstr = "provider = Microsoft.Jet.OLEDB.4.0; Data Source = Database2.mdb";
	OleDbConnection^ conDataBase = gcnew OleDbConnection(conectstr);//экземпляр подключения к базе

	conDataBase->Open();
	String^ query = "SELECT * FROM BMW WHERE ((BMW.[Модель]) Like '" + text1 + "' AND (BMW.[Код кузова]) Like '" + text2 + "')";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, conDataBase);//
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();//для чтения бд
	dbReader->Read();
	switch (index_of_picture)
	{
	case 0:
		pictureBox2->ImageLocation = Convert::ToString(dbReader["Фото 2"]);
		index_of_picture++;
		break;
	case 1:
		pictureBox2->ImageLocation = Convert::ToString(dbReader["Фото 3"]);
		index_of_picture++;
		break;
	case 2:
		pictureBox2->ImageLocation = Convert::ToString(dbReader["Фото 1"]);
		index_of_picture = 0;
		break;
	}
}
private: System::Void button71_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ conectstr = "provider = Microsoft.Jet.OLEDB.4.0; Data Source = Database2.mdb";
	OleDbConnection^ conDataBase = gcnew OleDbConnection(conectstr);//экземпляр подключения к базе

	conDataBase->Open();
	String^ query = "SELECT * FROM BMW WHERE ((BMW.[Модель]) Like '" + text1 + "' AND (BMW.[Код кузова]) Like '" + text2 + "')";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, conDataBase);//
	OleDbDataReader^ dbReader = dbComand->ExecuteReader();//для чтения бд
	dbReader->Read();
	switch (index_of_picture)
	{
	case 2:
		pictureBox2->ImageLocation = Convert::ToString(dbReader["Фото 1"]);
		index_of_picture=1;
		break;
	case 1:
		pictureBox2->ImageLocation = Convert::ToString(dbReader["Фото 3"]);
		index_of_picture=0;
		break;
	case 0:
		pictureBox2->ImageLocation = Convert::ToString(dbReader["Фото 2"]);
		index_of_picture = 2;
		break;
	}
}

//	   Rectangle fg;
private: System::Void panel3_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

}
	   bool q = true;
private: System::Void pictureBox2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	
}

private: System::Void groupBox1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
}
private: System::Void tableLayoutPanel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if ((e->X > panel3->Bounds.X + panel3->Width || e->X < panel3->Bounds.X) || (e->Y > panel3->Bounds.Y + panel3->Height || e->Y < panel3->Bounds.Y))
	{
		panel3->Visible = false;
	}
}
private: System::Void button67_Enter(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button67_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

}
private: System::Void splitContainer1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if ((e->X > panel3->Bounds.X + panel3->Width || e->X < panel3->Bounds.X) || (e->Y > panel3->Bounds.Y + panel3->Height || e->Y < panel3->Bounds.Y))
	{
		panel3->Visible = false;
	}
}
private: System::Void button72_Click(System::Object^ sender, System::EventArgs^ e) {
	func("X4");
	label3->Text = button72->Text;
}		

private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void myKatalog_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (but)
	{
		this->WindowState = FormWindowState::Maximized;
		button4->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));

		button5->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		button6->Font = (gcnew System::Drawing::Font(L"Arial Black", 11.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		but = false;
		//groupBox2->Height += 30;
	}
	else
	{
		this->WindowState = FormWindowState::Normal;
		button4->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		button5->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		button6->Font = (gcnew System::Drawing::Font(L"Arial Black", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(204)));
		but = true;
		//groupBox2->Height -= 30;
	}
}
private: System::Void splitContainer1_Panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if ((e->X > panel3->Bounds.X + panel3->Width || e->X < panel3->Bounds.X) || (e->Y > panel3->Bounds.Y + panel3->Height || e->Y < panel3->Bounds.Y))
	{
		panel3->Visible = false;
	}
}
private: System::Void button3_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	ToolTip^ toolTip1 = gcnew ToolTip;
	toolTip1->AutoPopDelay = 50000;
	toolTip1->InitialDelay = 1000;
	toolTip1->ReshowDelay = 5000;
	toolTip1->ShowAlways = true;
	toolTip1->SetToolTip(this->button3, "Свернуть");
}
private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	ToolTip^ toolTip1 = gcnew ToolTip;
	toolTip1->AutoPopDelay = 50000;
	toolTip1->InitialDelay = 1000;
	toolTip1->ReshowDelay = 5000;
	toolTip1->ShowAlways = true;
	toolTip1->SetToolTip(this->button1, "Закрыть");
}
private: System::Void button2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuThinButton21_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
	SearchAutoForm^ serchform = gcnew SearchAutoForm();
	serchform->ShowDialog();
	String^ selectedStr;
	if (serchform->textBox1->Text->ToString() != "" && serchform->listBox1->SelectedItems->Count > 0)
	{
		if (serchform->listBox1->SelectedItem->ToString() != "Нет результатов")
		{
			selectedStr = serchform->listBox1->SelectedItem->ToString();
			int index = selectedStr->IndexOf("   ");
			String^ zaprosStr = selectedStr->Substring(0, index);
			
			String^ zaprosStr2 = selectedStr->Substring(index+3);
			
			func(zaprosStr, zaprosStr2);//выделение в listView найденного авто
			label3->Text = zaprosStr+" " + zaprosStr2;
		}
	}
}
private: System::Void bunifuThinButton22_Click(System::Object^ sender, System::EventArgs^ e) {

	PrintDialog^ printDialog1 = gcnew PrintDialog();
	printDialog1->Document = printDocument1;
	if (printDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		printDocument1->Print();

	/*PrintPreviewDialog^ printprevDocument1 = gcnew PrintPreviewDialog();
	printprevDocument1->Document = printDocument1;
	printprevDocument1->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	
	PrintDialog^ printDialog1 = gcnew PrintDialog();
	printDialog1->Document = printDocument1;

	if (printDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
		printDocument1->Print();*/
}
private: System::Void richTextBox2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	
	Bitmap^ bmp = gcnew Bitmap(pictureBox2->Width+10, pictureBox2->Height+10); //прибавляем размер
	pictureBox2->DrawToBitmap(bmp, pictureBox2->Bounds);
	String^ drawString = label3->Text;
	System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 16); //шрифт
	SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black); //цвет черный
	float x = 100.0F;
	float y = 100.0F;
	float width = 400.0F; //ширина строки
	float height = 50.0F; //высота
	RectangleF drawRect = RectangleF(x, y, width, height);
	e->Graphics->DrawString(drawString, drawFont, drawBrush, drawRect);
	e->Graphics->DrawImage(bmp, 0, 0);
	bmp->RotateFlip(RotateFlipType::Rotate90FlipNone);

	/*PrintPreviewDialog^ printprevDocument1 = gcnew PrintPreviewDialog();
	printprevDocument1->Document = printDocument1;
	printprevDocument1->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	printprevDocument1->Show();*/
}
private: System::Void bunifuCards1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bunifuThinButton23_Click(System::Object^ sender, System::EventArgs^ e) {

	/*send_mail_form^ send_form = gcnew send_mail_form();
	send_form->ShowDialog();

	MailAddress^ sent = gcnew MailAddress("vladik_228_ant@mail.ru", "Vlad Company");
	MailAddress^ sent_to = gcnew MailAddress(send_form->textBox1->Text->ToString());
	MailMessage^ mail_mess = gcnew MailMessage(sent, sent_to);

	mail_mess->Subject = "BMW Catalog";
	mail_mess->Body = "<h2>" + richTextBox1->Text->ToString() + "</h2>";
	mail_mess->IsBodyHtml = true;
	System::Net::Mail::SmtpClient^ send = gcnew System::Net::Mail::SmtpClient("smtp.gmail.com", 587);
	send->Credentials = gcnew NetworkCredential("vladik_228_ant@mail.ru","9qQY3B53O5kS1VUiNkMc");
	send->EnableSsl = true;
	send->Send(mail_mess);
	*/
}
};
}