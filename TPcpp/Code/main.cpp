
#include "Application.h"
#include "Filtre.h"


int main()
{
    int b;
    b = 1;
    while (b != 0)                                                              //création d'une boucle en cas d'erreur ou de poursuite du programme
    {

        Application application;                                               //création de l'application (menu et architecture MVC)
        application.run();
        Filtre filtre;                                                         // ajout des filtres
        filtre.Choix();
        std::cout << "                                        " << std::endl;
        std::cout << "Voulez-vous choisir un nouveau filtre ?" << std::endl;
        std::cout << "        oui = 1         non = 0         " << std::endl;
        std::cin >> b;

    }
   
}