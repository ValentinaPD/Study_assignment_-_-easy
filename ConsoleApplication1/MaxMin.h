#pragma once
/*
Поиск минимального элемента в массиве
Входные даннные: Указатель на массив, длинна массива.
Выходные даннные: минимальный элемент массива.
*/
char GetMin(char *str, int lenght) {
	char min = str[0];
	for (int i = 0; i < lenght - 1; i++) {
		if (min >= str[i])min = str[i];
	}
	return min;
}
/*
Поиск минимального элемента в массиве с границами
Входные даннные: Указатель на массив, нижняя граница, верхняя граница.
Выходные даннные: минимальный элемент массива.
*/
char GetMin(char *str, int minLenght, int maxLenght) {
	char min = str[minLenght - 1];
	for (int i = minLenght - 1; i < maxLenght - 1; i++) {
		if (min >= str[i])min = str[i];
	}
	return min;
}
/*
Поиск максимального элемента в массиве с границами
Входные даннные: Указатель на массив, нижняя граница, верхняя граница.
Выходные даннные: максимальный элемент массива.
*/
char GetMinNumber(char *str, int minLenght, int maxLenght) {
	char min = str[minLenght];
	int minNumber = 0;
	for (int i = minLenght; i < maxLenght; i++) {
		if (min >= str[i]) {
			minNumber = i;
			min = str[i];
		}
	}
	return minNumber;
}
/*
Поиск максимального  элемента в массиве
Входные даннные: Указатель на массив, длинна массива.
Выходные даннные: максимальный элемент массива.
*/
char GetMax(char *str, int lenght) {
	char max = str[0];
	for (int i = 0; i < lenght - 1; i++) {
		if (max <= str[i])max = str[i];
	}
	return max;
}

