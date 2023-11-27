#pragma once
#include "Workers.h"

extern std::vector<Worker> Workers;


namespace AutoWash {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class CalculateWorkerSalary : public System::Windows::Forms::Form
	{
	public:
		CalculateWorkerSalary(void)
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
		~CalculateWorkerSalary()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label4;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ ChooseWorker;

	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ChooseWorker = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(35, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(213, 24);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Обчислити зарплату";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(81, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 39);
			this->button1->TabIndex = 15;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(98, 77);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Працівник";
			// 
			// ChooseWorker
			// 
			this->ChooseWorker->FormattingEnabled = true;
			this->ChooseWorker->Location = System::Drawing::Point(81, 100);
			this->ChooseWorker->Name = L"ChooseWorker";
			this->ChooseWorker->Size = System::Drawing::Size(121, 21);
			this->ChooseWorker->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(77, 146);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 20);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Зарплата:";
			// 
			// CalculateWorkerSalary
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(284, 240);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ChooseWorker);
			this->Name = L"CalculateWorkerSalary";
			this->Text = L"CarWash";
			this->Load += gcnew System::EventHandler(this, &CalculateWorkerSalary::CalculateWorkerSalary_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CalculateWorkerSalary_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < Workers.size(); i++) {
			ChooseWorker->Items->Add(gcnew System::String(Workers[i].GetName().c_str()));
		}
	}
};
}