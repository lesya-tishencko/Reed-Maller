#include "MainForm.h"

using namespace PictureProject;
using namespace PictureProject::Windows::Forms;

[STAThreadAttribute]
int main(array<System::String ^> ^args){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	PictureProject::MainForm form;
	Application::Run(%form);
	return 0;
}