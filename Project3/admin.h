#pragma once
#include <string>

namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class admin : public System::Windows::Forms::Form
	{
	public:
		admin(void)
		{
			InitializeComponent();
		}

	protected:
		~admin()
		{
			if (components)
			{
				delete components;
			}
		}
	public:
		Boolean LogOn = false;
		String^ login = "Admin1";
		String^ password = "Admin1";
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_login;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label_login;
	private: System::Windows::Forms::Label^ label_password;
	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Label^ label_error;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(admin::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_login = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label_login = (gcnew System::Windows::Forms::Label());
			this->label_password = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label_error = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label1->Location = System::Drawing::Point(166, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 63);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ƒл€ редактировани€ данных в базе данных, войдите в режим админстратора.";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_login
			// 
			this->textBox_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->textBox_login->Location = System::Drawing::Point(228, 180);
			this->textBox_login->Name = L"textBox_login";
			this->textBox_login->Size = System::Drawing::Size(201, 21);
			this->textBox_login->TabIndex = 1;
			// 
			// textBox_password
			// 
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->textBox_password->Location = System::Drawing::Point(228, 236);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(201, 21);
			this->textBox_password->TabIndex = 2;
			this->textBox_password->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &admin::textBox_password_KeyPress);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->button1->Location = System::Drawing::Point(270, 315);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 29);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &admin::button1_Click);
			// 
			// label_login
			// 
			this->label_login->AutoSize = true;
			this->label_login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label_login->Location = System::Drawing::Point(136, 183);
			this->label_login->Name = L"label_login";
			this->label_login->Size = System::Drawing::Size(44, 16);
			this->label_login->TabIndex = 4;
			this->label_login->Text = L"Login:";
			// 
			// label_password
			// 
			this->label_password->AutoSize = true;
			this->label_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label_password->Location = System::Drawing::Point(136, 239);
			this->label_password->Name = L"label_password";
			this->label_password->Size = System::Drawing::Size(71, 16);
			this->label_password->TabIndex = 5;
			this->label_password->Text = L"Password:";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// label_error
			// 
			this->label_error->AutoSize = true;
			this->label_error->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F));
			this->label_error->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label_error->Location = System::Drawing::Point(214, 280);
			this->label_error->Name = L"label_error";
			this->label_error->Size = System::Drawing::Size(220, 16);
			this->label_error->TabIndex = 6;
			this->label_error->Text = L"¬веден неверный логин/пароль!";
			this->label_error->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_error->Visible = false;
			// 
			// admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(560, 424);
			this->Controls->Add(this->label_error);
			this->Controls->Add(this->label_password);
			this->Controls->Add(this->label_login);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_login);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"admin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"јдминистратор";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		check_dannie();
	}

	private: Void check_dannie()
	{
		if ((this->textBox_login->Text == this->login) && (this->textBox_password->Text == this->password))
		{
			//this->label1->Text = "12121";
			this->LogOn = true;
			this->Close();
		}
		else
		{
			this->label_error->Visible = true;
			this->errorProvider1->SetError(label_error, "Login/password incorrect!");
			this->LogOn = false;
		}
	}

	private: System::Void textBox_password_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 13)
		{
			check_dannie();
		}
	}
};
}
