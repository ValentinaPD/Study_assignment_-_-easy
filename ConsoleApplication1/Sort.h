#pragma once
#include <iostream>
#include "MaxMin.h"
using namespace std;

/*
���������� �������
������� �������: ��������� �� ������, ������ �������.
�������� �������: ��������������� ������.
���� ����������� ������� � ��������� �� i �� ���������� �������� �������, � ������ ��� ������� � i-� ���������.
*/
void Sort(char *str, int lenght) {
	for (int i = 0; i < lenght ; i++) {
		char x = str[i];
		char minNumber = GetMinNumber(str,i, lenght);
		str[i] = str[minNumber];
		str[minNumber] = x;
	}

}
/* 
���������� ������� �������� ���� � �� �������� � ���������:-)
������� �������: ��������� �� ������, ������ �������.
�������� �������: ��������������� ������.
���������� i-� ������� �� ���������, ���� ������� i+1>i, �� ������ �������
*/
void SortPuz(char *str, int lenght) {

	for (int i = 0; i < lenght - 1; i++) {
		for (int j = 0; j < lenght - i - 1; j++) {
			char x = '0';
			if (str[j] > str[j + 1]) {
				x = str[j];
				str[j] = str[j + 1];
				str[j + 1] = x;
			}
		}
	}
}
