#include "Task3Form.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;

double _degreesToRadians(double degrees)
{
	return degrees * Math::PI / 180;
}

auto center = Point(150, 150);
double R = 100;
int speed = 1;
double alph = 0;

void Lab9Tasks::Task3Form::Task3Form_Load(System::Object^ sender, System::EventArgs^ e)
{

}

void Lab9Tasks::Task3Form::Task3Form_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	Graphics^ field = e->Graphics;

	field->Clear(Color::AntiqueWhite);
	Pen^ blackPen = gcnew Pen(Color::Black);
	blackPen->Width = 3;

	double alphRad, x, y;

	R = (double)InputSize->Value;
	speed = (int)InputSpeed->Value;

	alphRad = alph * Math::PI / 180;
	x = R * Math::Cos(alphRad);
	y = R * Math::Sin(alphRad);
	auto point1 = Point(center.X + x, center.Y + y);

	alphRad = (alph - 90) * Math::PI / 180;
	x = R * Math::Cos(alphRad);
	y = R * Math::Sin(alphRad);
	auto point2 = Point(center.X + x, center.Y + y);

	alphRad = (alph - 180) * Math::PI / 180;
	x = R * Math::Cos(alphRad);
	y = R * Math::Sin(alphRad);
	auto point3 = Point(center.X + x, center.Y + y);

	alphRad = (alph - 270) * Math::PI / 180;
	x = R * Math::Cos(alphRad);
	y = R * Math::Sin(alphRad);
	auto point4 = Point(center.X + x, center.Y + y);

	field->DrawLine(blackPen, point1, point2);
	field->DrawLine(blackPen, point2, point3);
	field->DrawLine(blackPen, point3, point4);
	field->DrawLine(blackPen, point4, point1);

	field->DrawRectangle(blackPen, 149, 149, 2, 2);	
}

void Lab9Tasks::Task3Form::timer_Tick(System::Object^ sender, System::EventArgs^ e)
{
	alph += speed;
	this->Refresh();
}