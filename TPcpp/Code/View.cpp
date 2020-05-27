#include "View.h"
#include <cstdlib>
#include <iostream>

View::View(const std::string& _title)
	:title(_title)
{

}

void View::clear() const
{
	system("CLS");

}

void View::display() const
{
	std::cout << title << std::endl << std::endl;

}