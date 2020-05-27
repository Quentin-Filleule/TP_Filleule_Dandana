#include "View-Menu.h"
#include <iostream>

ViewMenu::ViewMenu(Controller& _controller)
	:View("Bien le bonjour"), controller(_controller)
{
controller.addObserver(this);
}



void ViewMenu::notify()
{
	 if(controller.getCurrentScreen() == 0)
	display();
}

void ViewMenu::display()
{
	clear();
	View::display();

	
	std::cout << "Voici notre application, veuillez lire le manuel d'utilisation avant de commencer" << std::endl<< std::endl;

	std::cout << "1 : Filtre median                        |" << std::endl;
	std::cout << "2 : Filtre gaussien                      |" << std::endl;
	std::cout << "3 : Calcul du gradient dans une image    |" << std::endl;
	std::cout << "4 : Dilatation                           |" << std::endl;
	std::cout << "5 : Erosion                              |" << std::endl;
	std::cout << "6 : Detecteur de contours Canny          |" << std::endl;
	std::cout << "7 : Operations de seuillages             |" << std::endl;
	std::cout << "8 : Segmentation par croissance de region|" << std::endl;
	std::cout << "__________________________________________________________________" << std::endl << std::endl;

	std::cout << "Veuillez choisir un nombre pour acceder a une des fonctionnalites " << std::endl;

}