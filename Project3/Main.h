#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "admin.h"		//форма режима администратора
#include "zapros.h"		//форма запроса
#include "file_warn.h"	//форма ошибки чтения файла
#include <Windows.h>
#include "exit_izm.h"
#include "resource1.h"
#include "game.h"		//форма игры
#include "spravka_main.h"
#include <fstream>
#include <msclr\marshal_cppstd.h>	//конвертирование строк

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
		}

	protected:
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		String^ file_op1;
		char* file_op2;	//путь к файлу с базой данных
		int kol_vo;		//количество строк в базе данных
		Boolean log_admin = false;	//проверка на вход в учетную запись администратора
		int izm = 0;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ запросToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ администраторToolStripMenuItem;
	private: System::Windows::Forms::Button^ button_open_base;
	private: System::Windows::Forms::Button^ button_create_base;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel1;
	private: System::Windows::Forms::ToolStrip^ toolStrip2;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходИзРежимаАдминистраторToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button_save;
	private: System::Windows::Forms::ToolStripMenuItem^ игратьToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_1_nomer_reysa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_2_tip_samoleta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_3_punkt_nazn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_4_day_otp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_5_vilet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_6_prilet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_7_price;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog2;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ открытьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem1;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->открытьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->сохранитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->выходToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->запросToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->администраторToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходИзРежимаАдминистраторToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->игратьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button_open_base = (gcnew System::Windows::Forms::Button());
			this->button_create_base = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel2 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column_1_nomer_reysa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_2_tip_samoleta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_3_punkt_nazn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_4_day_otp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_5_vilet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_6_prilet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_7_price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog2 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->toolStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->запросToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->MaximumSize = System::Drawing::Size(250, 50);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(250, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->открытьToolStripMenuItem,
					this->создатьToolStripMenuItem, this->выходToolStripMenuItem, this->сохранитьToolStripMenuItem, this->сохранитьКакToolStripMenuItem,
					this->toolStripMenuItem1, this->выходToolStripMenuItem1
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// открытьToolStripMenuItem
			// 
			this->открытьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"открытьToolStripMenuItem.Image")));
			this->открытьToolStripMenuItem->Name = L"открытьToolStripMenuItem";
			this->открытьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->открытьToolStripMenuItem->Size = System::Drawing::Size(225, 22);
			this->открытьToolStripMenuItem->Text = L"Открыть...";
			this->открытьToolStripMenuItem->TextDirection = System::Windows::Forms::ToolStripTextDirection::Horizontal;
			this->открытьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::открытьToolStripMenuItem_Click);
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"создатьToolStripMenuItem.Image")));
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(225, 22);
			this->создатьToolStripMenuItem->Text = L"Создать...";
			this->создатьToolStripMenuItem->Visible = false;
			this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::создатьToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(222, 6);
			// 
			// сохранитьToolStripMenuItem
			// 
			this->сохранитьToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"сохранитьToolStripMenuItem.Image")));
			this->сохранитьToolStripMenuItem->Name = L"сохранитьToolStripMenuItem";
			this->сохранитьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->сохранитьToolStripMenuItem->Size = System::Drawing::Size(225, 22);
			this->сохранитьToolStripMenuItem->Text = L"Сохранить";
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(225, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::сохранитьКакToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(222, 6);
			// 
			// выходToolStripMenuItem1
			// 
			this->выходToolStripMenuItem1->Name = L"выходToolStripMenuItem1";
			this->выходToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->выходToolStripMenuItem1->Size = System::Drawing::Size(225, 22);
			this->выходToolStripMenuItem1->Text = L"Выход";
			this->выходToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Main::выходToolStripMenuItem1_Click);
			// 
			// запросToolStripMenuItem
			// 
			this->запросToolStripMenuItem->Name = L"запросToolStripMenuItem";
			this->запросToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->запросToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->запросToolStripMenuItem->Text = L"Запрос";
			this->запросToolStripMenuItem->Visible = false;
			this->запросToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::запросToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::справкаToolStripMenuItem_Click);
			// 
			// menuStrip2
			// 
			this->menuStrip2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->menuStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->администраторToolStripMenuItem,
					this->выходИзРежимаАдминистраторToolStripMenuItem, this->игратьToolStripMenuItem, this->выходToolStripMenuItem2
			});
			this->menuStrip2->Location = System::Drawing::Point(798, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(227, 24);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// администраторToolStripMenuItem
			// 
			this->администраторToolStripMenuItem->Name = L"администраторToolStripMenuItem";
			this->администраторToolStripMenuItem->Size = System::Drawing::Size(106, 20);
			this->администраторToolStripMenuItem->Text = L"Администратор";
			this->администраторToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::администраторToolStripMenuItem_Click);
			// 
			// выходИзРежимаАдминистраторToolStripMenuItem
			// 
			this->выходИзРежимаАдминистраторToolStripMenuItem->Name = L"выходИзРежимаАдминистраторToolStripMenuItem";
			this->выходИзРежимаАдминистраторToolStripMenuItem->Size = System::Drawing::Size(209, 20);
			this->выходИзРежимаАдминистраторToolStripMenuItem->Text = L"Выход из режима администратора";
			this->выходИзРежимаАдминистраторToolStripMenuItem->Visible = false;
			this->выходИзРежимаАдминистраторToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::выходИзРежимаАдминистраторToolStripMenuItem_Click);
			// 
			// игратьToolStripMenuItem
			// 
			this->игратьToolStripMenuItem->Name = L"игратьToolStripMenuItem";
			this->игратьToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::G));
			this->игратьToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->игратьToolStripMenuItem->Text = L"Играть!";
			this->игратьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::игратьToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem2
			// 
			this->выходToolStripMenuItem2->Name = L"выходToolStripMenuItem2";
			this->выходToolStripMenuItem2->Size = System::Drawing::Size(53, 20);
			this->выходToolStripMenuItem2->Text = L"Выход";
			this->выходToolStripMenuItem2->Click += gcnew System::EventHandler(this, &Main::выходToolStripMenuItem2_Click);
			// 
			// button_open_base
			// 
			this->button_open_base->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button_open_base->Location = System::Drawing::Point(387, 235);
			this->button_open_base->Name = L"button_open_base";
			this->button_open_base->Size = System::Drawing::Size(284, 35);
			this->button_open_base->TabIndex = 2;
			this->button_open_base->Text = L"Открыть существующую базу на ПК";
			this->button_open_base->UseVisualStyleBackColor = true;
			this->button_open_base->Click += gcnew System::EventHandler(this, &Main::button_open_base_Click);
			// 
			// button_create_base
			// 
			this->button_create_base->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->button_create_base->Location = System::Drawing::Point(387, 327);
			this->button_create_base->Name = L"button_create_base";
			this->button_create_base->Size = System::Drawing::Size(284, 35);
			this->button_create_base->TabIndex = 3;
			this->button_create_base->Text = L"Создать новую базу";
			this->button_create_base->UseVisualStyleBackColor = true;
			this->button_create_base->Visible = false;
			this->button_create_base->Click += gcnew System::EventHandler(this, &Main::button_create_base_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->label1->Location = System::Drawing::Point(339, 160);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(404, 20);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Для начала работы выберите один из пунктов";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// toolStrip1
			// 
			this->toolStrip1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripLabel1 });
			this->toolStrip1->Location = System::Drawing::Point(0, 514);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(12, 25);
			this->toolStrip1->TabIndex = 5;
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(0, 22);
			// 
			// toolStrip2
			// 
			this->toolStrip2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->toolStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripLabel2 });
			this->toolStrip2->Location = System::Drawing::Point(1224, 514);
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->Size = System::Drawing::Size(12, 25);
			this->toolStrip2->TabIndex = 6;
			// 
			// toolStripLabel2
			// 
			this->toolStripLabel2->Name = L"toolStripLabel2";
			this->toolStripLabel2->Size = System::Drawing::Size(0, 22);
			// 
			// timer1
			// 
			this->timer1->Interval = 5000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Main::timer1_Tick);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column_1_nomer_reysa,
					this->Column_2_tip_samoleta, this->Column_3_punkt_nazn, this->Column_4_day_otp, this->Column_5_vilet, this->Column_6_prilet,
					this->Column_7_price
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->dataGridView1->Location = System::Drawing::Point(0, 37);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(846, 463);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->Visible = false;
			this->dataGridView1->CellStateChanged += gcnew System::Windows::Forms::DataGridViewCellStateChangedEventHandler(this, &Main::dataGridView1_CellStateChanged);
			// 
			// Column_1_nomer_reysa
			// 
			this->Column_1_nomer_reysa->HeaderText = L"Номер рейса";
			this->Column_1_nomer_reysa->Name = L"Column_1_nomer_reysa";
			this->Column_1_nomer_reysa->ReadOnly = true;
			// 
			// Column_2_tip_samoleta
			// 
			this->Column_2_tip_samoleta->HeaderText = L"Тип самолета";
			this->Column_2_tip_samoleta->Name = L"Column_2_tip_samoleta";
			this->Column_2_tip_samoleta->ReadOnly = true;
			// 
			// Column_3_punkt_nazn
			// 
			this->Column_3_punkt_nazn->HeaderText = L"Пункт назначения";
			this->Column_3_punkt_nazn->Name = L"Column_3_punkt_nazn";
			this->Column_3_punkt_nazn->ReadOnly = true;
			// 
			// Column_4_day_otp
			// 
			this->Column_4_day_otp->HeaderText = L"Дни отправления";
			this->Column_4_day_otp->Name = L"Column_4_day_otp";
			this->Column_4_day_otp->ReadOnly = true;
			// 
			// Column_5_vilet
			// 
			this->Column_5_vilet->HeaderText = L"Время вылета";
			this->Column_5_vilet->Name = L"Column_5_vilet";
			this->Column_5_vilet->ReadOnly = true;
			// 
			// Column_6_prilet
			// 
			this->Column_6_prilet->HeaderText = L"Время прилета";
			this->Column_6_prilet->Name = L"Column_6_prilet";
			this->Column_6_prilet->ReadOnly = true;
			// 
			// Column_7_price
			// 
			this->Column_7_price->HeaderText = L"Цена билета";
			this->Column_7_price->Name = L"Column_7_price";
			this->Column_7_price->ReadOnly = true;
			// 
			// button_save
			// 
			this->button_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_save->Location = System::Drawing::Point(943, 463);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(103, 26);
			this->button_save->TabIndex = 8;
			this->button_save->Text = L"Сохранить";
			this->button_save->UseVisualStyleBackColor = true;
			this->button_save->Visible = false;
			this->button_save->Click += gcnew System::EventHandler(this, &Main::button_save_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1230, 539);
			this->Controls->Add(this->button_save);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->toolStrip2);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_create_base);
			this->Controls->Add(this->button_open_base);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Аэропорт";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->toolStrip2->ResumeLayout(false);
			this->toolStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void администраторToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		admin^ admin_frm = gcnew admin();
		admin_frm->ShowDialog();
		if (admin_frm->LogOn == true)
		{
			this->log_admin = true;
			this->toolStripLabel1->Text = "Вы успешно вошли в режим администратора";
			this->администраторToolStripMenuItem->Visible = false;
			this->выходИзРежимаАдминистраторToolStripMenuItem->Visible = true;
			this->timer1->Enabled = true;

			this->Column_1_nomer_reysa->ReadOnly = false;
			this->Column_2_tip_samoleta->ReadOnly = false;
			this->Column_3_punkt_nazn->ReadOnly = false;
			this->Column_4_day_otp->ReadOnly = false;
			this->Column_5_vilet->ReadOnly = false;
			this->Column_6_prilet->ReadOnly = false;
			this->Column_7_price->ReadOnly = false;
			if (this->dataGridView1->Visible == true)
			{
				this->button_save->Visible = true;
			}
			this->создатьToolStripMenuItem->Visible = true;
			if (this->button_open_base->Visible == true)
			{
				this->button_create_base->Visible = true;
			}
			
			//wc.hIcon = LoadIcon(NULL, "101");
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this1.Icon")));
		}
	}

	private: int check_file()
	{
		String^ file_op = file_op1;
		std::string unmanaged = msclr::interop::marshal_as<std::string>(file_op);
		FILE* ved;
		ved = fopen(file_op2, "r");
		int dlina = 0;      //количество символов в файле
		char c;         //текущий элемент в файле
		int enter1 = 0;     //количество переходов на следующую строку в файле ("\n")
		while (!feof(ved))      //узнать количество символов в файле
		{
			fscanf(ved, "%c", &c);
			if (!feof(ved))
			{
				if (c != '\n')
				{
					dlina++;
				}
				if (c == '\n')
				{
					enter1++;
				}
			}
		};
		fclose(ved);
		if ((dlina % 100 == 0) && ((dlina / 100) == (enter1 + 1)))  //правильное форматирование
		{
			kol_vo = dlina / 100;
			this->toolStripLabel1->Text = "Файл успешно открыт";
			this->timer1->Enabled = true;
			return 1;
		}
		else if (dlina == 0)    //файл пуст
		{
			kol_vo = 0;
			return 1;
		}
		else
		{
			file_warn^ file_warn_frm = gcnew file_warn();
			file_warn_frm->ShowDialog();
			if (file_warn_frm->fg == '1')
			{
				StreamWriter^ file = gcnew StreamWriter(file_op1, false, System::Text::Encoding::GetEncoding(1251));
				file->Close();
				kol_vo = 0;
			}
			if (file_warn_frm->fg == '2')
			{
				file_op2 = NULL;
				kol_vo = 0;
				std::string strSubString;
				strSubString.assign(unmanaged.begin(), unmanaged.begin() + unmanaged.length() - 4);
				strSubString = strSubString + "_copy.txt";
				std::ifstream    inFile(unmanaged);
				std::ofstream    outFile(strSubString);
				outFile << inFile.rdbuf();
				std::ofstream inFile1(unmanaged);
			}
			if (file_warn_frm->fg == '3')
			{
				file_op2 = NULL;
				return 0;
				//search_file();
			}
		}
	}

	private: Void table_ris()
	{
		izm = 0;
		//очистка всех ячеек
		if (this->log_admin == true)
		{
			this->button_save->Visible = true;
		}
		if (this->dataGridView1->RowCount - 1 != 0)
		{
			do
			{
				this->dataGridView1->Rows->RemoveAt(0);
			} while (this->dataGridView1->RowCount - 1 != 0);
		}
		FILE* veg;
		if (file_op2 != NULL)
		{
			
			veg = fopen(file_op2, "r");
			if (veg == NULL)
			{
				MessageBox::Show("Файл не может быть открыт", "Ошибка открытия", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				char day_otp[50];
				int y, r, w, t;
				char c[100];
				for (t = 0; t < 100; t++)
				{
					c[t] = '\0';
				}
				std::string er;
				String^ str3;
				do
				{
					if ((fseek(veg, y * 102, 0) == 0) && (kol_vo != 0))
					{
						this->dataGridView1->Rows->Add();
						for (r = 0, w = 0, t = 0; r != 7; w++)
						{
							fscanf(veg, "%c", &c[t]);
							fseek(veg, y * 102 + w + 1, 0);
							if (c[t] == ';')
							{
								c[t] = '\0';
								if(r == 3)
								{
									strcpy(day_otp, c);
									int o = 0;
									for (int p = 0; day_otp[p] != NULL; p++)
									{
										c[o] = day_otp[p];
										c[o + 1] = ' ';
										o = o + 2;
									}
									strcpy(day_otp, c);
								}
								er = (const char*)c;
								str3 = gcnew String(er.c_str());
								this->dataGridView1->Rows[y]->Cells[r]->Value = str3;
								r++;
								for (t = 0; t < 100; t++)
								{
									c[t] = '\0';
								}
								t = 0;
								t--;
							}
							t++;
						}
						y++;
					}
				} while (y < kol_vo);
				fclose(veg);
				this->dataGridView1->Visible = true;
				if (log_admin == true)
				{
					this->button_save->Visible = true;
				}
			}
		}
	}


	private: Void search_file()
	{
		
		OpenFileDialog^ openDlg = gcnew OpenFileDialog();
		openDlg->InitialDirectory = "c:\\";
		openDlg->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		if (System::Windows::Forms::DialogResult::OK == openDlg->ShowDialog())
		{
			String^ fileName = openDlg->FileName;
			std::string unmanaged = msclr::interop::marshal_as<std::string>(fileName);
			char* cstr = new char[unmanaged.length() + 1];
			strcpy(cstr, unmanaged.c_str());
			file_op1 = fileName;
			file_op2 = cstr;
			int func;
			func = check_file();
			if (func == 1)
			{
				this->label1->Visible = false;
				this->toolStripLabel1->Text = "База данных успешно прочитана";
				this->запросToolStripMenuItem->Visible = true;
				this->toolStripLabel2->Text = "Base: " + fileName;
				this->button_open_base->Visible = false;
				this->запросToolStripMenuItem->Visible = true;
				this->button_create_base->Visible = false;
				table_ris();
			}
			else
			{
				file_op2 = NULL;
				search_file();
			}
		}
	}

	private: Void Create_Base() {
		izm = 0;
		kol_vo = 0;
		SaveFileDialog^ saveDlg = gcnew SaveFileDialog();
		saveDlg->InitialDirectory = "c:\\";
		saveDlg->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		if (System::Windows::Forms::DialogResult::OK == saveDlg->ShowDialog())
		{
			String^ fileName = saveDlg->FileName;
			std::string unmanaged = msclr::interop::marshal_as<std::string>(fileName);
			this->toolStripLabel2->Text = "Base: " + fileName;
			char* cstr = new char[unmanaged.length() + 1];
			if (fileName != "")
			{
				file_op1 = fileName;
				file_op2 = cstr;
				StreamWriter^ file = gcnew StreamWriter(file_op1, false, System::Text::Encoding::GetEncoding(1251));
				file->Close();
				this->button_create_base->Text = "Файл успешно создан.";
				this->timer1->Enabled = true;
				this->dataGridView1->Visible = true;
				if (this->dataGridView1->RowCount - 1 != 0)
				{
					do
					{
						this->dataGridView1->Rows->RemoveAt(0);
					} while (this->dataGridView1->RowCount - 1 != 0);
				}
				if (this->log_admin == true)
				{
					this->button_save->Visible = true;
				}
			}
		}
	}

	private: System::Void button_create_base_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->log_admin == true)
		{
			Create_Base();
		}
	}

	private: System::Void создатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->log_admin == true)
		{
			Create_Base();
		}
	}

	private: System::Void button_open_base_Click(System::Object^ sender, System::EventArgs^ e) {
		search_file();
	}

	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		search_file();
	}

		   //скрытие информации из tool strip menu
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->toolStripLabel1->Text = L"";
		this->timer1->Enabled = false;
	}

	private: System::Void выходИзРежимаАдминистраторToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (izm != 0)
		{
			exit_izm^ exit_izm_frm = gcnew exit_izm();
			exit_izm_frm->ShowDialog();
			//есть несохраненные изменения!!!
			if (exit_izm_frm->save == '1')
			{
				precheck_and_zapis();
				/*
				int u, q, m, r;
				u = this->dataGridView1->RowCount - 1;
				
				int individ[7], t, o;
				t = 0;
				o = 0;
				if (precheck() == 1)
				{
					for (r = 0; r < u; r++)	//предпроверка всех ячеек на правильность ввода данных
					{
						//1 - хорошо
						//0 - плохо
						int i, good;
						good = 0;
						individ[0] = check_nomer(r); //проверка индивидуальность номера рейса
						individ[1] = check_tip(r);	//проверка типа самолета
						individ[2] = check_punkt(r);	//проверка пункта назначения (неверные символы)
						individ[3] = check_day(r);
						individ[4] = check_vremya(r, 4);
						individ[5] = check_vremya(r, 5);
						individ[6] = check_price(r);
					}
				}
				//precheck_yacheika();
				//button_save_Click(sender, e);
				//не записывает!!!
				/*
				
				button_save_Click(sender, e);
				table_ris();
				this->администраторToolStripMenuItem->Visible = true;
				this->log_admin = false;
				this->button_save->Visible = false;
				this->выходИзРежимаАдминистраторToolStripMenuItem->Visible = false;
				this->Column_1_nomer_reysa->ReadOnly = true;
				this->Column_2_tip_samoleta->ReadOnly = true;
				this->Column_3_punkt_nazn->ReadOnly = true;
				this->Column_4_day_otp->ReadOnly = true;
				this->Column_5_vilet->ReadOnly = true;
				this->Column_6_prilet->ReadOnly = true;
				this->создатьToolStripMenuItem->Visible = false;
				this->button_create_base->Visible = false;
				this->Column_7_price->ReadOnly = true;
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
				this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				this->toolStripLabel1->Text = "Вы успешно вышли из режима администратора";
				this->timer1->Enabled = true;
				*/
				/*
				if (zapis_new() == 1)
				{
					table_ris();
					this->администраторToolStripMenuItem->Visible = true;
					this->log_admin = false;
					this->button_save->Visible = false;
					this->выходИзРежимаАдминистраторToolStripMenuItem->Visible = false;
					this->Column_1_nomer_reysa->ReadOnly = true;
					this->Column_2_tip_samoleta->ReadOnly = true;
					this->Column_3_punkt_nazn->ReadOnly = true;
					this->Column_4_day_otp->ReadOnly = true;
					this->Column_5_vilet->ReadOnly = true;
					this->Column_6_prilet->ReadOnly = true;
					this->создатьToolStripMenuItem->Visible = false;
					this->button_create_base->Visible = false;
					this->Column_7_price->ReadOnly = true;
					System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
					this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
					this->toolStripLabel1->Text = "Вы успешно вышли из режима администратора";
					this->timer1->Enabled = true;
				}
				*/
			}
			else if (exit_izm_frm->save == '3')
			{
				table_ris();
				this->администраторToolStripMenuItem->Visible = true;
				this->log_admin = false;
				this->button_save->Visible = false;
				this->выходИзРежимаАдминистраторToolStripMenuItem->Visible = false;
				this->Column_1_nomer_reysa->ReadOnly = true;
				this->Column_2_tip_samoleta->ReadOnly = true;
				this->Column_3_punkt_nazn->ReadOnly = true;
				this->Column_4_day_otp->ReadOnly = true;
				this->Column_5_vilet->ReadOnly = true;
				this->Column_6_prilet->ReadOnly = true;
				this->создатьToolStripMenuItem->Visible = false;
				this->button_create_base->Visible = false;
				this->Column_7_price->ReadOnly = true;
				System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
				this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				this->toolStripLabel1->Text = "Вы успешно вышли из режима администратора";
				this->timer1->Enabled = true;
			}
		}
		else
		{
			table_ris();
			this->администраторToolStripMenuItem->Visible = true;
			this->log_admin = false;
			this->button_save->Visible = false;
			this->выходИзРежимаАдминистраторToolStripMenuItem->Visible = false;
			this->Column_1_nomer_reysa->ReadOnly = true;
			this->Column_2_tip_samoleta->ReadOnly = true;
			this->Column_3_punkt_nazn->ReadOnly = true;
			this->Column_4_day_otp->ReadOnly = true;
			this->Column_5_vilet->ReadOnly = true;
			this->Column_6_prilet->ReadOnly = true;
			this->создатьToolStripMenuItem->Visible = false;
			this->button_create_base->Visible = false;
			this->Column_7_price->ReadOnly = true;
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->toolStripLabel1->Text = "Вы успешно вышли из режима администратора";
			this->timer1->Enabled = true;
		}
		/*
		table_ris();
		this->администраторToolStripMenuItem->Visible = true;
		this->log_admin = false;
		this->button_save->Visible = false;
		this->выходИзРежимаАдминистраторToolStripMenuItem->Visible = false;
		//*****  *****	*****	*****	*****	*****	*****	*****
		this->Column_1_nomer_reysa->ReadOnly = true;
		this->Column_2_tip_samoleta->ReadOnly = true;
		this->Column_3_punkt_nazn->ReadOnly = true;
		this->Column_4_day_otp->ReadOnly = true;
		this->Column_5_vilet->ReadOnly = true;
		this->Column_6_prilet->ReadOnly = true;
		this->создатьToolStripMenuItem->Visible = false;
		this->button_create_base->Visible = false;
		this->Column_7_price->ReadOnly = true;
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
		this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
		this->toolStripLabel1->Text = "Вы успешно вышли из режима администратора";
		this->timer1->Enabled = true;
		*/
	}
	private: System::Void запросToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->dataGridView1->Visible == true)
		{
			zapros^ zapros_frm = gcnew zapros(file_op2, kol_vo);
			zapros_frm->Show();
		}
	}

		   //проверка индивидуальности номера рейса
	private: int check_nomer(int y)
	{
		int u, q;
		u = this->dataGridView1->RowCount - 1;
		for (q = 0; q < u; q++)
		{
			if (q != y)
			{
				if (this->dataGridView1->Rows[q]->Cells[0]->Value->ToString() == this->dataGridView1->Rows[y]->Cells[0]->Value->ToString())
				{
					this->dataGridView1->Rows[q]->Cells[0]->Style->BackColor = BackColor.Red;
					//найдено совпадение, подчеркиваем данную ячейку
					return 0;
				}
			}
		}
		return 1;
	}

		   //проверка типа самолета на состав (откидывает ";" и tab)
	private: int check_tip(int y)
	{
		int j;
		String^ tip_sam = this->dataGridView1->Rows[y]->Cells[1]->Value->ToString();
		for (j = 0; j < tip_sam->Length; j++)
		{
			if ((tip_sam[j] == ';') || (tip_sam[j] == '\t'))
			{
				this->dataGridView1->Rows[y]->Cells[1]->Style->BackColor = BackColor.Red;
				return 0;
			}
		}
		return 1;
	}

		   //проверка названия пункта назначения на состав
	private: int check_punkt(int y)
	{
		int j;
		String^ punkt_nazn = this->dataGridView1->Rows[y]->Cells[2]->Value->ToString();
		for (j = 0; j < punkt_nazn->Length; j++)
		{
			if ((punkt_nazn[j] == ';') || (punkt_nazn[j] == '\t'))
			{
				this->dataGridView1->Rows[y]->Cells[2]->Style->BackColor = BackColor.Red;
				return 0;
			}
		}
		return 1;
	}

		   //проверка дней вылета
	private: int check_day(int y)
	{
		String^ text_day = Convert::ToString(this->dataGridView1->Rows[y]->Cells[3]->Value);
		String^ text_day1;
		String^ day2;
		int f = text_day->Length;
		int j, i;
		int vsego = 0;
		for (i = 0; i < f; i++)
		{
			if (text_day[i] != ' ')
			{
				text_day1 = text_day1 + text_day[i] + " ";
			}
		}
		text_day = text_day1;
		f = text_day->Length;
		for (j = 0; j < f; j++)
		{
			int s = 0;
			if (j % 2 == 0)
			{
				if (text_day[j] > 48 && text_day[j] < 56)
				{
					s++;
					vsego++;
				}
				if (s == 0)
				{
					//все плохо, день не нашли!!!
					this->dataGridView1->Rows[y]->Cells[3]->Style->BackColor = BackColor.Red;
					return 0;
				}
			}
			else
			{
				if (text_day[j] != ' ')
				{
					this->dataGridView1->Rows[y]->Cells[3]->Style->BackColor = BackColor.Red;
					return 0;
				}
				else
				{
					vsego++;
				}
			}
		}
		if (vsego == j)		//сортировка в порядке возрастания и отброс повторов
		{
			char temp[7];
			int i;
			int bad = 0;
			int nomera[7];
			for (i = 0; i < 7; i++)
			{
				nomera[i] = i + 1;
			}
			for (i = 0; i < 7; i++)
			{
				temp[i] = ' ';
			}
			for (i = 0; i < j; i = i + 2)
			{
				temp[text_day[i] - 49] = text_day[i];
			}
			for (i = 0; i < 7; i++)
			{
				if (temp[i] != ' ')
				{
					day2 = day2 + (temp[i] - 48) + " ";
				}
			}
			this->dataGridView1->Rows[y]->Cells[3]->Value = day2;
		}
		return 1;
	}

	private: int check_vremya(int y, int u)
	{
		int good;
		String^ timing = Convert::ToString(this->dataGridView1->Rows[y]->Cells[u]->Value);
		int len = timing->Length;
		if (len == 4)
		{
			if (timing[1] == ':' && (timing[2] - 48) * 10 + (timing[3] - 48) < 60)
			{
					good++;
					this->dataGridView1->Rows[y]->Cells[u]->Value = "0" + timing[0] + ":" + timing[2] + timing[3];
			}
			else
			{
				this->dataGridView1->Rows[y]->Cells[u]->Style->BackColor = BackColor.Red;
				return 0;
			}
		}
		else if (len == 5)
		{
			if (timing[2] == ':' && ((timing[0] - 48) * 10 + (timing[1] - 48) < 24) && ((timing[3] - 48) * 10 + (timing[4] - 48) < 60))
			{
				good++;
			}
			else
			{
				this->dataGridView1->Rows[y]->Cells[u]->Style->BackColor = BackColor.Red;
				return 0;
			}
		}
		else
		{
			this->dataGridView1->Rows[y]->Cells[u]->Style->BackColor = BackColor.Red;
			return 0;
		}
		return 1;
	}

	private: int check_price(int y)
	{
		String^ price = Convert::ToString(this->dataGridView1->Rows[y]->Cells[6]->Value);
		String^ new_price;
		String^ new_price_double;
		double price_double;
		int i, j;
		for (i = 0; i < price->Length; i++)
		{
			if (i == 0 && price[i] == '0')
			{
				this->dataGridView1->Rows[y]->Cells[6]->Style->BackColor = BackColor.Red;
				return 0;
			}
			if (price[i] == '.' || price[i] == ',')
			{
				if (i == 0)
				{
					this->dataGridView1->Rows[y]->Cells[6]->Style->BackColor = BackColor.Red;
					return 0;
				}
			}
			if (price[i] == '.')	//конвертация для записи
			{
				this->dataGridView1->Rows[y]->Cells[6]->Value = "";
				for (j = 0; j < price->Length; j++)
				{
					if (j != i)
					{
						new_price = new_price + price[j];
					}
					else
					{
						new_price = new_price + ",";
					}
				}
				this->dataGridView1->Rows[y]->Cells[6]->Value = new_price;
			} 
			if (price[i] == ',')	//конвертация для double проверки
			{
				for (j = 0; j < price->Length; j++)
				{
					if (j != i)
					{
						new_price_double = new_price_double + price[j];
					}
					else
					{
						new_price_double = new_price_double + ".";
					}
				}
			}
			if ((price[i] < 48 || price[i] > 57) &&  price[i] != ',' && price[i] != '.')
			{
				this->dataGridView1->Rows[y]->Cells[6]->Style->BackColor = BackColor.Red;
				return 0;
			}
		}
		return 1;
	}
	
		   //проверка таблицы на пустые ячейки
	private: int precheck()
	{
		int u, q, t, e;
		e = 0;
		u = this->dataGridView1->RowCount - 1;
		for (q = 0; q < u; q++)
		{
			for (t = 0; t < 7; t++)
			{
				if (this->dataGridView1->Rows[q]->Cells[t]->Value == nullptr)
				{
					this->dataGridView1->Rows[q]->Cells[t]->Style->BackColor = BackColor.Red;
					e++;
				}
			}
		}
		if (e == 0)	//ошибок не найдено
		{
			return 1;
		}
		else
		{
			MessageBox::Show("Не все ячейки заполнены.\nЗаполните все ячейки перед сохранением изменений.", "Ошибка сохранения", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return 0;
		}
	}

		   //проверка общей длины строки для записи
	private: int precheck_zapis()
	{
		int i, r, j, sum, s;
		int n = 0;
		r = this->dataGridView1->RowCount - 1;
		String^ old1;
		String^ date1;

		for (i = 0; i < r; i++)
		{
			date1 = Convert::ToString(this->dataGridView1->Rows[i]->Cells[3]->Value);
			for (j = 0; j < 7; j++)
			{
				if (j == 3)
				{
					for (s = 0; s < date1->Length; s++)
					{
						if (date1[s] != ' ')
						{
							sum++;
						}
					}
				}
				else
				{
					sum = sum + Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value)->Length;
				}
			}
			if (sum > 92)
			{
				for (int v = 0; v < 7; v++)
				{
					this->dataGridView1->Rows[i]->Cells[v]->Style->BackColor = BackColor.Red;
				}
				n++;
			}
			sum = 0;
		}
		if (n == 0)
		{
			return 1;
		}
		else
		{
			MessageBox::Show("Информация не соответствует форматированию.\nИзмените пераметры рейса перед сохранением.", "Ошибка сохранения", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return 0;
		}
	}
		   //перекрашивание ячеек в серый
	private: void kraska()
    {
		int q, m;
		for (q = 0; q < (this->dataGridView1->RowCount - 1); q++)
		{
			for (m = 0; m < 7; m++)
			{
				this->dataGridView1->Rows[q]->Cells[m]->Style->BackColor = BackColor.White;
			}
		}
	}

	private: int precheck_and_zapis()
	{
		kraska();
		int q, t, e;	
		e = 0;
		this->dataGridView1->CurrentCell = this->dataGridView1[0, (this->dataGridView1->RowCount - 1)];
		for (q = 0; q < (this->dataGridView1->RowCount - 1); q++)	//проверка на пустые ячейки
		{
			for (t = 0; t < 7; t++)
			{
				if (this->dataGridView1->Rows[q]->Cells[t]->Value == nullptr)
				{
					//пустая ячейка подсвечивается красным
					this->dataGridView1->Rows[q]->Cells[t]->Style->BackColor = BackColor.Red;
					e++;	
				}
			}
		}
		if (e == 0)		//все ячейки заполнены
		{
			kraska();

			int individ[7], o, r;
			t = 0;
			o = 0;
			//if (precheck() == 1)
			{
				for (r = 0; r < (this->dataGridView1->RowCount - 1); r++)	//предпроверка всех ячеек на правильность ввода данных
				{
					int i, good;
					good = 0;
					individ[0] = check_nomer(r); //проверка индивидуальность номера рейса
					individ[1] = check_tip(r);	//проверка типа самолета
					individ[2] = check_punkt(r);	//проверка пункта назначения (неверные символы)
					individ[3] = check_day(r);
					individ[4] = check_vremya(r, 4);
					individ[5] = check_vremya(r, 5);
					individ[6] = check_price(r);
					for (i = 0; i < 7; i++)
					{
						if (individ[i] == 1)
						{
							good++;
						}
					}
					if (good == 7)	//строка удовлетворяет всем правилам форматирования
					{
						o++;
					}
					else
					{
						if (t == 0)
						{
							MessageBox::Show("Не все значения ячеек удовлетворяют условиям.\nЗаполните все ячейки перед сохранением изменений.", "Ошибка сохранения", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						}
						t++;
					}
				}
				if (o == (this->dataGridView1->RowCount - 1))	//все ячейки правильно заполнены, можно проверять длину строки
				{
					//проверки длины элементов всех ячеек
					int i, j, sum, s;
					int n = 0;
					String^ old1;
					String^ date1;
					for (i = 0; i < (this->dataGridView1->RowCount - 1); i++)
					{
						date1 = Convert::ToString(this->dataGridView1->Rows[i]->Cells[3]->Value);
						for (j = 0; j < 7; j++)
						{
							if (j == 3)
							{
								for (s = 0; s < date1->Length; s++)
								{
									if (date1[s] != ' ')
									{
										sum++;
									}
								}
							}
							else
							{
								sum = sum + Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value)->Length;
							}
						}
						if (sum > 92)
						{
							for (int v = 0; v < 7; v++)
							{	//выделение строки красным
								this->dataGridView1->Rows[i]->Cells[v]->Style->BackColor = BackColor.Red;
							}
							n++;
						}
						sum = 0;
					}
					if (n == 0)	//сумма всех строк укладывается в форматирование, происходит запись в файл
					{
						this->toolStripLabel1->Text = "Запись в файл";
						this->timer1->Enabled = true;

						int i, j, sum, s;
						String^ old1;
						String^ date1;
						StreamWriter^ sw1 = gcnew StreamWriter(file_op1, false, System::Text::Encoding::GetEncoding(1251));
						for (i = 0; i < (this->dataGridView1->RowCount - 1); i++)
						{
							old1 = Convert::ToString(this->dataGridView1->Rows[i]->Cells[0]->Value);
							for (j = 1; j < 7; j++)
							{
								if (j == 3)
								{
									old1 = old1 + ";";
									date1 = Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value);
									for (s = 0; s < date1->Length; s++)
									{
										if (date1[s] != ' ')
										{
											old1 = old1 + date1[s];
										}
									}
								}
								else
								{
									old1 = old1 + ";" + Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value);
								}
							}
							for (j = 0; j < 7; j++)
							{
								if (j == 3)
								{
									for (s = 0; s < date1->Length; s++)
									{
										if (date1[s] != ' ')
										{
											sum++;
										}
									}
								}
								else
								{
									sum = sum + Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value)->Length;
								}
							}
							old1 = old1 + ";";
							for (j = 0; j + sum < 93; j++)
							{
								old1 = old1 + " ";
							}
							if (i + 1 != (this->dataGridView1->RowCount - 1))
							{
								sw1->WriteLine(old1);
							}
							else
							{
								sw1->Write(old1);
							}
							sum = 0;
						}
						sw1->Close();
						this->toolStripLabel1->Text = "Изменения успешно записаны.";
						izm = 0;
					}
					else
					{
						MessageBox::Show("Информация не соответствует форматированию.\nИзмените пераметры рейса перед сохранением.", "Ошибка сохранения", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}
				}
			}
		}
		else
		{
		MessageBox::Show("Не все ячейки заполнены.\nЗаполните все ячейки перед сохранением изменений.", "Ошибка сохранения", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		/*
		if (e == 0)	//ошибок не найдено
		{
			//проверка ячеек
			//return 1;

			int m, r;
			
			for (q = 0; q < u; q++)	//перекрашивание ячеек из красного в серый
			{
				for (m = 0; m < 7; m++)
				{
					this->dataGridView1->Rows[q]->Cells[m]->Style->BackColor = BackColor.White;
				}
			}

			int individ[7], o;
			t = 0;
			o = 0;
			if (precheck() == 1)
			{
				for (r = 0; r < u; r++)	//предпроверка всех ячеек на правильность ввода данных
				{
					//1 - хорошо
					//0 - плохо
					int i, good;
					good = 0;
					individ[0] = check_nomer(r); //проверка индивидуальность номера рейса
					individ[1] = check_tip(r);	//проверка типа самолета
					individ[2] = check_punkt(r);	//проверка пункта назначения (неверные символы)
					individ[3] = check_day(r);
					individ[4] = check_vremya(r, 4);
					individ[5] = check_vremya(r, 5);
					individ[6] = check_price(r);
					for (i = 0; i < 7; i++)
					{
						if (individ[i] == 1)
						{
							good++;
						}
					}
					if (good == 7)
					{
						o++;
					}
					else
					{
						if (t == 0)
						{
							MessageBox::Show("Не все значения ячеек удовлетворяют условиям.\nЗаполните все ячейки перед сохранением изменений.", "Ошибка сохранения", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						}
						t++;
						u = -1;
					}
				}
				if (o == u)
				{
					//проверки длины элементов всех ячеек
					int i, j, sum, s;
					int n = 0;
					String^ old1;
					String^ date1;
					for (i = 0; i < u; i++)
					{
						date1 = Convert::ToString(this->dataGridView1->Rows[i]->Cells[3]->Value);
						for (j = 0; j < 7; j++)
						{
							if (j == 3)
							{
								for (s = 0; s < date1->Length; s++)
								{
									if (date1[s] != ' ')
									{
										sum++;
									}
								}
							}
							else
							{
								sum = sum + Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value)->Length;
							}
						}
						if (sum > 92)
						{
							for (int v = 0; v < 7; v++)
							{
								this->dataGridView1->Rows[i]->Cells[v]->Style->BackColor = BackColor.Red;
							}
							n++;
						}
						sum = 0;
					}
					if (n == 0)
					{
						//запись в файл
						this->toolStripLabel1->Text = "Запись в файл";
						this->timer1->Enabled = true;

						int i, j, sum, s;
						String^ old1;
						String^ date1;
						StreamWriter^ sw1 = gcnew StreamWriter(file_op1, false, System::Text::Encoding::GetEncoding(1251));
						for (i = 0; i < u; i++)
						{
							old1 = Convert::ToString(this->dataGridView1->Rows[i]->Cells[0]->Value);
							for (j = 1; j < 7; j++)
							{
								if (j == 3)
								{
									old1 = old1 + ";";
									date1 = Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value);
									for (s = 0; s < date1->Length; s++)
									{
										if (date1[s] != ' ')
										{
											old1 = old1 + date1[s];
										}
									}
								}
								else
								{
									old1 = old1 + ";" + Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value);
								}
							}
							for (j = 0; j < 7; j++)
							{
								if (j == 3)
								{
									for (s = 0; s < date1->Length; s++)
									{
										if (date1[s] != ' ')
										{
											sum++;
										}
									}
								}
								else
								{
									sum = sum + Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value)->Length;
								}
							}
							old1 = old1 + ";";
							for (j = 0; j + sum < 93; j++)
							{
								old1 = old1 + " ";
							}
							if (i + 1 != u)
							{
								sw1->WriteLine(old1);
							}
							else
							{
								sw1->Write(old1);
							}
							sum = 0;
						}
						sw1->Close();
						this->toolStripLabel1->Text = "Изменения успешно записаны.";
						izm = 0;


						//запись в файл
						//return 1;
					}
					else
					{
						MessageBox::Show("Информация не соответствует форматированию.\nИзмените пераметры рейса перед сохранением.", "Ошибка сохранения", MessageBoxButtons::OK, MessageBoxIcon::Warning);
						return 0;
					}


					/*
					this->toolStripLabel1->Text = "Запись в файл";
					this->timer1->Enabled = true;
					zapis_new();
				}

			}


		}
		else
		{
			MessageBox::Show("Не все ячейки заполнены.\nЗаполните все ячейки перед сохранением изменений.", "Ошибка сохранения", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return 0;
		}*/
return 0;
	}

	private: int zapis_new()
	{
		if (precheck_zapis() == 1)	///предпроверка ячеек на итоговую длину
		{
			int i, r, j, sum, s;
			r = this->dataGridView1->RowCount - 1;
			String^ old1;
			String^ date1;
			StreamWriter^ sw1 = gcnew StreamWriter(file_op1, false, System::Text::Encoding::GetEncoding(1251));
			for (i = 0; i < r; i++)
			{
				old1 = Convert::ToString(this->dataGridView1->Rows[i]->Cells[0]->Value);
				for (j = 1; j < 7; j++)
				{
					if (j == 3)
					{
						old1 = old1 + ";";
						date1 = Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value);
						for (s = 0; s < date1->Length; s++)
						{
							if (date1[s] != ' ')
							{
								old1 = old1 + date1[s];
							}
						}
					}
					else
					{
						old1 = old1 + ";" + Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value);
					}
				}
				for (j = 0; j < 7; j++)
				{
					if (j == 3)
					{
						for (s = 0; s < date1->Length; s++)
						{
							if (date1[s] != ' ')
							{
								sum++;
							}
						}
					}
					else
					{
						sum = sum + Convert::ToString(this->dataGridView1->Rows[i]->Cells[j]->Value)->Length;
					}
				}
				old1 = old1 + ";";
				for (j = 0; j + sum < 93; j++)
				{
					old1 = old1 + " ";
				}
				if (i + 1 != r)
				{
					sw1->WriteLine(old1);
				}
				else
				{
					sw1->Write(old1);
				}
				sum = 0;
			}
			sw1->Close();
			this->toolStripLabel1->Text = "Изменения успешно записаны.";
			izm = 0;
			return 1;
		}
		return 0;
	}
	

	private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e) {
		int u, q, m, r;
		u = this->dataGridView1->RowCount - 1;
		for (q = 0; q < u; q++)
		{
			for (m = 0; m < 7; m++)
			{
				this->dataGridView1->Rows[q]->Cells[m]->Style->BackColor = BackColor.White;
			}
		}
		
		
		int individ[7], t, o;
		t = 0;
		o = 0;
		if (precheck() == 1)
		{
			for (r = 0; r < u; r++)	//предпроверка всех ячеек на правильность ввода данных
			{
				//1 - хорошо
				//0 - плохо
				int i, good;
				good = 0;
				individ[0] = check_nomer(r); //проверка индивидуальность номера рейса
				individ[1] = check_tip(r);	//проверка типа самолета
				individ[2] = check_punkt(r);	//проверка пункта назначения (неверные символы)
				individ[3] = check_day(r);
				individ[4] = check_vremya(r, 4);
				individ[5] = check_vremya(r, 5);
				individ[6] = check_price(r);
				for (i = 0; i < 7; i++)
				{
					if (individ[i] == 1)
					{
						good++;
					}
				}
				if (good == 7)
				{
					o++;
				}
				else
				{ 
					if (t == 0)
					{
						MessageBox::Show("Не все значения ячеек удовлетворяют условиям.\nЗаполните все ячейки перед сохранением изменений.", "Ошибка сохранения", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					}
					t++;
					u = -1;
				}
			}
			if (o == u)
			{
				this->toolStripLabel1->Text = "Запись в файл";
				this->timer1->Enabled = true;
				zapis_new();
			}
			
		}
	}

	private: System::Void игратьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		game^ game_frm = gcnew game();
		game_frm->Show();
	}

	private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		SaveFileDialog^ saveDlg = gcnew SaveFileDialog();
		saveDlg->InitialDirectory = "c:\\";
		saveDlg->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		if (System::Windows::Forms::DialogResult::OK == saveDlg->ShowDialog())
		{
			String^ fileName = saveDlg->FileName;
			std::string unmanaged = msclr::interop::marshal_as<std::string>(fileName);
			this->toolStripLabel2->Text = "Base: " + fileName;
			char* cstr = new char[unmanaged.length() + 1];
			if (fileName != "")
			{
				file_op1 = fileName;
				file_op2 = cstr;
				StreamWriter^ file = gcnew StreamWriter(file_op1, false, System::Text::Encoding::GetEncoding(1251));
				file->Close();
				this->button_create_base->Text = "Файл успешно создан.";
				this->timer1->Enabled = true;
				this->dataGridView1->Visible = true;
				//запись всех данных в новый файл
				zapis_new();
			}
		}
	}

	private: System::Void выходToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		//подтверждение выхода
		if (izm != 0)
		{
			exit_izm^ exit_izm_frm = gcnew exit_izm();
			exit_izm_frm->ShowDialog();
			if (exit_izm_frm->save == '1')
			{
				if (zapis_new() == 1)
				{
					this->Close();
				}
			}
			else if (exit_izm_frm->save == '3')
			{
				Application::Exit();
			}

		}
		else
		{
			this->Close();
		}
	}

		   //внесения изменений в таблицу
	private: System::Void dataGridView1_CellStateChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellStateChangedEventArgs^ e) {
		izm++;
	}

	private: System::Void выходToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (izm != 0)
		{
			exit_izm^ exit_izm_frm = gcnew exit_izm();
			exit_izm_frm->ShowDialog();
			//есть несохраненные изменения!!!
			if (exit_izm_frm->save == '1')
			{
				if (zapis_new() == 1)
				{
					this->Close();
				}
			}
		}
		else
		{
			this->Close();
		}
	}

	private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//выпадает форма справка
		spravka_main^ spravka_main_frm = gcnew spravka_main();
		spravka_main_frm->Show();
	}
};
}
