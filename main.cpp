#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

// ==================== ТОЧКА ВХОДУ ====================

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    LogicFunctions::MainForm form;
    Application::Run(%form);
    return 0;
}
