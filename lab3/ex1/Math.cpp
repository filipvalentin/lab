#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "Math.h"


int Math::Add(int a, int b) {
	return a + b;
}

int Math::Add(int a, int b, int c) {
	return a + b + c;
}

int Math::Add(double a, double b) {
	return a + b;
}

int Math::Add(double a, double b, double c) {
	return a + b + c;
}

int Math::Mul(int a, int b) {
	return a * b;
}

int Math::Mul(int a, int b, int c) {
	return a * b * c;
}

int Math::Mul(double a, double b) {
	return a * b;
}

int Math::Mul(double a, double b, double c) {
	return a * b * c;
}

int Math::Add(int count, ...) {
	va_list valist;
	int sum = 0;

	va_start(valist,	 count);

	for (int i = 0; i < count; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return sum;
}

#pragma warning(disable : 4996)

char* Math::Add(const char* a, const char* b) {
	if (a == nullptr || b == nullptr) 
		return nullptr;

	int a_length = strlen(a);
	static char c[255];

	for (int i = 0; i < a_length; i++)
		c[i] = a[i];
	for (int i = 0; i < strlen(b); i++)
		c[a_length + i] = b[i];


	return c;
}