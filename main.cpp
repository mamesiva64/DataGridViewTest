#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false); 
  Application::Run(gcnew DataGridViewTest::MyForm()); 
  return 0;
}