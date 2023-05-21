#include "Task1Form.h"
#include "math.h"

using namespace System;
using namespace System::Windows::Forms;

// Шаг графиков
const double step = 0.01;

double minY, maxY;

// Получение границ Y
void Lab9Tasks::Task1Form::GetYBounds()
{
	minY = (double)minY1->Value;
	maxY = (double)maxY1->Value;

	for (int i = 0; i < 4; i++) {
		DrawGraph(i);
	}
}

// Отрисовать график
void Lab9Tasks::Task1Form::DrawGraph(int num) 
{
	double minX, maxX, x, y;

	if (num == 0) {
		minX = (double)minX1->Value;
		maxX = (double)maxX1->Value;
	}
	if (num == 1) {
		minX = (double)minX2->Value;
		maxX = (double)maxX2->Value;
	}
	if (num == 2) {
		minX = (double)minX3->Value;
		maxX = (double)maxX3->Value;
	}
	if (num == 3) {
		minX = (double)minX4->Value;
		maxX = (double)maxX4->Value;
	}

	chart1->Series[num]->Points->Clear();

	x = minX;
	while (x <= maxX) {
		if (num == 0) {
			y = pow(x, 3);
			if(y > minY && y < maxY)
				chart1->Series[num]->Points->AddXY(x, y);
		}
		if (num == 1) {
			y = pow(2 * x, 3);
			if (y > minY && y < maxY)
				chart1->Series[num]->Points->AddXY(x, y);
		}
		if (num == 2 && x >= 0) {
			y = pow(x, 1.5);
			if (y > minY && y < maxY)
				chart1->Series[num]->Points->AddXY(x, y);
		}
		if (num == 3) {
			y = pow(x / 2, 3);
			if (y > minY && y < maxY)
				chart1->Series[num]->Points->AddXY(x, y);
		}

		
		x += step;
	}
}

void Lab9Tasks::Task1Form::Graph1Color_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		Graph1Color->BackColor = colorDialog1->Color;
		chart1->Series[0]->Color = colorDialog1->Color;
	}
}
void Lab9Tasks::Task1Form::Graph2Color_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		Graph2Color->BackColor = colorDialog1->Color;
		chart1->Series[1]->Color = colorDialog1->Color;
	}
}
void Lab9Tasks::Task1Form::Graph3Color_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		Graph3Color->BackColor = colorDialog1->Color;
		chart1->Series[2]->Color = colorDialog1->Color;
	}
}
void Lab9Tasks::Task1Form::Graph4Color_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		Graph4Color->BackColor = colorDialog1->Color;
		chart1->Series[3]->Color = colorDialog1->Color;
	}
}

// При запуске формы
void Lab9Tasks::Task1Form::Task1Form_Load(System::Object^ sender, System::EventArgs^ e)
{
	// Для отображения осей
	chart1->ChartAreas[0]->AxisX->MajorGrid->Enabled = false;
	chart1->ChartAreas[0]->AxisY->MajorGrid->Enabled = false;
	chart1->ChartAreas[0]->AxisX->Crossing = 0;
	chart1->ChartAreas[0]->AxisY->Crossing = 0;

	// Стартовые цвета кнопок изменения цвета
	Graph1Color->BackColor = chart1->Series[0]->Color;
	Graph2Color->BackColor = chart1->Series[1]->Color;
	Graph3Color->BackColor = chart1->Series[2]->Color;
	Graph4Color->BackColor = chart1->Series[3]->Color;

	GetYBounds();
	for (int i = 0; i < 4; i++) {
		DrawGraph(i);
	}
}