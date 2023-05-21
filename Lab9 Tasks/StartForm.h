#pragma once

namespace Lab9Tasks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
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
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Task1Start;
	private: System::Windows::Forms::Button^ Task2Start;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ Task3Start;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Task4Start;

	private: System::Windows::Forms::Label^ label5;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Task1Start = (gcnew System::Windows::Forms::Button());
			this->Task2Start = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Task3Start = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Task4Start = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(442, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Лабораторная работа №9";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(45, 83);
			this->label2->MaximumSize = System::Drawing::Size(375, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(375, 42);
			this->label2->TabIndex = 1;
			this->label2->Text = L"1) Построить графики четырех функций: x^3, 2x^3, x^(3/2), (x/2)^3";
			// 
			// Task1Start
			// 
			this->Task1Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Task1Start->Location = System::Drawing::Point(150, 128);
			this->Task1Start->Name = L"Task1Start";
			this->Task1Start->Size = System::Drawing::Size(148, 40);
			this->Task1Start->TabIndex = 2;
			this->Task1Start->Text = L"Запустить";
			this->Task1Start->UseVisualStyleBackColor = true;
			this->Task1Start->Click += gcnew System::EventHandler(this, &StartForm::Task1Start_Click);
			// 
			// Task2Start
			// 
			this->Task2Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Task2Start->Location = System::Drawing::Point(150, 248);
			this->Task2Start->Name = L"Task2Start";
			this->Task2Start->Size = System::Drawing::Size(148, 40);
			this->Task2Start->TabIndex = 4;
			this->Task2Start->Text = L"Запустить";
			this->Task2Start->UseVisualStyleBackColor = true;
			this->Task2Start->Click += gcnew System::EventHandler(this, &StartForm::Task2Start_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(45, 203);
			this->label3->MaximumSize = System::Drawing::Size(375, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(357, 42);
			this->label3->TabIndex = 3;
			this->label3->Text = L"2) Построить график функции, заданной в параметрическом виде: Кардиоида";
			// 
			// Task3Start
			// 
			this->Task3Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Task3Start->Location = System::Drawing::Point(150, 389);
			this->Task3Start->Name = L"Task3Start";
			this->Task3Start->Size = System::Drawing::Size(148, 40);
			this->Task3Start->TabIndex = 6;
			this->Task3Start->Text = L"Запустить";
			this->Task3Start->UseVisualStyleBackColor = true;
			this->Task3Start->Click += gcnew System::EventHandler(this, &StartForm::Task3Start_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(45, 323);
			this->label4->MaximumSize = System::Drawing::Size(375, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(350, 63);
			this->label4->TabIndex = 5;
			this->label4->Text = L"3) Изобразить на экране квадрат, вращающийся в плоскости экрана вокруг своего цен"
				L"тра";
			// 
			// Task4Start
			// 
			this->Task4Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Task4Start->Location = System::Drawing::Point(150, 517);
			this->Task4Start->Name = L"Task4Start";
			this->Task4Start->Size = System::Drawing::Size(148, 40);
			this->Task4Start->TabIndex = 8;
			this->Task4Start->Text = L"Запустить";
			this->Task4Start->UseVisualStyleBackColor = true;
			this->Task4Start->Click += gcnew System::EventHandler(this, &StartForm::Task4Start_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(45, 451);
			this->label5->MaximumSize = System::Drawing::Size(375, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(374, 63);
			this->label5->TabIndex = 7;
			this->label5->Text = L"4) Организовать  смену картинок, загружаемых из созданных графических файлов, сфо"
				L"рмировать анимационный ролик";
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(460, 599);
			this->Controls->Add(this->Task4Start);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Task3Start);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Task2Start);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Task1Start);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"StartForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Лабораторная работа №9";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Заголовки функций
		private: System::Void Task1Start_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Task2Start_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Task3Start_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Task4Start_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
