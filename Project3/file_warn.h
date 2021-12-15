#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class file_warn : public System::Windows::Forms::Form
	{
	public:
		file_warn(void)
		{
			InitializeComponent();
		}

	protected:
		~file_warn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button_chistka_file;
	private: System::Windows::Forms::Button^ button_copy_create;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_change_file;

	public: 
		int vibor;
		Boolean bi;
		char fg;
	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(file_warn::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button_chistka_file = (gcnew System::Windows::Forms::Button());
			this->button_copy_create = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_change_file = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F));
			this->textBox1->Location = System::Drawing::Point(123, 83);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(322, 101);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"В файле с базой данных найдены ошибки. Для продолжения работы выберите один из пу"
				L"нктов.";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button_chistka_file
			// 
			this->button_chistka_file->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_chistka_file->Location = System::Drawing::Point(182, 225);
			this->button_chistka_file->Name = L"button_chistka_file";
			this->button_chistka_file->Size = System::Drawing::Size(211, 23);
			this->button_chistka_file->TabIndex = 1;
			this->button_chistka_file->Text = L"Очистить файл";
			this->button_chistka_file->UseVisualStyleBackColor = true;
			this->button_chistka_file->Click += gcnew System::EventHandler(this, &file_warn::button_chistka_file_Click);
			// 
			// button_copy_create
			// 
			this->button_copy_create->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_copy_create->Location = System::Drawing::Point(182, 269);
			this->button_copy_create->Name = L"button_copy_create";
			this->button_copy_create->Size = System::Drawing::Size(211, 23);
			this->button_copy_create->TabIndex = 2;
			this->button_copy_create->Text = L"Создать копию и продолжить";
			this->button_copy_create->UseVisualStyleBackColor = true;
			this->button_copy_create->Click += gcnew System::EventHandler(this, &file_warn::button_copy_create_Click);
			// 
			// button_exit
			// 
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_exit->Location = System::Drawing::Point(182, 352);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(211, 23);
			this->button_exit->TabIndex = 3;
			this->button_exit->Text = L"Выход из программы";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &file_warn::button_exit_Click);
			// 
			// button_change_file
			// 
			this->button_change_file->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_change_file->Location = System::Drawing::Point(182, 309);
			this->button_change_file->Name = L"button_change_file";
			this->button_change_file->Size = System::Drawing::Size(211, 23);
			this->button_change_file->TabIndex = 4;
			this->button_change_file->Text = L"Выбрать другой файл";
			this->button_change_file->UseVisualStyleBackColor = true;
			this->button_change_file->Click += gcnew System::EventHandler(this, &file_warn::button_change_file_Click);
			// 
			// file_warn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 497);
			this->Controls->Add(this->button_change_file);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_copy_create);
			this->Controls->Add(this->button_chistka_file);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"file_warn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ошибка БД";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void button_chistka_file_Click(System::Object^ sender, System::EventArgs^ e) {
		bi = true;
		fg = '1';
		this->Close();

	}

	private: System::Void button_copy_create_Click(System::Object^ sender, System::EventArgs^ e) {
		fg = '2';
		this->Close(); 
	}

	private: System::Void button_change_file_Click(System::Object^ sender, System::EventArgs^ e) {
		fg = '3';
		this->Close();
	}
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
};
}
