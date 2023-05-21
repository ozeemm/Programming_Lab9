#include "Task4Form.h"

using namespace System;
using namespace System::Resources;
using namespace System::Windows::Forms;

int i = 0;

void Lab9Tasks::Task4Form::timer_Tick(System::Object^ sender, System::EventArgs^ e)
{
	pictureBox1->Visible = true;
	pictureBox1->Image = imageList1->Images[i];
	i++;
	i %= imageList1->Images->Count;
}