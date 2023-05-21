#pragma once

namespace Lab9Tasks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task2Form
	/// </summary>
	public ref class Task2Form : public System::Windows::Forms::Form
	{
	public:
		Task2Form(void)
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
		~Task2Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::Button^ ColorButton;
	private: System::Windows::Forms::NumericUpDown^ InputMinX;
	private: System::Windows::Forms::NumericUpDown^ InputMaxX;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ InputT;

	private: System::Windows::Forms::NumericUpDown^ InputA;
	private: System::Windows::Forms::Button^ DrawButton;
	private: System::Windows::Forms::Button^ ClearButton;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ColorButton = (gcnew System::Windows::Forms::Button());
			this->InputMinX = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputMaxX = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->InputT = (gcnew System::Windows::Forms::NumericUpDown());
			this->InputA = (gcnew System::Windows::Forms::NumericUpDown());
			this->DrawButton = (gcnew System::Windows::Forms::Button());
			this->ClearButton = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMinX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMaxX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputA))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(12, 117);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Black;
			series1->IsVisibleInLegend = false;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(460, 400);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			title1->Name = L"Title1";
			title1->Text = L"Кардиоида";
			this->chart1->Titles->Add(title1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(20, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(166, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x = a * (1+cos t) * cos t";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(20, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"y = a * (1+cos t) * sin t";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(209, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Цвет:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(209, 15);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"a = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(209, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Шаг t (в градусах):";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(209, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Диапазон X:";
			// 
			// ColorButton
			// 
			this->ColorButton->Location = System::Drawing::Point(257, 91);
			this->ColorButton->Name = L"ColorButton";
			this->ColorButton->Size = System::Drawing::Size(115, 20);
			this->ColorButton->TabIndex = 7;
			this->ColorButton->UseVisualStyleBackColor = true;
			this->ColorButton->Click += gcnew System::EventHandler(this, &Task2Form::ColorButton_Click);
			// 
			// InputMinX
			// 
			this->InputMinX->DecimalPlaces = 1;
			this->InputMinX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputMinX->Location = System::Drawing::Point(318, 64);
			this->InputMinX->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->InputMinX->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->InputMinX->Name = L"InputMinX";
			this->InputMinX->Size = System::Drawing::Size(64, 23);
			this->InputMinX->TabIndex = 8;
			// 
			// InputMaxX
			// 
			this->InputMaxX->DecimalPlaces = 1;
			this->InputMaxX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputMaxX->Location = System::Drawing::Point(408, 64);
			this->InputMaxX->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->InputMaxX->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, System::Int32::MinValue });
			this->InputMaxX->Name = L"InputMaxX";
			this->InputMaxX->Size = System::Drawing::Size(64, 23);
			this->InputMaxX->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(388, 64);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"-";
			// 
			// InputT
			// 
			this->InputT->DecimalPlaces = 1;
			this->InputT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputT->Location = System::Drawing::Point(360, 40);
			this->InputT->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 360, 0, 0, 0 });
			this->InputT->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputT->Name = L"InputT";
			this->InputT->Size = System::Drawing::Size(68, 23);
			this->InputT->TabIndex = 11;
			this->InputT->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// InputA
			// 
			this->InputA->DecimalPlaces = 1;
			this->InputA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InputA->Location = System::Drawing::Point(243, 15);
			this->InputA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10000, 0, 0, 0 });
			this->InputA->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->InputA->Name = L"InputA";
			this->InputA->Size = System::Drawing::Size(68, 23);
			this->InputA->TabIndex = 12;
			this->InputA->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// DrawButton
			// 
			this->DrawButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DrawButton->Location = System::Drawing::Point(290, 523);
			this->DrawButton->Name = L"DrawButton";
			this->DrawButton->Size = System::Drawing::Size(138, 29);
			this->DrawButton->TabIndex = 13;
			this->DrawButton->Text = L"Построить";
			this->DrawButton->UseVisualStyleBackColor = true;
			this->DrawButton->Click += gcnew System::EventHandler(this, &Task2Form::DrawButton_Click);
			// 
			// ClearButton
			// 
			this->ClearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearButton->Location = System::Drawing::Point(28, 523);
			this->ClearButton->Name = L"ClearButton";
			this->ClearButton->Size = System::Drawing::Size(138, 29);
			this->ClearButton->TabIndex = 14;
			this->ClearButton->Text = L"Очистить";
			this->ClearButton->UseVisualStyleBackColor = true;
			this->ClearButton->Click += gcnew System::EventHandler(this, &Task2Form::ClearButton_Click);
			// 
			// Task2Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 591);
			this->Controls->Add(this->ClearButton);
			this->Controls->Add(this->DrawButton);
			this->Controls->Add(this->InputA);
			this->Controls->Add(this->InputT);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->InputMaxX);
			this->Controls->Add(this->InputMinX);
			this->Controls->Add(this->ColorButton);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Task2Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Задание 2";
			this->Load += gcnew System::EventHandler(this, &Task2Form::Task2Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMinX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputMaxX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->InputA))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void StartParams();
		private: void DrawGraph();
		private: System::Void Task2Form_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void ClearButton_Click(System::Object^ sender, System::EventArgs^ e) {
			chart1->Series[0]->Points->Clear();
		}
		private: System::Void DrawButton_Click(System::Object^ sender, System::EventArgs^ e) {
			DrawGraph();
		}
		private: System::Void ColorButton_Click(System::Object^ sender, System::EventArgs^ e) {
			if(colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				ColorButton->BackColor = colorDialog1->Color;
				chart1->Series[0]->Color = colorDialog1->Color;
			}
		}
};
}
