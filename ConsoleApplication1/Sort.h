#pragma once
#include <iostream>
#include "MaxMin.h"
using namespace std;

/*
Сортировка массива
Входные даннные: Указатель на массив, длинна массива.
Выходные даннные: Отсортированный массив.
Ищем минимальный элемент в диапозоне от i до последнего элемента массива, и меняем его местами с i-м элементом.
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
Сортировка методом пузырька если я не ошибаюсь с названием:-)
Входные даннные: Указатель на массив, длинна массива.
Выходные даннные: Отсортированный массив.
Сравниваем i-й элемент со следующим, если элемент i+1>i, то меняем местами
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
