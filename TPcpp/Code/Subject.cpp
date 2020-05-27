#include "Subject.h"

Subject::Subject()															//constructeur par défault
{

}

void Subject::addObserver(Observer* observer)							 // ajout d'un observer
{
	observers.push_back(observer);
}

void Subject::notify()											         
{
	for (int iObserver = 0; iObserver < observers.size(); ++iObserver)
	{
		observers[iObserver]->notify();
	}
}