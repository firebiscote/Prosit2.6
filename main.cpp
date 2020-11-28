#include "Home.h"
#include "pch.h"

[STAThreadAttribute]

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Prosit26::Home form;
    Application::Run(% form);
}
