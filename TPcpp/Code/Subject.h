#pragma once
#include <vector>
#include "Observer.h"

class Subject
{
	std::vector<Observer*> observers;							// Tableau dynamique d'observers
public:
	Subject();													// Constructeur par défault
	void addObserver(Observer* observer);						// Ajout D'observers
	void notify();												// Lien avec le cotroller
};
