#include "StartForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	// Базовые настройки для запуска формы
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	// Запуск формы
	Lab9Tasks::StartForm form;
	Application::Run(% form);
}