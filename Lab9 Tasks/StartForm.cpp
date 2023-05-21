#include "StartForm.h"
#include "Task1Form.h"
#include "Task2Form.h"
#include "Task3Form.h"
#include "Task4Form.h"

using namespace System;
using namespace System::Windows::Forms;

void Lab9Tasks::StartForm::Task1Start_Click(System::Object^ sender, System::EventArgs^ e)
{
	auto task1 = gcnew Lab9Tasks::Task1Form();
	task1->Show();
}

void Lab9Tasks::StartForm::Task2Start_Click(System::Object^ sender, System::EventArgs^ e)
{
	auto task2 = gcnew Lab9Tasks::Task2Form();
	task2->Show();
}

void Lab9Tasks::StartForm::Task3Start_Click(System::Object^ sender, System::EventArgs^ e)
{
	auto task3 = gcnew Lab9Tasks::Task3Form();
	task3->Show();
}

void Lab9Tasks::StartForm::Task4Start_Click(System::Object^ sender, System::EventArgs^ e)
{
	auto task4 = gcnew Lab9Tasks::Task4Form();
	task4->Show();
}