// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Sort.h"
#include "Search.h"
#include "MaxMin.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	char str[] = "9077909";
	Sort(str, sizeof(str));
	for (int i = 0; i < sizeof(str)- 1; i++) {
	cout << str[i] << endl;
	}
	int n = GetSearchBin(str, sizeof(str)-1, '1');
	cout << n << endl;
    return 0;
}

