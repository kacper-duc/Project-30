#include "stdafx.h"
#include <iostream>
//#include "io.cpp"
using namespace std;

int a, b;

void readNumber()
{
	cout << "Please enter first number: ";
	cin >> a;
	cout << endl << "Please enter second number: ";
	cin >> b;
	cout << endl << "The sum is equal to: ";
}

int writeNumber()
{
	return a + b;
}

int main()
{
	readNumber();
	cout << writeNumber() << endl;
	system("pause");
    return 0;
}

