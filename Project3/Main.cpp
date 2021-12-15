#include "Main.h"
#include "zapros.h"
#include "file_warn.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::Main form;
	Application::Run(% form);
}
