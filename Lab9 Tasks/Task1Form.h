#pragma once

namespace Lab9Tasks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task1Form
	/// </summary>
	public ref class Task1Form : public System::Windows::Forms::Form
	{
	public:
		Task1Form(void)
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
		~Task1Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ minX1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ maxX1;
	private: System::Windows::Forms::NumericUpDown^ maxX2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ minX2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ maxX4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ minX4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ maxX3;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ minX3;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ DebugText;
	private: System::Windows::Forms::NumericUpDown^ maxY1;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ minY1;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ Graph1Color;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ Graph2Color;
	private: System::Windows::Forms::Button^ Graph3Color;
	private: System::Windows::Forms::Button^ Graph4Color;


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
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->minX1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maxX1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->maxX2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->minX2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->maxX4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->minX4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maxX3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->minX3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->DebugText = (gcnew System::Windows::Forms::Label());
			this->maxY1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->minY1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Graph1Color = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->Graph2Color = (gcnew System::Windows::Forms::Button());
			this->Graph3Color = (gcnew System::Windows::Forms::Button());
			this->Graph4Color = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minX1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxX1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxX2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minX2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxX4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minX4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxX3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minX3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxY1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minY1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->AxisX->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->AxisX->IsLabelAutoFit = false;
			chartArea1->AxisY->IntervalAutoMode = System::Windows::Forms::DataVisualization::Charting::IntervalAutoMode::VariableCount;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->AutoFitMinFontSize = 8;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(31, 189);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->LegendText = L"x^3";
			series1->Name = L"Series1";
			series2->BorderWidth = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series2->Legend = L"Legend1";
			series2->LegendText = L"2x^3";
			series2->Name = L"Series2";
			series3->BorderWidth = 2;
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series3->Legend = L"Legend1";
			series3->LegendText = L"x^(3/2)";
			series3->Name = L"Series3";
			series4->BorderWidth = 2;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Blue;
			series4->Legend = L"Legend1";
			series4->LegendText = L"(x/2)^3";
			series4->Name = L"Series4";
			series5->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Top;
			series5->BorderWidth = 3;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Color = System::Drawing::Color::Black;
			series5->IsVisibleInLegend = false;
			series5->LabelBackColor = System::Drawing::Color::Black;
			series5->LabelBorderColor = System::Drawing::Color::Black;
			series5->Legend = L"Legend1";
			series5->Name = L"Series5";
			series6->BorderWidth = 3;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Color = System::Drawing::Color::Black;
			series6->IsVisibleInLegend = false;
			series6->Legend = L"Legend1";
			series6->Name = L"Series6";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Series->Add(series4);
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Size = System::Drawing::Size(503, 314);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(109, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x^3:";
			// 
			// minX1
			// 
			this->minX1->DecimalPlaces = 1;
			this->minX1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minX1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->minX1->Location = System::Drawing::Point(155, 25);
			this->minX1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->minX1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, System::Int32::MinValue });
			this->minX1->Name = L"minX1";
			this->minX1->Size = System::Drawing::Size(80, 26);
			this->minX1->TabIndex = 2;
			this->minX1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->minX1->ValueChanged += gcnew System::EventHandler(this, &Task1Form::minX1_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(241, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(15, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"-";
			// 
			// maxX1
			// 
			this->maxX1->DecimalPlaces = 1;
			this->maxX1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maxX1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->maxX1->Location = System::Drawing::Point(262, 25);
			this->maxX1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->maxX1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, System::Int32::MinValue });
			this->maxX1->Name = L"maxX1";
			this->maxX1->Size = System::Drawing::Size(80, 26);
			this->maxX1->TabIndex = 4;
			this->maxX1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->maxX1->ValueChanged += gcnew System::EventHandler(this, &Task1Form::maxX1_ValueChanged);
			// 
			// maxX2
			// 
			this->maxX2->DecimalPlaces = 1;
			this->maxX2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maxX2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->maxX2->Location = System::Drawing::Point(262, 57);
			this->maxX2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->maxX2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, System::Int32::MinValue });
			this->maxX2->Name = L"maxX2";
			this->maxX2->Size = System::Drawing::Size(80, 26);
			this->maxX2->TabIndex = 8;
			this->maxX2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 65536 });
			this->maxX2->ValueChanged += gcnew System::EventHandler(this, &Task1Form::maxX2_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(241, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"-";
			// 
			// minX2
			// 
			this->minX2->DecimalPlaces = 1;
			this->minX2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minX2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->minX2->Location = System::Drawing::Point(155, 57);
			this->minX2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->minX2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, System::Int32::MinValue });
			this->minX2->Name = L"minX2";
			this->minX2->Size = System::Drawing::Size(80, 26);
			this->minX2->TabIndex = 6;
			this->minX2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, -2147418112 });
			this->minX2->ValueChanged += gcnew System::EventHandler(this, &Task1Form::minX2_ValueChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(99, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"2x^3:";
			// 
			// maxX4
			// 
			this->maxX4->DecimalPlaces = 1;
			this->maxX4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maxX4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->maxX4->Location = System::Drawing::Point(262, 123);
			this->maxX4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->maxX4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, System::Int32::MinValue });
			this->maxX4->Name = L"maxX4";
			this->maxX4->Size = System::Drawing::Size(80, 26);
			this->maxX4->TabIndex = 16;
			this->maxX4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->maxX4->ValueChanged += gcnew System::EventHandler(this, &Task1Form::maxX4_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(241, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(15, 20);
			this->label5->TabIndex = 15;
			this->label5->Text = L"-";
			// 
			// minX4
			// 
			this->minX4->DecimalPlaces = 1;
			this->minX4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minX4->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->minX4->Location = System::Drawing::Point(155, 123);
			this->minX4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->minX4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, System::Int32::MinValue });
			this->minX4->Name = L"minX4";
			this->minX4->Size = System::Drawing::Size(80, 26);
			this->minX4->TabIndex = 14;
			this->minX4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->minX4->ValueChanged += gcnew System::EventHandler(this, &Task1Form::minX4_ValueChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(88, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"(x/2)^3:";
			// 
			// maxX3
			// 
			this->maxX3->DecimalPlaces = 1;
			this->maxX3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maxX3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->maxX3->Location = System::Drawing::Point(262, 91);
			this->maxX3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->maxX3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, System::Int32::MinValue });
			this->maxX3->Name = L"maxX3";
			this->maxX3->Size = System::Drawing::Size(80, 26);
			this->maxX3->TabIndex = 12;
			this->maxX3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->maxX3->ValueChanged += gcnew System::EventHandler(this, &Task1Form::maxX3_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(241, 93);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(15, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"-";
			// 
			// minX3
			// 
			this->minX3->DecimalPlaces = 1;
			this->minX3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minX3->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->minX3->Location = System::Drawing::Point(155, 91);
			this->minX3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->minX3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, System::Int32::MinValue });
			this->minX3->Name = L"minX3";
			this->minX3->Size = System::Drawing::Size(80, 26);
			this->minX3->TabIndex = 10;
			this->minX3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, System::Int32::MinValue });
			this->minX3->ValueChanged += gcnew System::EventHandler(this, &Task1Form::minX3_ValueChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(82, 93);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(67, 20);
			this->label8->TabIndex = 9;
			this->label8->Text = L"x^(3/2):";
			// 
			// DebugText
			// 
			this->DebugText->AutoSize = true;
			this->DebugText->Location = System::Drawing::Point(31, 170);
			this->DebugText->Name = L"DebugText";
			this->DebugText->Size = System::Drawing::Size(0, 13);
			this->DebugText->TabIndex = 17;
			// 
			// maxY1
			// 
			this->maxY1->DecimalPlaces = 1;
			this->maxY1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->maxY1->Location = System::Drawing::Point(262, 157);
			this->maxY1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->maxY1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->maxY1->Name = L"maxY1";
			this->maxY1->Size = System::Drawing::Size(80, 26);
			this->maxY1->TabIndex = 21;
			this->maxY1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->maxY1->ValueChanged += gcnew System::EventHandler(this, &Task1Form::maxY1_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(241, 159);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"-";
			// 
			// minY1
			// 
			this->minY1->DecimalPlaces = 1;
			this->minY1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minY1->Location = System::Drawing::Point(155, 157);
			this->minY1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->minY1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, System::Int32::MinValue });
			this->minY1->Name = L"minY1";
			this->minY1->Size = System::Drawing::Size(80, 26);
			this->minY1->TabIndex = 19;
			this->minY1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, System::Int32::MinValue });
			this->minY1->ValueChanged += gcnew System::EventHandler(this, &Task1Form::minY1_ValueChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(123, 159);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Y:";
			// 
			// Graph1Color
			// 
			this->Graph1Color->Location = System::Drawing::Point(349, 25);
			this->Graph1Color->Name = L"Graph1Color";
			this->Graph1Color->Size = System::Drawing::Size(26, 26);
			this->Graph1Color->TabIndex = 22;
			this->Graph1Color->UseVisualStyleBackColor = true;
			this->Graph1Color->Click += gcnew System::EventHandler(this, &Task1Form::Graph1Color_Click);
			// 
			// Graph2Color
			// 
			this->Graph2Color->Location = System::Drawing::Point(349, 57);
			this->Graph2Color->Name = L"Graph2Color";
			this->Graph2Color->Size = System::Drawing::Size(26, 26);
			this->Graph2Color->TabIndex = 23;
			this->Graph2Color->UseVisualStyleBackColor = true;
			this->Graph2Color->Click += gcnew System::EventHandler(this, &Task1Form::Graph2Color_Click);
			// 
			// Graph3Color
			// 
			this->Graph3Color->Location = System::Drawing::Point(349, 91);
			this->Graph3Color->Name = L"Graph3Color";
			this->Graph3Color->Size = System::Drawing::Size(26, 26);
			this->Graph3Color->TabIndex = 24;
			this->Graph3Color->UseVisualStyleBackColor = true;
			this->Graph3Color->Click += gcnew System::EventHandler(this, &Task1Form::Graph3Color_Click);
			// 
			// Graph4Color
			// 
			this->Graph4Color->Location = System::Drawing::Point(349, 123);
			this->Graph4Color->Name = L"Graph4Color";
			this->Graph4Color->Size = System::Drawing::Size(26, 26);
			this->Graph4Color->TabIndex = 25;
			this->Graph4Color->UseVisualStyleBackColor = true;
			this->Graph4Color->Click += gcnew System::EventHandler(this, &Task1Form::Graph4Color_Click);
			// 
			// Task1Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 531);
			this->Controls->Add(this->Graph4Color);
			this->Controls->Add(this->Graph3Color);
			this->Controls->Add(this->Graph2Color);
			this->Controls->Add(this->Graph1Color);
			this->Controls->Add(this->maxY1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->minY1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->DebugText);
			this->Controls->Add(this->maxX4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->minX4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->maxX3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->minX3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->maxX2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->minX2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->maxX1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->minX1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Task1Form";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Задание 1";
			this->Load += gcnew System::EventHandler(this, &Task1Form::Task1Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minX1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxX1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxX2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minX2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxX4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minX4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxX3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minX3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxY1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minY1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void DrawGraph(int num);
		private: void GetYBounds();
		private: System::Void Task1Form_Load(System::Object^ sender, System::EventArgs^ e);
		private: System::Void minX1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			DrawGraph(0);
		}
		private: System::Void maxX1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			DrawGraph(0);
		}
		private: System::Void minX2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			DrawGraph(1);
		}
		private: System::Void maxX2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			DrawGraph(1);
		}
		private: System::Void minX3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			DrawGraph(2);
		}
		private: System::Void maxX3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			DrawGraph(2);
		}
		private: System::Void minX4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			DrawGraph(3);
		}
		private: System::Void maxX4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			DrawGraph(3);
		}
		private: System::Void minY1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			GetYBounds();
		}
		private: System::Void maxY1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			GetYBounds();
		}
		private: System::Void Graph1Color_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Graph2Color_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Graph3Color_Click(System::Object^ sender, System::EventArgs^ e);
		private: System::Void Graph4Color_Click(System::Object^ sender, System::EventArgs^ e);

};
}
