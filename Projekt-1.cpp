#include "stdafx.h"
#include <iostream>
#include "io.h"
using namespace std;

void readNumber();
int writeNumber();

int main()
{
	int x = readNumber();
	int y = readNumber();
	writeAnswer(x + y);
	return 0;
}