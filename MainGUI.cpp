#include "MainGUI.h"
#include "LoginGUI.h"

using namespace ATMMachineProject;


int main()
{
	Application::Run(gcnew LoginGUI());
	//Application::Run(gcnew MainGUI());

	return 0;
}
