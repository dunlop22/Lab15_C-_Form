#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class zapros : public System::Windows::Forms::Form
	{
	public:
		zapros(char* file_op, int kol_vo)
		{
			InitializeComponent();
			this->file_op = file_op;	//название и путь в БД
			this->kol_vo = kol_vo;		//общее кол-во записей в БД
		}
		char* file_op;		//название и путь в БД
		int polya_zap;		//заполненных параметров для запроса
		int kol_vo;			//количество записей в БД
		Boolean open = false;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::CheckBox^ checkBox_nomer_reysa;
	private: System::Windows::Forms::CheckBox^ checkBox_tip_sam;
	private: System::Windows::Forms::CheckBox^ checkBox_punkt_nazn;
	private: System::Windows::Forms::CheckBox^ checkBox_day_otp;
	private: System::Windows::Forms::CheckBox^ checkBox_vremya_vileta;
	private: System::Windows::Forms::CheckBox^ checkBox_vremya_prileta;
	private: System::Windows::Forms::CheckBox^ checkBox_price_bilet;
	private: System::Windows::Forms::TextBox^ textBox_nomer_reysa;
	private: System::Windows::Forms::TextBox^ textBox_tip_sam;
	private: System::Windows::Forms::TextBox^ textBox_punkt_nazn;
	private: System::Windows::Forms::TextBox^ textBox_day_otp;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_vremya_vileta;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox_vremya_prileta;
	private: System::Windows::Forms::TextBox^ textBox_price_bilet;
	private: System::Windows::Forms::CheckBox^ checkBox_vilet_ranshe;
	private: System::Windows::Forms::CheckBox^ checkBox_vilet_poshe;
	private: System::Windows::Forms::CheckBox^ checkBox_vilet_rovno;
	private: System::Windows::Forms::CheckBox^ checkBox_prilet_ranshe;
	private: System::Windows::Forms::CheckBox^ checkBox_prilet_poshe;
	private: System::Windows::Forms::CheckBox^ checkBox_prilet_rovno;
	private: System::Windows::Forms::CheckBox^ checkBox_price_menshe;
	private: System::Windows::Forms::CheckBox^ checkBox_price_bolshe;
	private: System::Windows::Forms::CheckBox^ checkBox_price_rovno;
	private: System::Windows::Forms::CheckBox^ checkBox_iskl_nomer_reysa;
	private: System::Windows::Forms::CheckBox^ checkBox_iskl_tip_sam;
	private: System::Windows::Forms::CheckBox^ checkBox_iskl_punkt_nazn;
	private: System::Windows::Forms::CheckBox^ checkBox_iskl_day_otp;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_1_nomer_reysa;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_2_tip_sam;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_3_punkt_nazn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_4_day_otp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_5_vremya_vilet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_6_vremya_prilet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column_7_price_bilet;
	private: System::Windows::Forms::Button^ button_new_zapros;
	private: System::Windows::Forms::Button^ button_reset_param;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button_create_zapros;

	public:

	protected:
		~zapros()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(zapros::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox_nomer_reysa = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_tip_sam = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_punkt_nazn = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_day_otp = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_vremya_vileta = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_vremya_prileta = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_price_bilet = (gcnew System::Windows::Forms::CheckBox());
			this->textBox_nomer_reysa = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tip_sam = (gcnew System::Windows::Forms::TextBox());
			this->textBox_punkt_nazn = (gcnew System::Windows::Forms::TextBox());
			this->textBox_day_otp = (gcnew System::Windows::Forms::TextBox());
			this->maskedTextBox_vremya_vileta = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox_vremya_prileta = (gcnew System::Windows::Forms::MaskedTextBox());
			this->textBox_price_bilet = (gcnew System::Windows::Forms::TextBox());
			this->button_create_zapros = (gcnew System::Windows::Forms::Button());
			this->checkBox_vilet_ranshe = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_vilet_poshe = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_vilet_rovno = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_prilet_ranshe = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_prilet_poshe = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_prilet_rovno = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_price_menshe = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_price_bolshe = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_price_rovno = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_iskl_nomer_reysa = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_iskl_tip_sam = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_iskl_punkt_nazn = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_iskl_day_otp = (gcnew System::Windows::Forms::CheckBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column_1_nomer_reysa = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_2_tip_sam = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_3_punkt_nazn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_4_day_otp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_5_vremya_vilet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_6_vremya_prilet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_7_price_bilet = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button_new_zapros = (gcnew System::Windows::Forms::Button());
			this->button_reset_param = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(386, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(318, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Для запроса выберите и заполните параметры";
			// 
			// checkBox_nomer_reysa
			// 
			this->checkBox_nomer_reysa->AutoSize = true;
			this->checkBox_nomer_reysa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_nomer_reysa->Location = System::Drawing::Point(318, 159);
			this->checkBox_nomer_reysa->Name = L"checkBox_nomer_reysa";
			this->checkBox_nomer_reysa->Size = System::Drawing::Size(112, 20);
			this->checkBox_nomer_reysa->TabIndex = 1;
			this->checkBox_nomer_reysa->Text = L"Номер рейса";
			this->checkBox_nomer_reysa->UseVisualStyleBackColor = true;
			this->checkBox_nomer_reysa->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_nomer_reysa_CheckedChanged);
			// 
			// checkBox_tip_sam
			// 
			this->checkBox_tip_sam->AutoSize = true;
			this->checkBox_tip_sam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_tip_sam->Location = System::Drawing::Point(318, 213);
			this->checkBox_tip_sam->Name = L"checkBox_tip_sam";
			this->checkBox_tip_sam->Size = System::Drawing::Size(118, 20);
			this->checkBox_tip_sam->TabIndex = 2;
			this->checkBox_tip_sam->Text = L"Тип самолета";
			this->checkBox_tip_sam->UseVisualStyleBackColor = true;
			this->checkBox_tip_sam->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_tip_sam_CheckedChanged);
			// 
			// checkBox_punkt_nazn
			// 
			this->checkBox_punkt_nazn->AutoSize = true;
			this->checkBox_punkt_nazn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_punkt_nazn->Location = System::Drawing::Point(318, 267);
			this->checkBox_punkt_nazn->Name = L"checkBox_punkt_nazn";
			this->checkBox_punkt_nazn->Size = System::Drawing::Size(149, 20);
			this->checkBox_punkt_nazn->TabIndex = 3;
			this->checkBox_punkt_nazn->Text = L"Пункт назначения";
			this->checkBox_punkt_nazn->UseVisualStyleBackColor = true;
			this->checkBox_punkt_nazn->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_punkt_nazn_CheckedChanged);
			// 
			// checkBox_day_otp
			// 
			this->checkBox_day_otp->AutoSize = true;
			this->checkBox_day_otp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_day_otp->Location = System::Drawing::Point(318, 325);
			this->checkBox_day_otp->Name = L"checkBox_day_otp";
			this->checkBox_day_otp->Size = System::Drawing::Size(141, 20);
			this->checkBox_day_otp->TabIndex = 4;
			this->checkBox_day_otp->Text = L"Дни отправления";
			this->checkBox_day_otp->UseVisualStyleBackColor = true;
			this->checkBox_day_otp->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_day_otp_CheckedChanged);
			// 
			// checkBox_vremya_vileta
			// 
			this->checkBox_vremya_vileta->AutoSize = true;
			this->checkBox_vremya_vileta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_vremya_vileta->Location = System::Drawing::Point(318, 390);
			this->checkBox_vremya_vileta->Name = L"checkBox_vremya_vileta";
			this->checkBox_vremya_vileta->Size = System::Drawing::Size(119, 20);
			this->checkBox_vremya_vileta->TabIndex = 5;
			this->checkBox_vremya_vileta->Text = L"Время вылета";
			this->checkBox_vremya_vileta->UseVisualStyleBackColor = true;
			this->checkBox_vremya_vileta->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_vremya_vileta_CheckedChanged);
			// 
			// checkBox_vremya_prileta
			// 
			this->checkBox_vremya_prileta->AutoSize = true;
			this->checkBox_vremya_prileta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_vremya_prileta->Location = System::Drawing::Point(318, 508);
			this->checkBox_vremya_prileta->Name = L"checkBox_vremya_prileta";
			this->checkBox_vremya_prileta->Size = System::Drawing::Size(126, 20);
			this->checkBox_vremya_prileta->TabIndex = 6;
			this->checkBox_vremya_prileta->Text = L"Время прилета";
			this->checkBox_vremya_prileta->UseVisualStyleBackColor = true;
			this->checkBox_vremya_prileta->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_vremya_prileta_CheckedChanged);
			// 
			// checkBox_price_bilet
			// 
			this->checkBox_price_bilet->AutoSize = true;
			this->checkBox_price_bilet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_price_bilet->Location = System::Drawing::Point(318, 643);
			this->checkBox_price_bilet->Name = L"checkBox_price_bilet";
			this->checkBox_price_bilet->Size = System::Drawing::Size(110, 20);
			this->checkBox_price_bilet->TabIndex = 7;
			this->checkBox_price_bilet->Text = L"Цена билета";
			this->checkBox_price_bilet->UseVisualStyleBackColor = true;
			this->checkBox_price_bilet->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_price_bilet_CheckedChanged);
			// 
			// textBox_nomer_reysa
			// 
			this->textBox_nomer_reysa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->textBox_nomer_reysa->Location = System::Drawing::Point(633, 157);
			this->textBox_nomer_reysa->Name = L"textBox_nomer_reysa";
			this->textBox_nomer_reysa->Size = System::Drawing::Size(116, 21);
			this->textBox_nomer_reysa->TabIndex = 8;
			this->textBox_nomer_reysa->Visible = false;
			this->textBox_nomer_reysa->TextChanged += gcnew System::EventHandler(this, &zapros::textBox_nomer_reysa_TextChanged);
			// 
			// textBox_tip_sam
			// 
			this->textBox_tip_sam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->textBox_tip_sam->Location = System::Drawing::Point(633, 211);
			this->textBox_tip_sam->Name = L"textBox_tip_sam";
			this->textBox_tip_sam->Size = System::Drawing::Size(116, 21);
			this->textBox_tip_sam->TabIndex = 9;
			this->textBox_tip_sam->Visible = false;
			this->textBox_tip_sam->TextChanged += gcnew System::EventHandler(this, &zapros::textBox_tip_sam_TextChanged);
			// 
			// textBox_punkt_nazn
			// 
			this->textBox_punkt_nazn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->textBox_punkt_nazn->Location = System::Drawing::Point(633, 264);
			this->textBox_punkt_nazn->Name = L"textBox_punkt_nazn";
			this->textBox_punkt_nazn->Size = System::Drawing::Size(116, 21);
			this->textBox_punkt_nazn->TabIndex = 10;
			this->textBox_punkt_nazn->Visible = false;
			this->textBox_punkt_nazn->TextChanged += gcnew System::EventHandler(this, &zapros::textBox_punkt_nazn_TextChanged);
			// 
			// textBox_day_otp
			// 
			this->textBox_day_otp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->textBox_day_otp->Location = System::Drawing::Point(633, 323);
			this->textBox_day_otp->Name = L"textBox_day_otp";
			this->textBox_day_otp->Size = System::Drawing::Size(116, 21);
			this->textBox_day_otp->TabIndex = 11;
			this->textBox_day_otp->Visible = false;
			this->textBox_day_otp->TextChanged += gcnew System::EventHandler(this, &zapros::textBox_day_otp_TextChanged);
			// 
			// maskedTextBox_vremya_vileta
			// 
			this->maskedTextBox_vremya_vileta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->maskedTextBox_vremya_vileta->Location = System::Drawing::Point(633, 440);
			this->maskedTextBox_vremya_vileta->Mask = L"00:00";
			this->maskedTextBox_vremya_vileta->Name = L"maskedTextBox_vremya_vileta";
			this->maskedTextBox_vremya_vileta->Size = System::Drawing::Size(116, 21);
			this->maskedTextBox_vremya_vileta->TabIndex = 12;
			this->maskedTextBox_vremya_vileta->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox_vremya_vileta->Visible = false;
			this->maskedTextBox_vremya_vileta->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &zapros::maskedTextBox_vremya_vileta_MaskInputRejected);
			// 
			// maskedTextBox_vremya_prileta
			// 
			this->maskedTextBox_vremya_prileta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->maskedTextBox_vremya_prileta->Location = System::Drawing::Point(633, 552);
			this->maskedTextBox_vremya_prileta->Mask = L"00:00";
			this->maskedTextBox_vremya_prileta->Name = L"maskedTextBox_vremya_prileta";
			this->maskedTextBox_vremya_prileta->Size = System::Drawing::Size(116, 21);
			this->maskedTextBox_vremya_prileta->TabIndex = 13;
			this->maskedTextBox_vremya_prileta->ValidatingType = System::DateTime::typeid;
			this->maskedTextBox_vremya_prileta->Visible = false;
			this->maskedTextBox_vremya_prileta->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &zapros::maskedTextBox_vremya_prileta_MaskInputRejected);
			// 
			// textBox_price_bilet
			// 
			this->textBox_price_bilet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->textBox_price_bilet->Location = System::Drawing::Point(633, 695);
			this->textBox_price_bilet->Name = L"textBox_price_bilet";
			this->textBox_price_bilet->Size = System::Drawing::Size(116, 21);
			this->textBox_price_bilet->TabIndex = 14;
			this->textBox_price_bilet->Visible = false;
			this->textBox_price_bilet->TextChanged += gcnew System::EventHandler(this, &zapros::textBox_price_bilet_TextChanged);
			// 
			// button_create_zapros
			// 
			this->button_create_zapros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_create_zapros->Location = System::Drawing::Point(750, 744);
			this->button_create_zapros->Name = L"button_create_zapros";
			this->button_create_zapros->Size = System::Drawing::Size(224, 27);
			this->button_create_zapros->TabIndex = 15;
			this->button_create_zapros->Text = L"Создать запрос";
			this->button_create_zapros->UseVisualStyleBackColor = true;
			this->button_create_zapros->Click += gcnew System::EventHandler(this, &zapros::button_create_zapros_Click);
			// 
			// checkBox_vilet_ranshe
			// 
			this->checkBox_vilet_ranshe->AutoSize = true;
			this->checkBox_vilet_ranshe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_vilet_ranshe->Location = System::Drawing::Point(507, 390);
			this->checkBox_vilet_ranshe->Name = L"checkBox_vilet_ranshe";
			this->checkBox_vilet_ranshe->Size = System::Drawing::Size(76, 20);
			this->checkBox_vilet_ranshe->TabIndex = 16;
			this->checkBox_vilet_ranshe->Text = L"Раньше";
			this->checkBox_vilet_ranshe->UseVisualStyleBackColor = true;
			this->checkBox_vilet_ranshe->Visible = false;
			this->checkBox_vilet_ranshe->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_vilet_ranshe_CheckedChanged);
			// 
			// checkBox_vilet_poshe
			// 
			this->checkBox_vilet_poshe->AutoSize = true;
			this->checkBox_vilet_poshe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_vilet_poshe->Location = System::Drawing::Point(633, 390);
			this->checkBox_vilet_poshe->Name = L"checkBox_vilet_poshe";
			this->checkBox_vilet_poshe->Size = System::Drawing::Size(70, 20);
			this->checkBox_vilet_poshe->TabIndex = 17;
			this->checkBox_vilet_poshe->Text = L"Позже";
			this->checkBox_vilet_poshe->UseVisualStyleBackColor = true;
			this->checkBox_vilet_poshe->Visible = false;
			this->checkBox_vilet_poshe->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_vilet_poshe_CheckedChanged);
			// 
			// checkBox_vilet_rovno
			// 
			this->checkBox_vilet_rovno->AutoSize = true;
			this->checkBox_vilet_rovno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_vilet_rovno->Location = System::Drawing::Point(507, 442);
			this->checkBox_vilet_rovno->Name = L"checkBox_vilet_rovno";
			this->checkBox_vilet_rovno->Size = System::Drawing::Size(68, 20);
			this->checkBox_vilet_rovno->TabIndex = 18;
			this->checkBox_vilet_rovno->Text = L"Ровно";
			this->checkBox_vilet_rovno->UseVisualStyleBackColor = true;
			this->checkBox_vilet_rovno->Visible = false;
			this->checkBox_vilet_rovno->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_vilet_rovno_CheckedChanged);
			// 
			// checkBox_prilet_ranshe
			// 
			this->checkBox_prilet_ranshe->AutoSize = true;
			this->checkBox_prilet_ranshe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_prilet_ranshe->Location = System::Drawing::Point(507, 508);
			this->checkBox_prilet_ranshe->Name = L"checkBox_prilet_ranshe";
			this->checkBox_prilet_ranshe->Size = System::Drawing::Size(76, 20);
			this->checkBox_prilet_ranshe->TabIndex = 19;
			this->checkBox_prilet_ranshe->Text = L"Раньше";
			this->checkBox_prilet_ranshe->UseVisualStyleBackColor = true;
			this->checkBox_prilet_ranshe->Visible = false;
			this->checkBox_prilet_ranshe->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_prilet_ranshe_CheckedChanged);
			// 
			// checkBox_prilet_poshe
			// 
			this->checkBox_prilet_poshe->AutoSize = true;
			this->checkBox_prilet_poshe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_prilet_poshe->Location = System::Drawing::Point(633, 508);
			this->checkBox_prilet_poshe->Name = L"checkBox_prilet_poshe";
			this->checkBox_prilet_poshe->Size = System::Drawing::Size(70, 20);
			this->checkBox_prilet_poshe->TabIndex = 20;
			this->checkBox_prilet_poshe->Text = L"Позже";
			this->checkBox_prilet_poshe->UseVisualStyleBackColor = true;
			this->checkBox_prilet_poshe->Visible = false;
			this->checkBox_prilet_poshe->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_prilet_poshe_CheckedChanged);
			// 
			// checkBox_prilet_rovno
			// 
			this->checkBox_prilet_rovno->AutoSize = true;
			this->checkBox_prilet_rovno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_prilet_rovno->Location = System::Drawing::Point(507, 554);
			this->checkBox_prilet_rovno->Name = L"checkBox_prilet_rovno";
			this->checkBox_prilet_rovno->Size = System::Drawing::Size(68, 20);
			this->checkBox_prilet_rovno->TabIndex = 21;
			this->checkBox_prilet_rovno->Text = L"Ровно";
			this->checkBox_prilet_rovno->UseVisualStyleBackColor = true;
			this->checkBox_prilet_rovno->Visible = false;
			this->checkBox_prilet_rovno->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_prilet_rovno_CheckedChanged);
			// 
			// checkBox_price_menshe
			// 
			this->checkBox_price_menshe->AutoSize = true;
			this->checkBox_price_menshe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_price_menshe->Location = System::Drawing::Point(507, 643);
			this->checkBox_price_menshe->Name = L"checkBox_price_menshe";
			this->checkBox_price_menshe->Size = System::Drawing::Size(78, 20);
			this->checkBox_price_menshe->TabIndex = 22;
			this->checkBox_price_menshe->Text = L"Меньше";
			this->checkBox_price_menshe->UseVisualStyleBackColor = true;
			this->checkBox_price_menshe->Visible = false;
			this->checkBox_price_menshe->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_price_menshe_CheckedChanged);
			// 
			// checkBox_price_bolshe
			// 
			this->checkBox_price_bolshe->AutoSize = true;
			this->checkBox_price_bolshe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_price_bolshe->Location = System::Drawing::Point(633, 643);
			this->checkBox_price_bolshe->Name = L"checkBox_price_bolshe";
			this->checkBox_price_bolshe->Size = System::Drawing::Size(76, 20);
			this->checkBox_price_bolshe->TabIndex = 23;
			this->checkBox_price_bolshe->Text = L"Больше";
			this->checkBox_price_bolshe->UseVisualStyleBackColor = true;
			this->checkBox_price_bolshe->Visible = false;
			this->checkBox_price_bolshe->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_price_bolshe_CheckedChanged);
			// 
			// checkBox_price_rovno
			// 
			this->checkBox_price_rovno->AutoSize = true;
			this->checkBox_price_rovno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_price_rovno->Location = System::Drawing::Point(507, 697);
			this->checkBox_price_rovno->Name = L"checkBox_price_rovno";
			this->checkBox_price_rovno->Size = System::Drawing::Size(68, 20);
			this->checkBox_price_rovno->TabIndex = 24;
			this->checkBox_price_rovno->Text = L"Ровно";
			this->checkBox_price_rovno->UseVisualStyleBackColor = true;
			this->checkBox_price_rovno->Visible = false;
			this->checkBox_price_rovno->CheckedChanged += gcnew System::EventHandler(this, &zapros::checkBox_price_rovno_CheckedChanged);
			// 
			// checkBox_iskl_nomer_reysa
			// 
			this->checkBox_iskl_nomer_reysa->AutoSize = true;
			this->checkBox_iskl_nomer_reysa->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_iskl_nomer_reysa->Location = System::Drawing::Point(507, 159);
			this->checkBox_iskl_nomer_reysa->Name = L"checkBox_iskl_nomer_reysa";
			this->checkBox_iskl_nomer_reysa->Size = System::Drawing::Size(62, 20);
			this->checkBox_iskl_nomer_reysa->TabIndex = 25;
			this->checkBox_iskl_nomer_reysa->Text = L"Искл.";
			this->checkBox_iskl_nomer_reysa->UseVisualStyleBackColor = true;
			this->checkBox_iskl_nomer_reysa->Visible = false;
			// 
			// checkBox_iskl_tip_sam
			// 
			this->checkBox_iskl_tip_sam->AutoSize = true;
			this->checkBox_iskl_tip_sam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_iskl_tip_sam->Location = System::Drawing::Point(507, 213);
			this->checkBox_iskl_tip_sam->Name = L"checkBox_iskl_tip_sam";
			this->checkBox_iskl_tip_sam->Size = System::Drawing::Size(62, 20);
			this->checkBox_iskl_tip_sam->TabIndex = 26;
			this->checkBox_iskl_tip_sam->Text = L"Искл.";
			this->checkBox_iskl_tip_sam->UseVisualStyleBackColor = true;
			this->checkBox_iskl_tip_sam->Visible = false;
			// 
			// checkBox_iskl_punkt_nazn
			// 
			this->checkBox_iskl_punkt_nazn->AutoSize = true;
			this->checkBox_iskl_punkt_nazn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_iskl_punkt_nazn->Location = System::Drawing::Point(507, 267);
			this->checkBox_iskl_punkt_nazn->Name = L"checkBox_iskl_punkt_nazn";
			this->checkBox_iskl_punkt_nazn->Size = System::Drawing::Size(62, 20);
			this->checkBox_iskl_punkt_nazn->TabIndex = 27;
			this->checkBox_iskl_punkt_nazn->Text = L"Искл.";
			this->checkBox_iskl_punkt_nazn->UseVisualStyleBackColor = true;
			this->checkBox_iskl_punkt_nazn->Visible = false;
			// 
			// checkBox_iskl_day_otp
			// 
			this->checkBox_iskl_day_otp->AutoSize = true;
			this->checkBox_iskl_day_otp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->checkBox_iskl_day_otp->Location = System::Drawing::Point(507, 325);
			this->checkBox_iskl_day_otp->Name = L"checkBox_iskl_day_otp";
			this->checkBox_iskl_day_otp->Size = System::Drawing::Size(62, 20);
			this->checkBox_iskl_day_otp->TabIndex = 28;
			this->checkBox_iskl_day_otp->Text = L"Искл.";
			this->checkBox_iskl_day_otp->UseVisualStyleBackColor = true;
			this->checkBox_iskl_day_otp->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column_1_nomer_reysa,
					this->Column_2_tip_sam, this->Column_3_punkt_nazn, this->Column_4_day_otp, this->Column_5_vremya_vilet, this->Column_6_vremya_prilet,
					this->Column_7_price_bilet
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(916, 645);
			this->dataGridView1->TabIndex = 29;
			this->dataGridView1->Visible = false;
			// 
			// Column_1_nomer_reysa
			// 
			this->Column_1_nomer_reysa->HeaderText = L"Номер рейса";
			this->Column_1_nomer_reysa->Name = L"Column_1_nomer_reysa";
			this->Column_1_nomer_reysa->ReadOnly = true;
			// 
			// Column_2_tip_sam
			// 
			this->Column_2_tip_sam->HeaderText = L"Тип самолета";
			this->Column_2_tip_sam->Name = L"Column_2_tip_sam";
			this->Column_2_tip_sam->ReadOnly = true;
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
			// Column_5_vremya_vilet
			// 
			this->Column_5_vremya_vilet->HeaderText = L"Время вылета";
			this->Column_5_vremya_vilet->Name = L"Column_5_vremya_vilet";
			this->Column_5_vremya_vilet->ReadOnly = true;
			// 
			// Column_6_vremya_prilet
			// 
			this->Column_6_vremya_prilet->HeaderText = L"Время прилета";
			this->Column_6_vremya_prilet->Name = L"Column_6_vremya_prilet";
			this->Column_6_vremya_prilet->ReadOnly = true;
			// 
			// Column_7_price_bilet
			// 
			this->Column_7_price_bilet->HeaderText = L"Цена билета";
			this->Column_7_price_bilet->Name = L"Column_7_price_bilet";
			this->Column_7_price_bilet->ReadOnly = true;
			// 
			// button_new_zapros
			// 
			this->button_new_zapros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_new_zapros->Location = System::Drawing::Point(1102, 615);
			this->button_new_zapros->Name = L"button_new_zapros";
			this->button_new_zapros->Size = System::Drawing::Size(212, 27);
			this->button_new_zapros->TabIndex = 30;
			this->button_new_zapros->Text = L"Новый запрос";
			this->button_new_zapros->UseVisualStyleBackColor = true;
			this->button_new_zapros->Visible = false;
			this->button_new_zapros->Click += gcnew System::EventHandler(this, &zapros::button_new_zapros_Click);
			// 
			// button_reset_param
			// 
			this->button_reset_param->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_reset_param->Location = System::Drawing::Point(400, 744);
			this->button_reset_param->Name = L"button_reset_param";
			this->button_reset_param->Size = System::Drawing::Size(267, 27);
			this->button_reset_param->TabIndex = 31;
			this->button_reset_param->Text = L"Сброс всех параметров";
			this->button_reset_param->UseVisualStyleBackColor = true;
			this->button_reset_param->Click += gcnew System::EventHandler(this, &zapros::button_reset_param_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label3->Location = System::Drawing::Point(1135, 44);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 32;
			this->label3->Visible = false;
			// 
			// zapros
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1494, 887);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button_reset_param);
			this->Controls->Add(this->button_new_zapros);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->checkBox_iskl_day_otp);
			this->Controls->Add(this->checkBox_iskl_punkt_nazn);
			this->Controls->Add(this->checkBox_iskl_tip_sam);
			this->Controls->Add(this->checkBox_iskl_nomer_reysa);
			this->Controls->Add(this->maskedTextBox_vremya_vileta);
			this->Controls->Add(this->checkBox_price_rovno);
			this->Controls->Add(this->checkBox_price_bolshe);
			this->Controls->Add(this->checkBox_price_menshe);
			this->Controls->Add(this->checkBox_prilet_rovno);
			this->Controls->Add(this->checkBox_prilet_poshe);
			this->Controls->Add(this->checkBox_prilet_ranshe);
			this->Controls->Add(this->checkBox_vilet_rovno);
			this->Controls->Add(this->checkBox_vilet_poshe);
			this->Controls->Add(this->checkBox_vilet_ranshe);
			this->Controls->Add(this->button_create_zapros);
			this->Controls->Add(this->textBox_price_bilet);
			this->Controls->Add(this->maskedTextBox_vremya_prileta);
			this->Controls->Add(this->textBox_day_otp);
			this->Controls->Add(this->textBox_punkt_nazn);
			this->Controls->Add(this->textBox_tip_sam);
			this->Controls->Add(this->textBox_nomer_reysa);
			this->Controls->Add(this->checkBox_price_bilet);
			this->Controls->Add(this->checkBox_vremya_prileta);
			this->Controls->Add(this->checkBox_vremya_vileta);
			this->Controls->Add(this->checkBox_day_otp);
			this->Controls->Add(this->checkBox_punkt_nazn);
			this->Controls->Add(this->checkBox_tip_sam);
			this->Controls->Add(this->checkBox_nomer_reysa);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"zapros";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Поиск билетов";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Проверка состояний checkbox при их смене
	private: System::Void checkBox_nomer_reysa_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_nomer_reysa->Checked == true)
		{
			this->checkBox_iskl_nomer_reysa->Visible = true;
			this->textBox_nomer_reysa->Visible = true;
		}
		else
		{
			this->checkBox_iskl_nomer_reysa->Visible = false;
			this->textBox_nomer_reysa->Visible = false;
		}
	}

	private: System::Void checkBox_tip_sam_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_tip_sam->Checked == true)
		{
			this->checkBox_iskl_tip_sam->Visible = true;
			this->textBox_tip_sam->Visible = true;
		}
		else
		{
			this->checkBox_iskl_tip_sam->Visible = false;
			this->textBox_tip_sam->Visible = false;
		}
	}
	private: System::Void checkBox_punkt_nazn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_punkt_nazn->Checked == true)
		{
			this->checkBox_iskl_punkt_nazn->Visible = true;
			this->textBox_punkt_nazn->Visible = true;
		}
		else
		{
			this->checkBox_iskl_punkt_nazn->Visible = false;
			this->textBox_punkt_nazn->Visible = false;
		}
	}
	private: System::Void checkBox_day_otp_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_day_otp->Checked == true)
		{
			this->checkBox_iskl_day_otp->Visible = true;
			this->textBox_day_otp->Visible = true;
		}
		else
		{
			this->checkBox_iskl_day_otp->Visible = false;
			this->textBox_day_otp->Visible = false;
		}
	}
	private: System::Void checkBox_vremya_vileta_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_vremya_vileta->Checked == true)
		{
			this->checkBox_vilet_ranshe->Visible = true;
			this->checkBox_vilet_poshe->Visible = true;
			this->checkBox_vilet_rovno->Visible = true;
		}
		else
		{
			this->checkBox_vilet_ranshe->Visible = false;
			this->checkBox_vilet_poshe->Visible = false;
			this->checkBox_vilet_rovno->Visible = false;
			this->maskedTextBox_vremya_vileta->Visible = false;
		}
	}
	private: System::Void checkBox_vremya_prileta_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_vremya_prileta->Checked == true)
		{
			this->checkBox_prilet_ranshe->Visible = true;
			this->checkBox_prilet_poshe->Visible = true;
			this->checkBox_prilet_rovno->Visible = true;
		}
		else
		{
			this->checkBox_prilet_ranshe->Visible = false;
			this->checkBox_prilet_poshe->Visible = false;
			this->checkBox_prilet_rovno->Visible = false;
			this->maskedTextBox_vremya_prileta->Visible = false;
		}
	}
	private: System::Void checkBox_price_bilet_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_price_bilet->Checked == true)
		{
			this->checkBox_price_menshe->Visible = true;
			this->checkBox_price_bolshe->Visible = true;
			this->checkBox_price_rovno->Visible = true;
		}
		else
		{
			this->checkBox_price_menshe->Visible = false;
			this->checkBox_price_bolshe->Visible = false;
			this->checkBox_price_rovno->Visible = false;
			this->textBox_price_bilet->Visible = false;
		}
	}

		   //смена цвета textbox'ов
	private: System::Void textBox_nomer_reysa_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_nomer_reysa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
	}
	private: System::Void textBox_tip_sam_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_tip_sam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
	}
	private: System::Void textBox_punkt_nazn_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_punkt_nazn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
	}
	private: System::Void textBox_day_otp_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_day_otp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
	}
	private: System::Void maskedTextBox_vremya_vileta_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
		this->maskedTextBox_vremya_vileta->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
	}
	private: System::Void maskedTextBox_vremya_prileta_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
		this->maskedTextBox_vremya_prileta->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
	}
	private: System::Void textBox_price_bilet_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_price_bilet->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
	}

		//запрет проставления двух галок одновременно
	   //******	******	******	******	******	******	******	******	******
	   //****				Вылет			*****
	private: System::Void checkBox_vilet_ranshe_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_vilet_ranshe->Checked == true)
		{
			this->maskedTextBox_vremya_vileta->Visible = true;
			if (this->checkBox_vilet_poshe->Checked == true)
			{
				this->checkBox_vilet_poshe->Checked = false;
			}
		}
		if (this->checkBox_vilet_ranshe->Checked == false)
		{
			if (this->checkBox_vilet_poshe->Checked == false && this->checkBox_vilet_rovno->Checked == false)
			{
				this->maskedTextBox_vremya_vileta->Visible = false;
			}
		}
	}

	private: System::Void checkBox_vilet_poshe_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_vilet_poshe->Checked == true)
		{
			this->maskedTextBox_vremya_vileta->Visible = true;
			if (this->checkBox_vilet_ranshe->Checked == true)
			{
				this->checkBox_vilet_ranshe->Checked = false;
			}
			if (this->checkBox_vilet_poshe->Checked == false)
			{
				if (this->checkBox_vilet_ranshe->Checked == false && this->checkBox_vilet_rovno->Checked == false)
				{
					this->maskedTextBox_vremya_vileta->Visible = false;
				}
			}
		}
	}

	private: System::Void checkBox_vilet_rovno_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_vilet_rovno->Checked == true)
		{
			this->maskedTextBox_vremya_vileta->Visible = true;
		}
		if (this->checkBox_vilet_rovno->Checked == false)
		{
			if ((this->checkBox_vilet_ranshe->Checked == false) && (this->checkBox_vilet_poshe->Checked == false))
			{
				this->maskedTextBox_vremya_vileta->Visible = false;
			}
		}
	}

		   //****				Прилет			*****
	private: System::Void checkBox_prilet_ranshe_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_prilet_ranshe->Checked == true)
		{
			this->maskedTextBox_vremya_prileta->Visible = true;
			if (this->checkBox_prilet_poshe->Checked == true)
			{
				this->checkBox_prilet_poshe->Checked = false;
			}
		}
		if (this->checkBox_prilet_ranshe->Checked == false)
		{
			if (this->checkBox_prilet_poshe->Checked == false && this->checkBox_prilet_rovno->Checked == false)
			{
				this->maskedTextBox_vremya_prileta->Visible = false;
			}
		}
	}

	private: System::Void checkBox_prilet_poshe_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_prilet_poshe->Checked == true)
		{
			this->maskedTextBox_vremya_prileta->Visible = true;
			if (this->checkBox_prilet_ranshe->Checked == true)
			{
				this->checkBox_prilet_ranshe->Checked = false;
			}
		}
		if (this->checkBox_prilet_poshe->Checked == false)
		{
			if (this->checkBox_prilet_ranshe->Checked == false && this->checkBox_prilet_rovno->Checked == false)
			{
				this->maskedTextBox_vremya_prileta->Visible = false;
			}
		}
	}

	private: System::Void checkBox_prilet_rovno_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_prilet_rovno->Checked == true)
		{
			this->maskedTextBox_vremya_prileta->Visible = true;
		}
		if (this->checkBox_prilet_rovno->Checked == false)
		{
			if ((this->checkBox_prilet_ranshe->Checked == false) && (this->checkBox_prilet_poshe->Checked == false))
			{
				this->maskedTextBox_vremya_prileta->Visible = false;
			}
		}
	}

		   //****				Цена			*****

	private: System::Void checkBox_price_menshe_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_price_menshe->Checked == true)
		{
			this->textBox_price_bilet->Visible = true;
			if (this->checkBox_price_bolshe->Checked == true)
			{
				this->checkBox_price_bolshe->Checked = false;
			}
		}
		if (this->checkBox_price_menshe->Checked == false)
		{
			if (this->checkBox_price_bolshe->Checked == false && this->checkBox_price_rovno->Checked == false)
			{
				this->textBox_price_bilet->Visible = false;
			}
		}
	}

	private: System::Void checkBox_price_bolshe_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

		if (this->checkBox_price_bolshe->Checked == true)
		{
			this->textBox_price_bilet->Visible = true;
			if (this->checkBox_price_menshe->Checked == true)
			{
				this->checkBox_price_menshe->Checked = false;
			}
		}
		if (this->checkBox_price_bolshe->Checked == false)
		{
			if (this->checkBox_price_menshe->Checked == false && this->checkBox_price_rovno->Checked == false)
			{
				this->textBox_price_bilet->Visible = false;
			}
		}
	}

	private: System::Void checkBox_price_rovno_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->checkBox_price_rovno->Checked == true)
		{
			this->textBox_price_bilet->Visible = true;
		}
		if (this->checkBox_price_rovno->Checked == false)
		{
			if ((this->checkBox_price_menshe->Checked == false) && (this->checkBox_price_bolshe->Checked == false))
			{
				this->textBox_price_bilet->Visible = false;
			}
		}
	}


	private: Void check_price_tochka()
	{
		int i, j;
		for (i = 0; i < this->textBox_price_bilet->Text->Length; i++)
		{
			if (this->textBox_price_bilet->Text[i] == '.')
			{
				String^ new_price;
				for (j = 0; j < this->textBox_price_bilet->Text->Length; j++)
				{
					if (i != j)
					{
						new_price = new_price + this->textBox_price_bilet->Text[j];
					}
					else
					{
						new_price = new_price + ",";
					}
				}
				this->textBox_price_bilet->Text = new_price;
			}
		}
	}
	private: Void chit_BD()
	{
		//удаление всех пунктов в таблице 
		if (this->dataGridView1->RowCount - 1 != 0)
		{
			do
			{
				this->dataGridView1->Rows->RemoveAt(0);
			} while (this->dataGridView1->RowCount - 1 != 0);
		}
		char nomer_reysa[50];
		char tip_samoleta[50];
		char punkt_pribitya[50];
		char day_otp[100];
		char vremya_vilet[20];
		char vremya_prilet[20];
		double cena;
		int u = 0;	//указывает на количество записей, удовлетворяющих запросу
		int vsego_verno;
		vsego_verno = 0;
		FILE* veg;
		veg = fopen(file_op, "r");
		if (veg == NULL)
		{
		}
		else
		{
			int y, r, w, t;
			char c[100];
			std::string er;
			String^ str3;
			do
			{
				if (fseek(veg, y * 102, 0) == 0)
				{
					for (vsego_verno = 0, r = 0, w = 0, t = 0; r != 7; w++)
					{
						fscanf(veg, "%c", &c[t]);
						fseek(veg, y * 102 + w + 1, 0);
						if (c[t] == ';')
						{

							c[t] = '\0';
							if (r == 0)
							{
								strcpy(nomer_reysa, c);
								if (this->textBox_nomer_reysa->Text != "")
								{
									er = (const char*)nomer_reysa;
									str3 = gcnew String(er.c_str());
									if (this->checkBox_iskl_nomer_reysa->Checked == true)
									{
										if (this->textBox_nomer_reysa->Text != str3)
										{
											vsego_verno++;
										}
									}
									else
									{
										if (this->textBox_nomer_reysa->Text == str3)
										{
											vsego_verno++;
										}
									}
								}
							}
							else if (r == 1)
							{
								strcpy(tip_samoleta, c);
								if (this->textBox_tip_sam->Text != "")
								{
									er = (const char*)tip_samoleta;
									str3 = gcnew String(er.c_str());
									if (this->checkBox_iskl_tip_sam->Checked == true)
									{
										if (this->textBox_tip_sam->Text != str3)
										{
											vsego_verno++;
										}
									}
									else
									{
										if (this->textBox_tip_sam->Text == str3)
										{
											vsego_verno++;
										}
									}
								}
							}
							else if (r == 2)
							{
								strcpy(punkt_pribitya, c);
								if (this->textBox_punkt_nazn->Text != "")
								{
									er = (const char*)punkt_pribitya;
									str3 = gcnew String(er.c_str());
									if (this->checkBox_iskl_punkt_nazn->Checked == true)
									{
										if (this->textBox_punkt_nazn->Text != str3)
										{
											vsego_verno++;
										}
									}
									else
									{
										if (this->textBox_punkt_nazn->Text == str3)
										{
											vsego_verno++;
										}
									}
								}
							}
							else if (r == 3)
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
								if (this->checkBox_day_otp->Checked == true)
								{
									int bad, norma;
									bad = 0;
									norma = 0;
									er = (const char*)day_otp;
									str3 = gcnew String(er.c_str());
									int f = this->textBox_day_otp->Text->Length;
									String^ text_day = this->textBox_day_otp->Text;
									if (text_day[f - 1] != ' ')
									{
										text_day = text_day + " ";
										f++;
									}
									
									int i = 0;
									int j;
									for (i = 0; i < f; i = i + 2)
									{
										for (j = 0; j < strlen(c); j = j + 2)
										{
											if (text_day[i] == c[j])
											{
												norma++;
											}
										}
									}
									if (this->checkBox_iskl_day_otp->Checked == true)
									{
										if (norma == 0)
										{
											vsego_verno++;
										}
									}
									else
									{
										if ((f / 2) == norma)
										{
											vsego_verno++;
											//this->button_create_zapros->Text = "ЧИКИ-ПУКИ  " + f + "  " + norma;
										}
									}
								}
							}
							else if (r == 4)
							{
								strcpy(vremya_vilet, c);
								er = (const char*)vremya_vilet;
								str3 = gcnew String(er.c_str());
								int vremya_vilet_minute_old;
								int vremya_vilet_minute_new;
								if (this->checkBox_vremya_vileta->Checked == true)
								{
									if (this->maskedTextBox_vremya_vileta->MaskCompleted == true)
									{
										int dlina = strlen(vremya_vilet);
										if (dlina == 4)
										{
											vremya_vilet_minute_old = (vremya_vilet[0] - 48) * 60 + (vremya_vilet[2] - 48) * 10 + (vremya_vilet[3] - 48);
										}
										else if (dlina == 5)
										{
											vremya_vilet_minute_old = (vremya_vilet[0] - 48) * 60 * 10 + (vremya_vilet[1] - 48) * 60 + (vremya_vilet[3] - 48) * 10 + (vremya_vilet[4] - 48);
										}
										vremya_vilet_minute_new = (Convert::ToInt32(this->maskedTextBox_vremya_vileta->Text[0]) - 48) * 60 * 10 + (Convert::ToInt32(this->maskedTextBox_vremya_vileta->Text[1]) - 48) * 60 + (Convert::ToInt32(this->maskedTextBox_vremya_vileta->Text[3]) - 48) * 10 + (Convert::ToInt32(this->maskedTextBox_vremya_vileta->Text[4]) - 48);
										if (this->checkBox_vilet_poshe->Checked == true)
										{
											if (this->checkBox_vilet_rovno->Checked == true)
											{
												if (vremya_vilet_minute_new <= vremya_vilet_minute_old)
												{
													vsego_verno++;
												}
											}
											else
											{
												if (vremya_vilet_minute_new < vremya_vilet_minute_old)
												{
													vsego_verno++;
												}
											}
										}
										if (this->checkBox_vilet_ranshe->Checked == true)
										{
											if (this->checkBox_vilet_rovno->Checked == true)
											{
												if (vremya_vilet_minute_new >= vremya_vilet_minute_old)
												{
													vsego_verno++;
												}
											}
											else
											{
												if (vremya_vilet_minute_new > vremya_vilet_minute_old)
												{
													vsego_verno++;
												}
											}
										}
										if ((this->checkBox_vilet_rovno->Checked == true) && (this->checkBox_vilet_ranshe->Checked == false) && (this->checkBox_vilet_poshe->Checked == false))
										{
											if (vremya_vilet_minute_new == vremya_vilet_minute_old)
											{
												vsego_verno++;
											}
										}
									}
								}
							}
							else if (r == 5)
							{
								strcpy(vremya_prilet, c);
								er = (const char*)vremya_prilet;
								str3 = gcnew String(er.c_str());
								int vremya_prilet_minute_old;
								int vremya_prilet_minute_new;
								if (this->checkBox_vremya_prileta->Checked == true)
								{
									if (this->maskedTextBox_vremya_prileta->MaskCompleted == true)
									{
										int dlina = strlen(vremya_prilet);
										if (dlina == 4)
										{
											vremya_prilet_minute_old = (vremya_prilet[0] - 48) * 60 + (vremya_prilet[2] - 48) * 10 + (vremya_prilet[3] - 48);
										}
										else if (dlina == 5)
										{
											vremya_prilet_minute_old = (vremya_prilet[0] - 48) * 60 * 10 + (vremya_prilet[1] - 48) * 60 + (vremya_prilet[3] - 48) * 10 + (vremya_prilet[4] - 48);
										}
										vremya_prilet_minute_new = (Convert::ToInt32(this->maskedTextBox_vremya_prileta->Text[0]) - 48) * 60 * 10 + (Convert::ToInt32(this->maskedTextBox_vremya_prileta->Text[1]) - 48) * 60 + (Convert::ToInt32(this->maskedTextBox_vremya_prileta->Text[3]) - 48) * 10 + (Convert::ToInt32(this->maskedTextBox_vremya_prileta->Text[4]) - 48);
										if (this->checkBox_prilet_poshe->Checked == true)
										{
											if (this->checkBox_prilet_rovno->Checked == true)
											{
												if (vremya_prilet_minute_new <= vremya_prilet_minute_old)
												{
													vsego_verno++;
												}
											}
											else
											{
												if (vremya_prilet_minute_new < vremya_prilet_minute_old)
												{
													vsego_verno++;
												}
											}
										}
										else if (this->checkBox_prilet_ranshe->Checked == true)
										{
											if (this->checkBox_prilet_rovno->Checked == true)
											{
												if (vremya_prilet_minute_new >= vremya_prilet_minute_old)
												{
													vsego_verno++;
												}
											}
											else
											{
												if (vremya_prilet_minute_new > vremya_prilet_minute_old)
												{
													vsego_verno++;
												}
											}
										}
										else if ((this->checkBox_prilet_rovno->Checked == true) && (this->checkBox_prilet_ranshe->Checked == false) && (this->checkBox_prilet_poshe->Checked == false))
										{
											if (vremya_prilet_minute_new == vremya_prilet_minute_old)
											{
												vsego_verno++;
											}
										}
									}
								}
							}
							else if (r == 6)
							{
								cena = 0.0;
								for (t = 0; c[t] != ','; t++)
								{
									cena = cena * 10 + (c[t] - 48);
								}
								cena = cena + pow(10, -1) * (c[t + 1] - 48) + pow(10, -2) * (c[t + 2] - 48);
								if (this->checkBox_price_bilet->Checked == true)
								{
									check_price_tochka();
									double doubleValue;
									if (double::TryParse(this->textBox_price_bilet->Text, doubleValue))
									{
										if (this->checkBox_price_bolshe->Checked == true)
										{
											if (this->checkBox_price_rovno->Checked == true)
											{
												if (cena >= doubleValue)
												{
													vsego_verno++;
												}
											}
											else
											{
												if (cena > doubleValue)
												{
													vsego_verno++;
												}
											}
										}
										else if (this->checkBox_price_menshe->Checked == true)
										{
											if (this->checkBox_price_rovno->Checked == true)
											{
												if (cena <= doubleValue)
												{
													vsego_verno++;
												}
											}
											else
											{
												if (cena < doubleValue)
												{
													vsego_verno++;
												}
											}
										}
										else if (this->checkBox_price_rovno->Checked == true)
										{
											if (doubleValue == cena)
											{
												vsego_verno++;
											}
										}
									}
								}
							}
							r++;
							if (r != 7)
							{
								for (t = 0; t < 100; t++)
								{
									c[t] = '\0';
								}
							}
							t = 0;
							t--;
						}
						t++;
					}
					if (vsego_verno == polya_zap)
					{
						this->textBox_day_otp->Visible = false;
						this->textBox_nomer_reysa->Visible = false;
						this->textBox_price_bilet->Visible = false;
						this->textBox_punkt_nazn->Visible = false;
						this->textBox_tip_sam->Visible = false;
						this->maskedTextBox_vremya_prileta->Visible = false;
						this->maskedTextBox_vremya_vileta->Visible = false;

						this->checkBox_day_otp->Visible = false;
						this->checkBox_punkt_nazn->Visible = false;
						this->checkBox_tip_sam->Visible = false;
						this->checkBox_nomer_reysa->Visible = false;
						this->checkBox_price_bilet->Visible = false;
						this->checkBox_vremya_prileta->Visible = false;
						this->checkBox_vremya_vileta->Visible = false;

						this->checkBox_iskl_day_otp->Visible = false;
						this->checkBox_iskl_nomer_reysa->Visible = false;
						this->checkBox_iskl_punkt_nazn->Visible = false;
						this->checkBox_iskl_tip_sam->Visible = false;

						this->checkBox_price_bolshe->Visible = false;
						this->checkBox_price_menshe->Visible = false;
						this->checkBox_price_rovno->Visible = false;
						this->checkBox_prilet_poshe->Visible = false;
						this->checkBox_prilet_ranshe->Visible = false;
						this->checkBox_prilet_rovno->Visible = false;
						this->checkBox_vilet_poshe->Visible = false;
						this->checkBox_vilet_ranshe->Visible = false;
						this->checkBox_vilet_rovno->Visible = false;

						this->button_create_zapros->Visible = false;

						this->dataGridView1->Visible = true;
						this->button_reset_param->Visible = false;

						this->dataGridView1->Rows->Add();
						er = (const char*)nomer_reysa;
						str3 = gcnew String(er.c_str());
						this->dataGridView1->Rows[u]->Cells[0]->Value = str3;

						er = (const char*)tip_samoleta;
						str3 = gcnew String(er.c_str());
						this->dataGridView1->Rows[u]->Cells[1]->Value = str3;

						er = (const char*)punkt_pribitya;
						str3 = gcnew String(er.c_str());
						this->dataGridView1->Rows[u]->Cells[2]->Value = str3;

						er = (const char*)day_otp;
						str3 = gcnew String(er.c_str());
						this->dataGridView1->Rows[u]->Cells[3]->Value = str3;

						er = (const char*)vremya_vilet;
						str3 = gcnew String(er.c_str());
						this->dataGridView1->Rows[u]->Cells[4]->Value = str3;

						er = (const char*)vremya_prilet;
						str3 = gcnew String(er.c_str());
						this->dataGridView1->Rows[u]->Cells[5]->Value = str3;

						er = (const char*)c;
						str3 = gcnew String(er.c_str());
						this->dataGridView1->Rows[u]->Cells[6]->Value = str3;

						for (t = 0; t < 100; t++)
						{
							c[t] = '\0';
						}

						this->button_new_zapros->Visible = true;
						
						u++;
					}
					y++;
				}
			} while (y < kol_vo);
			if (u != 0)
			{
				this->label3->Text = "Текущие параметры запроса:\n\n";
				if (this->textBox_nomer_reysa->Text != "")
				{
					if (this->checkBox_iskl_nomer_reysa->Checked == true)
					{
						this->label3->Text = this->label3->Text + "Номер рейса: != " + this->textBox_nomer_reysa->Text + "\n";
					}
					else
					{
						this->label3->Text = this->label3->Text + "Номер рейса: " + this->textBox_nomer_reysa->Text + "\n";
					}
				}
				if (this->textBox_tip_sam->Text != "")
				{
					if (this->checkBox_iskl_tip_sam->Checked == true)
					{
						this->label3->Text = this->label3->Text + "Тип самолета: != " + this->textBox_tip_sam->Text + "\n";
					}
					else
					{
						this->label3->Text = this->label3->Text + "Тип самолета: " + this->textBox_tip_sam->Text + "\n";
					}
				}
				if (this->textBox_punkt_nazn->Text != "")
				{
					if (this->checkBox_iskl_punkt_nazn->Checked == true)
					{
						this->label3->Text = this->label3->Text + "Пункт назначения: != " + this->textBox_punkt_nazn->Text + "\n";
					}
					else
					{
						this->label3->Text = this->label3->Text + "Пункт назначения: " + this->textBox_punkt_nazn->Text + "\n";
					}
				}
				if (this->textBox_day_otp->Text != "")
				{
					if (this->checkBox_iskl_day_otp->Checked == true)
					{
						this->label3->Text = this->label3->Text + "Дни отправления: != " + this->textBox_day_otp->Text + "\n";
					}
					else
					{
						this->label3->Text = this->label3->Text + "Дни отправления: " + this->textBox_day_otp->Text + "\n";
					}
				}

				if (this->checkBox_vremya_vileta->Checked == true)
				{
					if (this->checkBox_vilet_poshe->Checked == true)
					{
						if (this->checkBox_vilet_rovno->Checked == true)
						{
							this->label3->Text = this->label3->Text + "Время вылета: после или ровно в " + this->maskedTextBox_vremya_vileta->Text + "\n";
						}
						else
						{
							this->label3->Text = this->label3->Text + "Время вылета: после " + this->maskedTextBox_vremya_vileta->Text + "\n";
						}
					}
					else if (this->checkBox_vilet_ranshe->Checked == true)
					{
						if (this->checkBox_vilet_rovno->Checked == true)
						{
							this->label3->Text = this->label3->Text + "Время вылета: до или ровно в " + this->maskedTextBox_vremya_vileta->Text + "\n";
						}
						else
						{
							this->label3->Text = this->label3->Text + "Время вылета: до " + this->maskedTextBox_vremya_vileta->Text + "\n";
						}
					}
					else if (this->checkBox_vilet_rovno->Checked == true)
					{
						this->label3->Text = this->label3->Text + "Время вылета: ровно в " + this->maskedTextBox_vremya_vileta->Text + "\n";
					}
				}
				
				if (this->checkBox_vremya_prileta->Checked == true)
				{
					if (this->checkBox_prilet_poshe->Checked == true)
					{
						if (this->checkBox_prilet_rovno->Checked == true)
						{
							this->label3->Text = this->label3->Text + "Время прилета: после или ровно в " + this->maskedTextBox_vremya_prileta->Text + "\n";
						}
						else
						{
							this->label3->Text = this->label3->Text + "Время прилета: после " + this->maskedTextBox_vremya_prileta->Text + "\n";
						}
					}
					else if (this->checkBox_prilet_ranshe->Checked == true)
					{
						if (this->checkBox_prilet_rovno->Checked == true)
						{
							this->label3->Text = this->label3->Text + "Время прилета: до или ровно в " + this->maskedTextBox_vremya_prileta->Text + "\n";
						}
						else
						{
							this->label3->Text = this->label3->Text + "Время прилета: до " + this->maskedTextBox_vremya_prileta->Text + "\n";
						}
					}
					else if (this->checkBox_prilet_rovno->Checked == true)
					{
						this->label3->Text = this->label3->Text + "Время прилета: ровно в " + this->maskedTextBox_vremya_prileta->Text + "\n";
					}
				}
				if (this->textBox_price_bilet->Text != "")
				{
					if (this->checkBox_price_bolshe->Checked == true)
					{
						if (this->checkBox_price_rovno->Checked == true)
						{
							this->label3->Text = this->label3->Text + "Цена билета: больше или ровно " + this->textBox_price_bilet->Text + "\n";
						}
						else
						{
							this->label3->Text = this->label3->Text + "Цена билета: больше " + this->textBox_price_bilet->Text + "\n";
						}
					}
					else if (this->checkBox_price_menshe->Checked == true)
					{
						if (this->checkBox_price_rovno->Checked == true)
						{
							this->label3->Text = this->label3->Text + "Цена билета: меньше или ровно " + this->textBox_price_bilet->Text + "\n";
						}
						else
						{
							this->label3->Text = this->label3->Text + "Цена билета: меньше " + this->textBox_price_bilet->Text + "\n";
						}
					}
					else if (this->checkBox_price_rovno->Checked == true)
					{
						this->label3->Text = this->label3->Text + "Цена билета: ровно " + this->textBox_price_bilet->Text + "\n";
					}
				}
				this->label3->Text = this->label3->Text + "\n\nВсего найдено по вашему запросу: " + u;
				this->label3->Visible = true;
			}
			else
			{
				MessageBox::Show("По вашему запросу ничего не найдено.\nИзмените параметры запроса.", "Форма запроса", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			fclose(veg);
		}
	}

	//проверка на пустые textbox'ы, формирование запроса
	private: System::Void button_create_zapros_Click(System::Object^ sender, System::EventArgs^ e) {
		int y = 0;		//количество заполненных параметров
		int bad = 0;
		if ((this->checkBox_nomer_reysa->Checked == true) && (this->textBox_nomer_reysa->Text != ""))
		{
			y++;
		}
		else
		{
			if ((this->textBox_nomer_reysa->Visible == true) && (this->textBox_nomer_reysa->Text == ""))
			{
				bad++;
				this->textBox_nomer_reysa->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
		}
		if ((this->checkBox_tip_sam->Checked == true) && (this->textBox_tip_sam->Text != ""))
		{
			y++;
		}
		else
		{
			if ((this->textBox_tip_sam->Visible == true) && (this->textBox_tip_sam->Text == ""))
			{
				bad++;
				this->textBox_tip_sam->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
		}
		if ((this->checkBox_punkt_nazn->Checked == true) && (this->textBox_punkt_nazn->Text != ""))
		{
			y++;
		}
		else
		{
			if ((this->textBox_punkt_nazn->Visible == true) && (this->textBox_punkt_nazn->Text == ""))
			{
				bad++;
				this->textBox_punkt_nazn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
		}
		if ((this->checkBox_day_otp->Checked == true) && (this->textBox_day_otp->Text != ""))
		{
			//проверка на правильность ввода чиселок
			int bad1 = 0;
			int f = this->textBox_day_otp->Text->Length;
			String^ text_day = this->textBox_day_otp->Text;
			if (text_day[f - 1] != ' ')
			{
				text_day = text_day + " ";
			}
			int i = f;
			for (f = 0; f < i; f++)
			{
				if (f % 2 == 0)
				{
					if ((text_day[f] < 49) || (text_day[f] > 55))
					{
						bad1++;
					}
				}
				else
				{
					if (text_day[f] != ' ')
					{
						bad1++;
					}
				}
			}
			if (bad1 == 0)
			{
				y++;
			}
			else
			{
				MessageBox::Show("Дни отправления введены неверно.", "Форма запроса", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				bad++;
			}
		}
		else
		{
			if ((this->textBox_day_otp->Visible == true) && (this->textBox_day_otp->Text == ""))
			{
				bad++;
				this->textBox_day_otp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
		}
		//if ((this->checkBox_vremya_vileta->Checked == true) && (this->maskedTextBox_vremya_vileta->Text != ""))
		if ((this->checkBox_vremya_vileta->Checked == true) && (this->maskedTextBox_vremya_vileta->MaskCompleted == true))
		{
			
			if (((Convert::ToInt32(this->maskedTextBox_vremya_vileta->Text[0]) - 48) * 10 + (Convert::ToInt32(this->maskedTextBox_vremya_vileta->Text[1]) - 48) >= 24) || ((Convert::ToInt32(this->maskedTextBox_vremya_vileta->Text[3]) - 48) * 10 + (Convert::ToInt32(this->maskedTextBox_vremya_vileta->Text[4]) - 48) >= 60))
			{
				bad++;
				MessageBox::Show("Время вылета введено неверно.", "Форма запроса", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				y++;
			}
		}
		else
		{
			if ((this->maskedTextBox_vremya_vileta->Visible == true) && (this->maskedTextBox_vremya_vileta->MaskCompleted == true))
			{
				bad++;
				this->maskedTextBox_vremya_vileta->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
		}
		if ((this->checkBox_vremya_prileta->Checked == true) && (this->maskedTextBox_vremya_prileta->MaskCompleted == true))
		{
			if (((Convert::ToInt32(this->maskedTextBox_vremya_prileta->Text[0]) - 48) * 10 + (Convert::ToInt32(this->maskedTextBox_vremya_prileta->Text[1]) - 48) >= 24) || ((Convert::ToInt32(this->maskedTextBox_vremya_prileta->Text[3]) - 48) * 10 + (Convert::ToInt32(this->maskedTextBox_vremya_prileta->Text[4]) - 48) >= 60))
			{
				bad++;
				MessageBox::Show("Время прилета введено неверно.", "Форма запроса", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			else
			{
				y++;
			}
		}
		else
		{
			if ((this->maskedTextBox_vremya_prileta->Visible == true) && (this->maskedTextBox_vremya_prileta->MaskCompleted == true))
			{
				bad++;
				this->maskedTextBox_vremya_prileta->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
		}
		if ((this->checkBox_price_bilet->Checked == true) && (this->textBox_price_bilet->Text != ""))
		{
			y++;
		}
		else
		{
			if ((this->textBox_price_bilet->Visible == true) && (this->textBox_price_bilet->Text == ""))
			{
				bad++;
				this->textBox_price_bilet->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
		}
		if (bad == 0)
		{
			if (y != 0)
			{
				polya_zap = y;
				this->label3->Text = "";	//обнуление всех параметров запроса в label
				chit_BD();	//выполнение запроса
			}
			else
			{
				MessageBox::Show("Для создания запроса не было введено ни одного параметра.\nЗаполните параметры для выполнения запроса.", "Форма запроса", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			
		}
	}

	private: System::Void button_new_zapros_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button_new_zapros->Visible = false;

	this->textBox_day_otp->Visible = true;
	this->textBox_nomer_reysa->Visible = true;
	this->textBox_price_bilet->Visible = true;
	this->textBox_punkt_nazn->Visible = true;
	this->textBox_tip_sam->Visible = true;
	this->maskedTextBox_vremya_prileta->Visible = true;
	this->maskedTextBox_vremya_vileta->Visible = true;

	this->checkBox_day_otp->Visible = true;
	this->checkBox_punkt_nazn->Visible = true;
	this->checkBox_tip_sam->Visible = true;
	this->checkBox_nomer_reysa->Visible = true;
	this->checkBox_price_bilet->Visible = true;
	this->checkBox_vremya_prileta->Visible = true;
	this->checkBox_vremya_vileta->Visible = true;

	this->checkBox_iskl_day_otp->Visible = true;
	this->checkBox_iskl_nomer_reysa->Visible = true;
	this->checkBox_iskl_punkt_nazn->Visible = true;
	this->checkBox_iskl_tip_sam->Visible = true;

	this->checkBox_price_bolshe->Visible = true;
	this->checkBox_price_menshe->Visible = true;
	this->checkBox_price_rovno->Visible = true;
	this->checkBox_prilet_poshe->Visible = true;
	this->checkBox_prilet_ranshe->Visible = true;
	this->checkBox_prilet_rovno->Visible = true;
	this->checkBox_vilet_poshe->Visible = true;
	this->checkBox_vilet_ranshe->Visible = true;
	this->checkBox_vilet_rovno->Visible = true;

	this->button_create_zapros->Visible = true;

	this->dataGridView1->Visible = false;
	button_reset_param_Click(sender, e);
}

	   //сброс всех параметров, отмена всех чеков и так далее!!!
	private: System::Void button_reset_param_Click(System::Object^ sender, System::EventArgs^ e) {
		polya_zap = 0;
		this->checkBox_day_otp->Checked = false;
		this->checkBox_punkt_nazn->Checked = false;
		this->checkBox_tip_sam->Checked = false;
		this->checkBox_nomer_reysa->Checked = false;
		this->checkBox_price_bilet->Checked = false;
		this->checkBox_vremya_prileta->Checked = false;
		this->checkBox_vremya_vileta->Checked = false;

		this->textBox_day_otp->Visible = false;
		this->textBox_day_otp->Text = "";
		this->textBox_nomer_reysa->Visible = false;
		this->textBox_nomer_reysa->Text = "";
		this->textBox_price_bilet->Visible = false;
		this->textBox_price_bilet->Text = "";
		this->textBox_punkt_nazn->Visible = false;
		this->textBox_punkt_nazn->Text = "";
		this->textBox_tip_sam->Visible = false;
		this->textBox_tip_sam->Text = "";
		this->maskedTextBox_vremya_prileta->Visible = false;
		this->maskedTextBox_vremya_vileta->Visible = false;

		this->checkBox_iskl_day_otp->Visible = false;
		this->checkBox_iskl_day_otp->Checked = false;
		this->checkBox_iskl_nomer_reysa->Visible = false;
		this->checkBox_iskl_nomer_reysa->Checked = false;
		this->checkBox_iskl_punkt_nazn->Visible = false;
		this->checkBox_iskl_punkt_nazn->Checked = false;
		this->checkBox_iskl_tip_sam->Visible = false;
		this->checkBox_iskl_tip_sam->Checked = false;

		this->checkBox_price_bolshe->Visible = false;
		this->checkBox_price_bolshe->Checked = false;
		this->checkBox_price_menshe->Visible = false;
		this->checkBox_price_menshe->Checked = false;
		this->checkBox_price_rovno->Visible = false;
		this->checkBox_price_rovno->Checked = false;
		this->checkBox_prilet_poshe->Visible = false;
		this->checkBox_prilet_poshe->Checked = false;
		this->checkBox_prilet_ranshe->Visible = false;
		this->checkBox_prilet_ranshe->Checked = false;
		this->checkBox_prilet_rovno->Visible = false;
		this->checkBox_prilet_rovno->Checked = false;
		this->checkBox_vilet_poshe->Visible = false;
		this->checkBox_vilet_poshe->Checked = false;
		this->checkBox_vilet_ranshe->Visible = false;
		this->checkBox_vilet_ranshe->Checked = false;
		this->checkBox_vilet_rovno->Visible = false;
		this->checkBox_vilet_rovno->Checked = false;
		this->label3->Visible = false;
		
		textBox_nomer_reysa_TextChanged(sender, e);
		textBox_tip_sam_TextChanged(sender, e);
		textBox_punkt_nazn_TextChanged(sender, e);
		textBox_day_otp_TextChanged(sender, e);
		this->maskedTextBox_vremya_vileta->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
		this->maskedTextBox_vremya_prileta->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
		textBox_price_bilet_TextChanged(sender, e);
	}
};
}