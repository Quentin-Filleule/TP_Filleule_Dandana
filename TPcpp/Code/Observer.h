#pragma once
class Observer
{
public :
	virtual void notify() = 0;								//contrat pour que les class enfants soient li�es avec le controller
};
