#include "Application.h"

Application::Application()                           
	: controller(), viewMenu(controller)
{

}

void Application::run()
{
	controller.notify();
}