#include <iostream>
#include "Calculator.h"

using namespace std;

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case('+'):
		return x + y;
	case('-'):
		return x - y;
	case('*'):
		return x * y;
	case('/'):
	{
		if (y == 0)
		{
			cout << "Division by 0!" << endl;
			mistake = true;
			return 0.0;
		}
		else
			return x / y;
	}
	case('^'):
		return pow(x, y);
	default:
	{
		cout << "Unknown mistake" << endl;
		mistake = true;
		return 0.0;
	}
	}
}
