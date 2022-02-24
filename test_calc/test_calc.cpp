#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	double x = 0.0;
	double y = 0.0;
	char oper = ' ';
	bool out_cycle = false;
    cout << "Console calculator" << endl;
	while (!out_cycle)
	{
		char cont = 'y';
		Calculator calc;
		cout << "Please enter the operation to perform:" << endl;
		cin >> x >> oper >> y;
		cout << "Result: " << calc.Calculate(x, oper, y) << endl << "Is a mistace: ";
		if (calc.mistake)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
		do
		{
			cout << "Continue? [y/n]";
			cin >> cont;
			if ((cont != 'y') && (cont != 'n'))
				cout << "Please type y for yes or n for no" << endl;
		} while ((cont != 'y') && (cont != 'n'));
		switch (cont)
		{
		case('y'):
		{
			out_cycle = false;
			break;
		}
		case('n'):
		{
			out_cycle = true;
			break;
		}
		}
	}
	return 0;
}
