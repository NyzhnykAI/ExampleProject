#include "functions.h"
#include <stdio.h>
#include <memory.h>

// Functions
void function1(void) { // Function signature
	// Function body
}

void function2(int arg1, float arg2, double arg3, int* argArr1, double* argArr2) {
	int val = 0;
	if (argArr1 != NULL) {
		val = *argArr1;
	}

	printf("%d, %f, %f, %d, %f\n", arg1, arg2, arg3, val, (argArr2 == NULL) ? 0 : *argArr2);
}

int function3(int* arr, int size) {
	int count = 0;
	if (arr == NULL) {
		return -1;
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			count++;
		}
	}
	return count;
}

int* createArray(int size) {
	return calloc(size, sizeof(int));
}

void printInt(int arg)
{
	printf("%d", arg);
}

int processArray(int *arr, int size1, int size2) {
	int count = 0;
	if (arr == NULL) {
		return -1;
	}
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if ((*(arr + i*size1 + j)) > 0) {
				count++;
			}
		}
	}
	return count;
}

void changeVar(double* data) {
	*data = 100.0;
}

void readText(char* data, int textSize) {
	/*
	* Функция fgets() считывает до num-1 символов из файла stream и помещает их в массив символов,
	* на который указывает str. Символы считываются до тех пор, пока не встретится символ «новая строка»,
	* EOF или до достижения указанного предела. По окончании считывания в массив str сразу после 
	* последнего считанного символа помещается нулевой символ. Символ «новая строка» при считывании будет 
	* сохранен и станет частью массива str.
	*/
	fgets(data, textSize, stdin);
	if ((strlen(data) > 0) && (data[strlen(data) - 1] == '\n')) {
		data[strlen(data) - 1] = '\0';
	}
}

void fillArray(int* arr, int size, int lowerBound, int higherBound)
{
	int* ptr = arr;
	while (ptr <= arr[size - 1])
	{
		*ptr = rand() % (higherBound - lowerBound) + lowerBound;
		ptr++;
	}
}

void fillMatrix(int* matrix, int rows, int cols, int lowerBound, int higherBound)
{
	int* ptr = matrix;
	int i = 0;
	while (ptr <= (matrix + rows * cols - 1))
	{
		(*ptr) = (rand() % (higherBound - lowerBound)) + lowerBound;
		ptr++;
		i++;
	}
}

void changeVals(int* arg1, double* arg2, float* arg3)
{
	*arg1 = 100;
	*arg2 = 3.14;
	*arg3 = 3.14 * 2;
}

