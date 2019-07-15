// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void PassByValue(int)

void PassByValue() :
	cout << "name of function is: PassByValue" << endl;

int main()
{
	int num1, num2;
	int *pNum = &num2;
	num1 = 3;
	*pNum = 5;

	PassByValue(num1);

    return 0;
}

void PassByValue(int a) {
	cout << "name of function is: PassByValue" << endl;
	cout << "value of a is: " << a << endl;

	a++;
	cout << "value of a now is: " << a << endl;
}
