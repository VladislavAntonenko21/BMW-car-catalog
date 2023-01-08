#pragma once

namespace KursachProject1 {

	using namespace System::Data::OleDb;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SearchAutoForm
	/// </summary>
	public ref class SearchAutoForm : public System::Windows::Forms::Form
	{
	public:
		SearchAutoForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~SearchAutoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;


	public: System::Windows::Forms::ListBox^ listBox1;
	private: Bunifu::Framework::UI::BunifuCheckbox^ bunifuCheckbox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	public: System::Windows::Forms::TextBox^ textBox3;
	private:
	public: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	public:
	private: System::Windows::Forms::Label^ label5;
	public:

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchAutoForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bunifuCheckbox1 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Name = L"textBox1";
			this->textBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchAutoForm::textBox1_MouseClick);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SearchAutoForm::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SearchAutoForm::textBox1_KeyDown);
			this->textBox1->MouseHover += gcnew System::EventHandler(this, &SearchAutoForm::textBox1_MouseHover);
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SearchAutoForm::button1_Click);
			// 
			// groupBox1
			// 
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->bunifuCheckbox1);
			this->groupBox1->Controls->Add(this->listBox1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label6->Name = L"label6";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label5->Name = L"label5";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox3, L"textBox3");
			this->textBox3->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox3->Name = L"textBox3";
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SearchAutoForm::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Name = L"textBox2";
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SearchAutoForm::textBox3_KeyPress);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Name = L"label4";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Name = L"label3";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Name = L"label2";
			// 
			// bunifuCheckbox1
			// 
			this->bunifuCheckbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->bunifuCheckbox1->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(132)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(140)));
			this->bunifuCheckbox1->Checked = false;
			this->bunifuCheckbox1->CheckedOnColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(205)), static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->bunifuCheckbox1->ForeColor = System::Drawing::Color::White;
			resources->ApplyResources(this->bunifuCheckbox1, L"bunifuCheckbox1");
			this->bunifuCheckbox1->Name = L"bunifuCheckbox1";
			this->bunifuCheckbox1->OnChange += gcnew System::EventHandler(this, &SearchAutoForm::bunifuCheckbox1_OnChange);
			this->bunifuCheckbox1->Click += gcnew System::EventHandler(this, &SearchAutoForm::bunifuCheckbox1_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Silver;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->listBox1, L"listBox1");
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &SearchAutoForm::listBox1_SelectedIndexChanged);
			this->listBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SearchAutoForm::listBox1_KeyDown);
			this->listBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchAutoForm::listBox1_MouseDoubleClick);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Name = L"label1";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchAutoForm::label1_MouseDown);
			this->label1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchAutoForm::label1_MouseMove);
			// 
			// SearchAutoForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(42)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SearchAutoForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Load += gcnew System::EventHandler(this, &SearchAutoForm::SearchAutoForm_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SearchAutoForm::SearchAutoForm_KeyPress);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchAutoForm::SearchAutoForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SearchAutoForm::SearchAutoForm_MouseMove);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SearchAutoForm_Load(System::Object^ sender, System::EventArgs^ e) {
		//this->Parent = parentForm;
	}
	
		   Point lastPoint;
	private: System::Void SearchAutoForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		lastPoint = Point(e->X, e->Y);
	}
	private: System::Void SearchAutoForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			this->Left += e->X - lastPoint.X;
			this->Top += e->Y - lastPoint.Y;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox1->Visible = false;
		this->Close();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (bunifuCheckbox1->Checked == false)
		{
			listBox1->Visible = true;
			String^ conectstr = "provider = Microsoft.Jet.OLEDB.4.0; Data Source = Database2.mdb";
			OleDbConnection^ conDataBase = gcnew OleDbConnection(conectstr);//экземпляр подключения к базе

			conDataBase->Open();

			String^ query = "SELECT * FROM BMW WHERE ((BMW.[Модель]) Like ('%" + textBox1->Text->ToString() + "%') OR (BMW.[Код кузова]) Like ('%" + textBox1->Text->ToString() + "%') OR (  ((BMW.[Модель])+(' ')+(BMW.[Код кузова])) Like '%" + textBox1->Text->ToString() + "%' ) )";
			OleDbCommand^ dbComand = gcnew OleDbCommand(query, conDataBase);//
			OleDbDataReader^ dbReader = dbComand->ExecuteReader();//для чтения бд
			listBox1->Items->Clear();
			while (dbReader->Read())
			{
				listBox1->Items->Add(dbReader["Модель"]->ToString() + "   " + dbReader["Код кузова"]->ToString());
				//dataGridView1->Rows->Add(dbReader["Модель"]);
			}
			if (textBox1->Text == "")
			{
				//dataGridView1->Rows->Clear();
				listBox1->Items->Clear();
				listBox1->Visible = false;
			}
			if (listBox1->Items->Count == 0)
			{
				listBox1->Items->Add("Нет результатов");
			}
		}
		else
		{
			if(textBox2->Text != "" && textBox3->Text != "")
			{
				listBox1->Visible = true;
				String^ conectstr = "provider = Microsoft.Jet.OLEDB.4.0; Data Source = Database2.mdb";
				OleDbConnection^ conDataBase = gcnew OleDbConnection(conectstr);//экземпляр подключения к базе

				conDataBase->Open();

				String^ query = "SELECT * FROM BMW WHERE (     (BMW.[Модель]) Like ('%" + textBox1->Text->ToString() + "%') OR (BMW.[Код кузова]) Like ('%" + textBox1->Text->ToString() + "%') OR   (((BMW.[Модель])+(' ')+(BMW.[Код кузова])) Like ('%" + textBox1->Text->ToString() + "%')))  AND BMW.[Год начала выпуска] >= ('"+ textBox2->Text->ToString() +"') AND BMW.[Год конца выпуска] <= ('"+ textBox3->Text->ToString() +"' )";
				OleDbCommand^ dbComand = gcnew OleDbCommand(query, conDataBase);//

				OleDbDataReader^ dbReader = dbComand->ExecuteReader();//для чтения бд
				listBox1->Items->Clear();
				while (dbReader->Read())
				{
					listBox1->Items->Add(dbReader["Модель"]->ToString() + "   " + dbReader["Код кузова"]->ToString());
					//dataGridView1->Rows->Add(dbReader["Модель"]);
				}
				if (textBox1->Text == "")
				{
					//dataGridView1->Rows->Clear();
					listBox1->Items->Clear();
					listBox1->Visible = false;
				}
				if (listBox1->Items->Count == 0)
				{
					listBox1->Items->Add("Нет результатов");
				}
			}
			if (textBox2->Text != "" && textBox3->Text == "")
			{
				listBox1->Visible = true;
				String^ conectstr = "provider = Microsoft.Jet.OLEDB.4.0; Data Source = Database2.mdb";
				OleDbConnection^ conDataBase = gcnew OleDbConnection(conectstr);//экземпляр подключения к базе

				conDataBase->Open();

				String^ query = "SELECT * FROM BMW WHERE (     (BMW.[Модель]) Like ('%" + textBox1->Text->ToString() + "%') OR (BMW.[Код кузова]) Like ('%" + textBox1->Text->ToString() + "%') OR   (((BMW.[Модель])+(' ')+(BMW.[Код кузова])) Like ('%" + textBox1->Text->ToString() + "%')))  AND BMW.[Год начала выпуска] >= ('" + textBox2->Text->ToString() + "') ";
				OleDbCommand^ dbComand = gcnew OleDbCommand(query, conDataBase);//

				OleDbDataReader^ dbReader = dbComand->ExecuteReader();//для чтения бд
				listBox1->Items->Clear();
				while (dbReader->Read())
				{
					listBox1->Items->Add(dbReader["Модель"]->ToString() + "   " + dbReader["Код кузова"]->ToString());
					//dataGridView1->Rows->Add(dbReader["Модель"]);
				}
				if (textBox1->Text == "")
				{
					//dataGridView1->Rows->Clear();
					listBox1->Items->Clear();
					listBox1->Visible = false;
				}
				if (listBox1->Items->Count == 0)
				{
					listBox1->Items->Add("Нет результатов");
				}
			}
			if (textBox2->Text == "" && textBox3->Text != "")
			{
				listBox1->Visible = true;
				String^ conectstr = "provider = Microsoft.Jet.OLEDB.4.0; Data Source = Database2.mdb";
				OleDbConnection^ conDataBase = gcnew OleDbConnection(conectstr);//экземпляр подключения к базе

				conDataBase->Open();

				String^ query = "SELECT * FROM BMW WHERE (     (BMW.[Модель]) Like ('%" + textBox1->Text->ToString() + "%') OR (BMW.[Код кузова]) Like ('%" + textBox1->Text->ToString() + "%') OR   (((BMW.[Модель])+(' ')+(BMW.[Код кузова])) Like ('%" + textBox1->Text->ToString() + "%'))) AND BMW.[Год конца выпуска] <= ('" + textBox3->Text->ToString() + "')";
				OleDbCommand^ dbComand = gcnew OleDbCommand(query, conDataBase);//

				OleDbDataReader^ dbReader = dbComand->ExecuteReader();//для чтения бд
				listBox1->Items->Clear();
				while (dbReader->Read())
				{
					listBox1->Items->Add(dbReader["Модель"]->ToString() + "   " + dbReader["Код кузова"]->ToString());
					//dataGridView1->Rows->Add(dbReader["Модель"]);
				}
				if (textBox1->Text == "")
				{
					//dataGridView1->Rows->Clear();
					listBox1->Items->Clear();
					listBox1->Visible = false;
				}
				if (listBox1->Items->Count == 0)
				{
					listBox1->Items->Add("Нет результатов");
				}
			}
			if (textBox2->Text == "" && textBox3->Text == "")
			{
				listBox1->Visible = true;
				String^ conectstr = "provider = Microsoft.Jet.OLEDB.4.0; Data Source = Database2.mdb";
				OleDbConnection^ conDataBase = gcnew OleDbConnection(conectstr);//экземпляр подключения к базе

				conDataBase->Open();

				String^ query = "SELECT * FROM BMW WHERE ((BMW.[Модель]) Like ('%" + textBox1->Text->ToString() + "%') OR (BMW.[Код кузова]) Like ('%" + textBox1->Text->ToString() + "%') OR (  ((BMW.[Модель])+(' ')+(BMW.[Код кузова])) Like '%" + textBox1->Text->ToString() + "%' ) )";
				OleDbCommand^ dbComand = gcnew OleDbCommand(query, conDataBase);//
				OleDbDataReader^ dbReader = dbComand->ExecuteReader();//для чтения бд
				listBox1->Items->Clear();
				while (dbReader->Read())
				{
					listBox1->Items->Add(dbReader["Модель"]->ToString() + "   " + dbReader["Код кузова"]->ToString());
					//dataGridView1->Rows->Add(dbReader["Модель"]);
				}
				if (textBox1->Text == "")
				{
					//dataGridView1->Rows->Clear();
					listBox1->Items->Clear();
					listBox1->Visible = false;
				}
				if (listBox1->Items->Count == 0)
				{
					listBox1->Items->Add("Нет результатов");
				}
			}

		}
		
	}

private: System::Void label1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	lastPoint = Point(e->X, e->Y);
}
private: System::Void label1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left)
	{
		this->Left += e->X - lastPoint.X;
		this->Top += e->Y - lastPoint.Y;
	}
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (textBox1->Text == "Введите строку для поиска")
	{
		textBox1->Text = "";
	}
}
private: System::Void SearchAutoForm_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
}
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter /*&& textBox1->Text !=""*/)
		this->Close();
}

private: System::Void listBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter && textBox1->Text != "")
		this->Close();
}
private: System::Void listBox1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left && textBox1->Text != "")
		this->Close();
}

	   ToolTip^ toolTip1 = gcnew ToolTip;
private: System::Void textBox1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
	
	toolTip1->AutoPopDelay = 50000;
	toolTip1->InitialDelay = 1;
	toolTip1->ReshowDelay = 5000;
	toolTip1->ShowAlways = true;
	toolTip1->SetToolTip(this->textBox1, "Вы можете осуществить поиск по названию\nмодели или по названию кузова");

}
	   bool check = true;
private: System::Void bunifuCheckbox1_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (check)
	{
		groupBox2->Visible = true;
		check = false;
	}
	else
	{
		groupBox2->Visible = false;
		check = true;
	}*/
}
private: System::Void bunifuCheckbox1_OnChange(System::Object^ sender, System::EventArgs^ e) {
	if (check)
	{
		groupBox2->Visible = true;
		check = false;
	}
	else
	{
		groupBox2->Visible = false;
		check = true;
	}
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b') && e->KeyChar != 45   )
		e->Handled = true;
}
};
}
