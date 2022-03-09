#include <iostream>
#include "Math.h"

int main(){

	std::cout << Math::Add(100, 67) << std::endl;
	std::cout << Math::Add(100, 67, 0) << std::endl;
	std::cout << Math::Add(100.5, 2.5) << std::endl;
	std::cout << Math::Add(100.5, 2.5, 1.5) << std::endl;
	std::cout << Math::Mul(100, 5) << std::endl;
	std::cout << Math::Mul(100, 5, 5) << std::endl;
	std::cout << Math::Mul(100.5, 5.5) << std::endl;
	std::cout << Math::Mul(100.5, 5.5, 2.25) << std::endl;
	std::cout << Math::Add(5, 90000, 300, 400, 500, 1) << std::endl;
	std::cout<<Math::Add("3aae21", "933");
   
}
