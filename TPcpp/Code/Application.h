#pragma once
#include "Controller.h"
#include "View-Menu.h"
#include "Filtre.h"

class Application
{
private:
	Controller controller;
	ViewMenu viewMenu;
	Filtre filtre;

public:

	Application();                           //constructeur par d�fault
	void run();								 //Fonction lien avec le controller

};
