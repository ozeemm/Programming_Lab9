#include "Task2Form.h"

using namespace System;
using namespace System::Windows::Forms;

double x, y, a, step, minX, maxX;

double degreesToRadians(double degrees)
{
	return degrees * Math::PI / 180;
}

// При запуске формы
void Lab9Tasks::Task2Form::Task2Form_Load(System::Object^ sender, System::EventArgs^ e)
{
	chart1->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
	chart1->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
	chart1->ChartAreas[0]->AxisX->Crossing = 0;
	chart1->ChartAreas[0]->AxisY->Crossing = 0;

	StartParams();
}

// Установка начальных парааметров
void Lab9Tasks::Task2Form::StartParams()
{
	InputA->Value = 10;
	InputMinX->Value = -100;
	InputMaxX->Value = 100;
	InputT->Value = 1;

	ColorButton->BackColor = chart1->Series[0]->Color;
}

// Отрисовка графика
void Lab9Tasks::Task2Form::DrawGraph()
{
	double a = (double)InputA->Value;
	double minX = (double)InputMinX->Value;
	double maxX = (double)InputMaxX->Value;
	step = (double)InputT->Value;	
	step = degreesToRadians(step); 

	double t = 0;
	double tMax = 2 * Math::PI;

	chart1->Series[0]->Points->Clear();

	while(t <= tMax)
	{
		x = a * Math::Cos(t) * (1 + Math::Cos(t));
		y = a * Math::Sin(t) * (1 + Math::Cos(t));
		if(x >= minX && x <= maxX)
			chart1->Series[0]->Points->AddXY(x, y);
		t += step;
	}
}