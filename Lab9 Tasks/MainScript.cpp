#include "StartForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	// ������� ��������� ��� ������� �����
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// ������ �����
	Lab9Tasks::StartForm form;
	Application::Run(% form);
}