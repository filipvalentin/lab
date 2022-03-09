#include "Canvas.h"
#include <iostream>

int main() {

	Canvas* c = new Canvas(25, 60);

	c->DrawCircle(7, 8, 6, 'x');
	c->DrawRect(30, 17, 45, 24, '+');
	c->DrawLine(24, 0, 0, 49, '#');
	c->Print();

	std::cin.get();
	c->Clear();

	c->FillRect(3, 3, 10, 15, '*');
	c->FillCircle(10, 30, 8, 'o');
	c->DrawLine(24, 11, 0, 16, '/');
	
	c->Print();

	std::cin.get();
	c->Clear();
	
	c->DrawEllipse(10, 15, 2, 4, 5, '#');
	c->DrawEllipse(11, 40, 6, 2, 3, 'X');

	c->Print();
}