#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
	return a * b + 0.5;
}

int Calculator::Increment (int x)
{
	return x + 1;
}

int Calculator::Decrement (int x)
{
	return x - 1;
}
