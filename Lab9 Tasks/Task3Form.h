#pragma once

namespace Lab9Tasks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task3Form
	/// </summary>
	public ref class Task3Form : public System::Windows::Forms::Form
	{
	public:
		Task3Form(void)
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
		~Task3Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ InputSpeed;
	private: System::Windows::Forms::NumericUpDown^ InputSize;



	private: System::Windows::Forms::Label^ label2;
	protected:

	protected:

	protected:

	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->InputSpeed = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputSpeed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputSize))->BeginInit();
			this->SuspendLayout();
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 5;
			this->timer->Tick += gcnew System::EventHandler(this, &Task3Form::timer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Скорость:";
			// 
			// InputSpeed
			// 
			this->InputSpeed->Location = System::Drawing::Point(76, 12);
			this->InputSpeed->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->InputSpeed->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputSpeed->Name = L"InputSpeed";
			this->InputSpeed->Size = System::Drawing::Size(70, 20);
			this->InputSpeed->TabIndex = 1;
			this->InputSpeed->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// InputSize
			// 
			this->InputSize->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->InputSize->Location = System::Drawing::Point(230, 12);
			this->InputSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->InputSize->Name = L"InputSize";
			this->InputSize->Size = System::Drawing::Size(70, 20);
			this->InputSize->TabIndex = 3;
			this->InputSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(175, 14);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Размер:";
			// 
			// Task3Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(312, 311);
			this->Controls->Add(this->InputSize);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->InputSpeed);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Task3Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Задание 3";
			this->Load += gcnew System::EventHandler(this, &Task3Form::Task3Form_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Task3Form::Task3Form_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputSpeed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputSize))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Task3Form_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Task3Form_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
		private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e);
		
	};
}
