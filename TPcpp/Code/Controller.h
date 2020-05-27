#pragma once
#include "subject.h"
#include "Filtre.h"


class Controller : public Subject
{
private:
	int currentScreen;
public:

	Controller();										// Constructeur par défault
	void setScreen(const int& value);					// Setteur
	int getCurrentScreen();								// Getteur

};

