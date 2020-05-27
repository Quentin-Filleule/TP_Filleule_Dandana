#include "Observer.h"
#include "View.h"
#include "controller.h"

class ViewMenu : public View
{
private: 
	Controller& controller;
public:
	ViewMenu(Controller& _controller);							// Constructeur 
	virtual void notify();										// Lien avec le controller
	virtual void display();										// Affiche le menu

};

