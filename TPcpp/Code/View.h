#pragma once
#include <string>
#include "Observer.h"

class View : public Observer
{
private :
	std::string title;											// Titre du menu

public :
	View(const std::string& _title);							// Constructeur
	void clear() const;											// Efface l'écran
	virtual void display() const;								// Affichage du nom du menu

};

