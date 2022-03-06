#include <iostream>
//#include "NumberList.h"
#include "NumberList.cpp"
#include <stdlib.h>
#include <time.h> 

using namespace std;

int main() {
	NumberList NL;
	NL.Init();

	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		NL.Add(rand() % 100 + 5);
	std::cout << "Generated numberlist: "; NL.Print();

	NL.Sort();
	std::cout << "Sorted numberlist: "; NL.Print();
}