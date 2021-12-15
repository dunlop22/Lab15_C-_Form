#pragma once

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для spravka_main
	/// </summary>
	public ref class spravka_main : public System::Windows::Forms::Form
	{
	public:
		spravka_main(void)
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
		~spravka_main()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::TextBox^ textBox_spravka;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(spravka_main::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->textBox_spravka = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button_exit->Location = System::Drawing::Point(229, 249);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(180, 39);
			this->button_exit->TabIndex = 1;
			this->button_exit->Text = L"Закрыть";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &spravka_main::button_exit_Click);
			// 
			// textBox_spravka
			// 
			this->textBox_spravka->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_spravka->Location = System::Drawing::Point(12, 12);
			this->textBox_spravka->Multiline = true;
			this->textBox_spravka->Name = L"textBox_spravka";
			this->textBox_spravka->ReadOnly = true;
			this->textBox_spravka->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox_spravka->Size = System::Drawing::Size(624, 221);
			this->textBox_spravka->TabIndex = 2;
			this->textBox_spravka->Text = resources->GetString(L"textBox_spravka.Text");
			// 
			// spravka_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(660, 300);
			this->Controls->Add(this->textBox_spravka);
			this->Controls->Add(this->button_exit);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"spravka_main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Справка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
