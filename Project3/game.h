#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <fstream>
#include "zapros.h"
#include <tchar.h>	//открытие ресурсов
#include <windows.h>
#include <iostream>
#include <winnt.rh>
#include <msclr\marshal_cppstd.h>	//конвертирование строк
#include <time.h>	//генерация случайного числа
#include "resource1.h"	//файл ресурсов
#include <codecvt>
#include <sstream>
#include <string>
#define IDR_TXT1                        103

namespace Project3 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Resources;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;
	using namespace System::Reflection;

	public ref class game : public System::Windows::Forms::Form
	{
	public:
		game(void)
		{
			InitializeComponent();
		}

	protected:
		~game()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button_start_user;
	private: System::Windows::Forms::Button^ button_start_pc;
	private: System::Windows::Forms::TextBox^ textBox_town_user;
	private: System::Windows::Forms::Button^ button_pass;
	private: System::Windows::Forms::Button^ button_new_game;

	private: System::Windows::Forms::Label^ label_bukva;
	private: System::Windows::Forms::TextBox^ textBox_podskazka;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	public:
		int v = 0;	//общее количество неиспользованных городов (не изменяется в программе)
		int r = 0;	//общее количество букв
		int t = 0;	//общее количество неиспользованных городов
		array<String^>^ ready = gcnew array<String^>(1300);		//использованные города
		array<String^>^ town = gcnew array<String^>(1300);		//все города
		array<int>^ number_shortik = gcnew array<int>(35);	
		array<wchar_t>^ shortik = gcnew array<wchar_t>(35);
		wchar_t bukva;		//последняя буква города

	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::TextBox^ textBox_town_pc;
	private: System::Windows::Forms::TextBox^ textBox_town_user_read;



	private: System::Windows::Forms::Label^ label_error;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
			this->button_start_user = (gcnew System::Windows::Forms::Button());
			this->button_start_pc = (gcnew System::Windows::Forms::Button());
			this->textBox_town_user = (gcnew System::Windows::Forms::TextBox());
			this->button_pass = (gcnew System::Windows::Forms::Button());
			this->button_new_game = (gcnew System::Windows::Forms::Button());
			this->label_bukva = (gcnew System::Windows::Forms::Label());
			this->textBox_podskazka = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label_error = (gcnew System::Windows::Forms::Label());
			this->textBox_town_pc = (gcnew System::Windows::Forms::TextBox());
			this->textBox_town_user_read = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_start_user
			// 
			this->button_start_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_start_user->Location = System::Drawing::Point(258, 204);
			this->button_start_user->Name = L"button_start_user";
			this->button_start_user->Size = System::Drawing::Size(257, 33);
			this->button_start_user->TabIndex = 1;
			this->button_start_user->Text = L"Игру начинает пользователь";
			this->button_start_user->UseVisualStyleBackColor = true;
			this->button_start_user->Click += gcnew System::EventHandler(this, &game::button_start_user_Click);
			// 
			// button_start_pc
			// 
			this->button_start_pc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_start_pc->Location = System::Drawing::Point(258, 262);
			this->button_start_pc->Name = L"button_start_pc";
			this->button_start_pc->Size = System::Drawing::Size(257, 33);
			this->button_start_pc->TabIndex = 2;
			this->button_start_pc->Text = L"Игру начинает компьютер";
			this->button_start_pc->UseVisualStyleBackColor = true;
			this->button_start_pc->Click += gcnew System::EventHandler(this, &game::button_start_pc_Click);
			// 
			// textBox_town_user
			// 
			this->textBox_town_user->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->textBox_town_user->Location = System::Drawing::Point(233, 420);
			this->textBox_town_user->Name = L"textBox_town_user";
			this->textBox_town_user->Size = System::Drawing::Size(100, 21);
			this->textBox_town_user->TabIndex = 3;
			this->textBox_town_user->Visible = false;
			this->textBox_town_user->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &game::textBox1_KeyPress);
			// 
			// button_pass
			// 
			this->button_pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_pass->Location = System::Drawing::Point(689, 486);
			this->button_pass->Name = L"button_pass";
			this->button_pass->Size = System::Drawing::Size(75, 37);
			this->button_pass->TabIndex = 4;
			this->button_pass->Text = L"Пас";
			this->button_pass->UseVisualStyleBackColor = true;
			this->button_pass->Visible = false;
			this->button_pass->Click += gcnew System::EventHandler(this, &game::button_pass_Click);
			// 
			// button_new_game
			// 
			this->button_new_game->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button_new_game->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_new_game->Location = System::Drawing::Point(626, 13);
			this->button_new_game->Name = L"button_new_game";
			this->button_new_game->Size = System::Drawing::Size(138, 30);
			this->button_new_game->TabIndex = 5;
			this->button_new_game->Text = L"Новая игра";
			this->button_new_game->UseVisualStyleBackColor = true;
			this->button_new_game->Visible = false;
			this->button_new_game->Click += gcnew System::EventHandler(this, &game::button_new_game_Click);
			// 
			// label_bukva
			// 
			this->label_bukva->AutoSize = true;
			this->label_bukva->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label_bukva->Location = System::Drawing::Point(230, 395);
			this->label_bukva->Name = L"label_bukva";
			this->label_bukva->Size = System::Drawing::Size(0, 16);
			this->label_bukva->TabIndex = 7;
			// 
			// textBox_podskazka
			// 
			this->textBox_podskazka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->textBox_podskazka->Location = System::Drawing::Point(493, 420);
			this->textBox_podskazka->Multiline = true;
			this->textBox_podskazka->Name = L"textBox_podskazka";
			this->textBox_podskazka->ReadOnly = true;
			this->textBox_podskazka->Size = System::Drawing::Size(205, 33);
			this->textBox_podskazka->TabIndex = 8;
			this->textBox_podskazka->Text = L"Подсказка (Нажмите)";
			this->textBox_podskazka->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox_podskazka->Visible = false;
			this->textBox_podskazka->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &game::textBox_podskazka_MouseDown);
			// 
			// timer1
			// 
			this->timer1->Interval = 3000;
			this->timer1->Tick += gcnew System::EventHandler(this, &game::timer1_Tick);
			// 
			// button_exit
			// 
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_exit->Location = System::Drawing::Point(12, 486);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(75, 37);
			this->button_exit->TabIndex = 9;
			this->button_exit->Text = L"Выход";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &game::button_exit_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 3000;
			this->timer2->Tick += gcnew System::EventHandler(this, &game::timer2_Tick);
			// 
			// label_error
			// 
			this->label_error->AutoSize = true;
			this->label_error->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label_error->ForeColor = System::Drawing::Color::Red;
			this->label_error->Location = System::Drawing::Point(148, 449);
			this->label_error->Name = L"label_error";
			this->label_error->Size = System::Drawing::Size(285, 16);
			this->label_error->TabIndex = 10;
			this->label_error->Text = L"Город введен неверно или он был назван!";
			this->label_error->Visible = false;
			// 
			// textBox_town_pc
			// 
			this->textBox_town_pc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->textBox_town_pc->Location = System::Drawing::Point(32, 66);
			this->textBox_town_pc->Multiline = true;
			this->textBox_town_pc->Name = L"textBox_town_pc";
			this->textBox_town_pc->ReadOnly = true;
			this->textBox_town_pc->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_town_pc->Size = System::Drawing::Size(282, 308);
			this->textBox_town_pc->TabIndex = 12;
			this->textBox_town_pc->Text = L"Города компьютера:";
			this->textBox_town_pc->Visible = false;
			// 
			// textBox_town_user_read
			// 
			this->textBox_town_user_read->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->textBox_town_user_read->Location = System::Drawing::Point(416, 66);
			this->textBox_town_user_read->Multiline = true;
			this->textBox_town_user_read->Name = L"textBox_town_user_read";
			this->textBox_town_user_read->ReadOnly = true;
			this->textBox_town_user_read->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_town_user_read->Size = System::Drawing::Size(282, 308);
			this->textBox_town_user_read->TabIndex = 13;
			this->textBox_town_user_read->Text = L"Города пользователя:";
			this->textBox_town_user_read->Visible = false;
			// 
			// game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 535);
			this->Controls->Add(this->textBox_town_user_read);
			this->Controls->Add(this->textBox_town_pc);
			this->Controls->Add(this->label_error);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->textBox_podskazka);
			this->Controls->Add(this->label_bukva);
			this->Controls->Add(this->button_new_game);
			this->Controls->Add(this->button_pass);
			this->Controls->Add(this->textBox_town_user);
			this->Controls->Add(this->button_start_pc);
			this->Controls->Add(this->button_start_user);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Города";
			this->Load += gcnew System::EventHandler(this, &game::game_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void game_Load(System::Object^ sender, System::EventArgs^ e) {
		//чтение ресурсов
		System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(game::typeid));
		HRSRC   hRes = FindResource(GetModuleHandle(NULL), MAKEINTRESOURCE(IDR_TXT1), _T("TXT"));
		if (!hRes)
		{
			MessageBox::Show("Нарушена целостность ресурсов программы.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else
		{
			DWORD dwSize = SizeofResource(NULL, hRes);
			HGLOBAL hResMem = LoadResource(GetModuleHandle(NULL), hRes);
			char* data = (char*)LockResource(hResMem);
			std::string open_str(data, strlen(data));	//преобразование в русские буквы
			std::wstring wstrTo(strlen(data), 0);
			MultiByteToWideChar(CP_UTF8, 0, &open_str[0], strlen(data), &wstrTo[0], strlen(data));
			String^ str3 = gcnew String(wstrTo.c_str());
			using convert_type = std::codecvt_utf8<wchar_t>;	//wstring to string
			std::wstring_convert<convert_type, wchar_t> converter;
			std::string converted_str = converter.to_bytes(wstrTo);
			int i, k, vsego;
			vsego = 0;
			k = 0;
			number_shortik[0] = 0;
			shortik[0] = ';';
			shortik[1] = 'А';
			//перенос данных в массив
			for (i = 0; i < wstrTo.length(); i++)
			{
				if (wstrTo[i] != ',')
				{
					if ((wstrTo[i] != shortik[r]) && (k == 0))	//определение новой буквы
					{
						number_shortik[r] = vsego;
						r = r + 1;
						shortik[r] = wstrTo[i];
					}
					town[t] = town[t] + wstrTo[i];
					k++;
				}
				else
				{
					t = t + 1;
					k = 0;
					vsego++;
				}
			}
			for (i = 0; i < 1100; i++)
			{
				ready[i] = ";";
			}
			v = t;
		}
	}

		   //генерация случайного города компьютером
	private: Void maschine_vibor()
	{
		srand(time(0));
		int d, j, s, h;
		h = -1;
		s = 0;
		int generat;
		if (ready[0] == ";")
		{
			d = rand() % r;
			bukva = shortik[d] + 32;
		}
		for (j = 0; j < r; j++)
		{
			if (Convert::ToString(int(bukva) - 1040) == Convert::ToString(int(shortik[j]) - 1008))
			{
				h = j;
			}
		}
		if (h != -1)
		{
			generat = number_shortik[h] - number_shortik[h - 1];
			d = rand() % generat + 1;
			d = d + number_shortik[h - 1];
			this->textBox_town_pc->Text = this->textBox_town_pc->Text + System::Environment::NewLine + town[d - 1] + System::Environment::NewLine;
			this->textBox_town_pc->SelectionStart = this->textBox_town_pc->TextLength;
			this->textBox_town_pc->ScrollToCaret();
			perestanovka(d - 1);
			otbor_nulei();
			precheck(1);
			this->label_bukva->Text = "Введите город на букву \"" + Convert::ToString(bukva) + "\"";
			
		}
	}

		   //применяет город к обработке по нажатию enter
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 13)
		{
			if (this->textBox_town_user->Text != "")
			{
				check_town();
			}
		}
	}

	private: Void new_game()
	{
		game^ game_frm = gcnew game();
		game_frm->Show();
		this->Close();
	}

		   //проверка наличия города
	private: Void precheck(int u)
	{
		int j, h;
		h = 0;
		for (j = 0; j < r; j++)
		{
			if (Convert::ToString(int(bukva) - 1040) == Convert::ToString(int(shortik[j]) - 1008))
			{
				h++;;
			}
		}
		if (h == 0)
		{
			if (u == 0)	//проигрыш машины
			{
				MessageBox::Show("Победа пользователя.\nНе существует городов на \"" + bukva + "\"", "Победа пользователя", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				new_game();
			}
			else if (u == 1)	//проигрыш пользователя
			{
				MessageBox::Show("Победа компьютера.\nНе существует городов на \"" + bukva + "\"", "Победа компьютера", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				new_game();
			}
		}
	}

	private: System::Void button_start_pc_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_town_user_read->Text = this->textBox_town_user_read->Text + System::Environment::NewLine;
		this->textBox_podskazka->Visible = true;
		this->textBox_town_user->Visible = true;
		this->button_new_game->Visible = true;
		this->button_start_pc->Visible = false;
		this->button_start_user->Visible = false;
		this->textBox_town_user_read->Visible = true;
		this->textBox_town_pc->Visible = true;
		this->button_pass->Visible = true;
		maschine_vibor();
	}

	private: Void otbor_nulei()
	{
		int j, h;
		for (j = 0; j < r; j++)
		{
			if (number_shortik[j] == number_shortik[j + 1])
			{
				for (h = j + 1; h < r - 1; h++)
				{
					shortik[h] = shortik[h + 1];
					number_shortik[h] = number_shortik[h + 1];
				}
				r = r - 1;
				break;
			}
		}
	}

	private: Void perestanovka(int u)
	{
		int k = 0;
		int j, m, n;
		m = 0;
		bukva = town[u][town[u]->Length - 1];
		if (int(bukva) == 1100 || int(bukva) == 1099)
		{
			bukva = town[u][town[u]->Length - 2];
		}
		for (k = 0; ready[k] != ";"; k++) {}
		ready[k] = town[u];
		k = k + 1;
		for (j = u; j < t - 1; j++)
		{
			town[j] = town[j + 1];
		}
		t = t - 1;
		for (j = 0; j < r + 1; j++)
		{
			if (m != 0)
			{
				number_shortik[j] = number_shortik[j] - 1;
			}
			if (int(ready[k - 1][0]) == int(shortik[j]))
			{
				m++;
				if (j != 0)
				{
					for (n = j; n < r; n++)
					{
						number_shortik[n] = number_shortik[n] - 1;
					}
				}
				else
				{
					for (n = j; n < r; n++)
					{
						number_shortik[n] = number_shortik[n] - 1;
					}
				}
				break;
			}
		}
	}

		   //проверка города пользователя
	private: Void check_town()
	{
		int u;
		String^ new_buk = Convert::ToString(this->textBox_town_user->Text);
		int o, g;
		//проверка первой буквы
		if (t == v)
		{
			goto pervie;
		}
		if ((int(bukva) - 1040 == int(new_buk[0]) - 1040) || (int(bukva) - 1040 == int(new_buk[0]) - 1008))
		{
		pervie:

			for (u = 0; u < t; u++)
			{
			
				//проверка длины
				if (town[u]->Length == new_buk->Length)
				{
					//перебор по всей длине
					for (o = 0, g = 0; o < new_buk->Length; o++)
					{
						///одинаковые символы					  
						if ((int(town[u][o]) == int(new_buk[o])) || (int(town[u][o]) - 32 == int(new_buk[o])) || ((int(town[u][o]) == int(new_buk[o]) - 32)))
						{
							g++;
						}
					}
					if (g == new_buk->Length)
					{
						this->textBox_town_user_read->Text = this->textBox_town_user_read->Text + System::Environment::NewLine + Convert::ToString(town[u]) + System::Environment::NewLine;
						this->textBox_town_user_read->SelectionStart = this->textBox_town_user_read->TextLength;
						this->textBox_town_user_read->ScrollToCaret();
						this->textBox_town_user->Text = "";
						perestanovka(u);
						otbor_nulei();
						precheck(0);
						maschine_vibor();
					}
				}
			}
		}	//показ ошибки в случае набора неверного города или уже выбранного
		if (this->textBox_town_user->Text != "")
		{
			this->label_error->Visible = true;
			this->timer2->Enabled = true;
		}
	}


	private: System::Void button_start_user_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button_start_user->Visible = false;
		this->textBox_town_user_read->Visible = true;
		this->button_new_game->Visible = true;
		this->textBox_podskazka->Visible = true;
		this->button_start_pc->Visible = false;
		this->textBox_town_user->Visible = true;
		this->button_pass->Visible = true;
		this->textBox_town_pc->Visible = true;
		this->textBox_town_pc->Text = this->textBox_town_pc->Text + System::Environment::NewLine;
	}

	private: System::Void button_pass_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Автоматическая победа компьютера.", "Победа компьютера", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		new_game();
	}	

		   //скрытие подсказки
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->textBox_podskazka->Text = L"Подсказка (Нажмите)";
		this->timer1->Enabled = false;
	}

		   //скрытия оповещения о вводе неправильного города
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->label_error->Visible = false;
		this->timer2->Enabled = false;
	}

		   //новая игра при нажатии на соответствующую кнопку
	private: System::Void button_new_game_Click(System::Object^ sender, System::EventArgs^ e) {
		new_game();
	}

		   //выход из игры при нажатии на соответствующую кнопку
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

			//показ города-подсказки при нажатии на соответствующий пункт (textbox)
	private: System::Void textBox_podskazka_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		srand(time(0));
		int d, j;
		int generat;
		if (ready[0] == ";")
		{
			d = rand() % r + 1;
			bukva = shortik[d] + 32;
		}
		for (j = 0; j < r; j++)
		{
			if (Convert::ToString(int(bukva) - 1040) == Convert::ToString(int(shortik[j]) - 1008))
			{
				generat = number_shortik[j] - number_shortik[j - 1];
				d = rand() % generat + 1;
				d = d + number_shortik[j - 1];
				this->textBox_podskazka->Text = Convert::ToString(town[d - 1]);
				this->timer1->Enabled = true;
				break;
			}
		}
	}
};
}
