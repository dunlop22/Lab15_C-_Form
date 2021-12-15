#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для exit_izm
	/// </summary>
	public ref class exit_izm : public System::Windows::Forms::Form
	{
	public:
		exit_izm(void)
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
		~exit_izm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: char save;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button_otmena;
	private: System::Windows::Forms::Button^ button_save;
	private: System::Windows::Forms::Button^ button_exit;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(exit_izm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_otmena = (gcnew System::Windows::Forms::Button());
			this->button_save = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label1->Location = System::Drawing::Point(148, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(283, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Изменения не сохранены.\nПри выходе без сохранения они будут утеряны.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_otmena
			// 
			this->button_otmena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->button_otmena->Location = System::Drawing::Point(36, 108);
			this->button_otmena->Name = L"button_otmena";
			this->button_otmena->Size = System::Drawing::Size(146, 29);
			this->button_otmena->TabIndex = 1;
			this->button_otmena->Text = L"Вернуться к БД";
			this->button_otmena->UseVisualStyleBackColor = true;
			this->button_otmena->Click += gcnew System::EventHandler(this, &exit_izm::button_otmena_Click);
			// 
			// button_save
			// 
			this->button_save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->button_save->Location = System::Drawing::Point(212, 108);
			this->button_save->Name = L"button_save";
			this->button_save->Size = System::Drawing::Size(146, 29);
			this->button_save->TabIndex = 2;
			this->button_save->Text = L"Сохранить и выйти";
			this->button_save->UseVisualStyleBackColor = true;
			this->button_save->Click += gcnew System::EventHandler(this, &exit_izm::button_save_Click);
			// 
			// button_exit
			// 
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->button_exit->Location = System::Drawing::Point(391, 108);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(146, 29);
			this->button_exit->TabIndex = 3;
			this->button_exit->Text = L"Выход без сохранения изменений";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &exit_izm::button_exit_Click);
			// 
			// exit_izm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(572, 174);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_save);
			this->Controls->Add(this->button_otmena);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"exit_izm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Несохраненные изменения";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_save_Click(System::Object^ sender, System::EventArgs^ e) {
		this->save = '1';
		this->Close();
	}

	private: System::Void button_otmena_Click(System::Object^ sender, System::EventArgs^ e) {
		this->save = '2';
		this->Close();
	}

	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->save = '3';
		this->Close();
		//Application::Exit();
	}
};
}
