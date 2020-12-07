#ifndef __FUNCTIONS__
#define __FUNCTIONS__

#define TEXT_SIZE_LIMIT 256

// Functions
void function1(void);

void function2(int arg1, float arg2, double arg3, int* argArr1, double* argArr2);

int function3(int* arr, int size);

int* createArray(int size);

void printInt(int);

int processArray(int** arr, int size1, int size2);

void changeVar(double* data);

void readText(char* data, int textSize);

// ADDED
// Function to fill array
void fillArray(int* arr, int size, int lowerBound, int higherBound);

// Function to fill matrix
void fillMatrix(int** matrix, int rows, int cols, int lowerBound, int higherBound);

// Function to change outer values inside function
void changeVals(int* arg1, double *arg2, float* arg3);

#endif // __FUNCTIONS__


//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//#pragma warning(disable: 4996)
//
//int main()
//{
//	while (true)
//	{
//		size_t size = 256;
//		char* what = (char*)malloc(size);
//		char* on = (char*)malloc(size);
//		char* text = (char*)malloc(size);
//
//		printf("the text: ");
//		gets_s(text, size);
//
//		printf("what: ");
//		gets_s(what, size);
//
//		printf("on: ");
//		gets_s(on, size);
//
//		int base_size = strlen(what);
//		int text_size = strlen(text);
//		char* buff = (char*)malloc(base_size + 1);
//
//		for (rsize_t i = 0; i < strlen(text) + 1 - base_size; i++)
//		{
//			memcpy(buff, text + i, base_size);
//			buff[base_size] = '\0';
//
//			if (strcmp(buff, what) == 0)
//			{
//				char* other_text = (char*)malloc(256);
//				memcpy(other_text, text + i + strlen(what), text_size - base_size);
//				other_text[text_size - base_size] = '\0';
//
//				memcpy(text + i, on, strlen(on));
//				text[i + strlen(on)] = '\0';
//
//				char* result = (char*)malloc(256);
//				memcpy(result, text, strlen(text));
//				memcpy(result + strlen(text), other_text, strlen(other_text));
//				result[strlen(text) + strlen(other_text)] = '\0';
//
//				memcpy(text, result, strlen(result));
//				text[strlen(result)] = '\0';
//
//				free(result);
//				free(other_text);
//			}
//		}
//
//		printf("result text: %s\n", text);
//		printf("============================================\n");
//
//		free(what);
//		free(on);
//		free(buff);
//		free(text);
//	}
//
//
//
//
//
//}
//
//
////#include <stdio.h>
////#include <string.h>
////
////int main() {
////	char str[100];
////	printf("Write sentence:\n\n\n");
////	gets_s(str, 100);
////	char* context;
////	char* s = strtok_s(str, " ", &context);
////	char* maxword = "";
////	while (s != NULL) {
////
////			char* s_dup = _strdup(s);
////			_strrev(s);
////			if (_strcmpi(s_dup, s) == 0 && strlen(maxword) < strlen(s_dup)) {
////				maxword = s_dup;
////			}
////		s = strtok_s(NULL, " ", &context);
////	}
////	printf("MaxSymWord\n\n");
////	printf("%s", maxword);
////}
////
////
//////#include <stdio.h>
//////#include <stdlib.h>
//////#include <string.h>
//////
//////struct SomeData {
//////	double _d;
//////	int _i;
//////	short _s;
//////	char _c;
//////	char _c2;
//////	char _name[20];
//////};
//////
//////int main() {
//////	// fopen()
//////	// fclose ()
//////	// fputc()
//////	// fputc()
//////	// fgetc()
//////	// fgetc()
//////	// fseek()
//////	// fprintf()
//////	// fscanf()
//////	// feof()
//////	// ferror()
//////	// rewind()
//////	// remove()
//////	// fflush()
//////
//////	//  "r"
//////	//	Открывает файл для чтения. (Открывает по умолчанию как текстовый файл.)
//////	//	"w"
//////	//	Создает файл для записи. (Открывает по умолчанию как текстовый файл.)
//////	//	"а"
//////	//	Присоединяет к файлу. (Открывает по умолчанию как текстовый файл.)
//////	//	"rb"
//////	//	Открывает двоичный файл для чтения.
//////	//	"wb"
//////	//	Открывает двоичный файл для записи.
//////	//	"ab"
//////	//	Присоединяет к двоичному файлу.
//////	//	"r+"
//////	//	Открывает файл для чтения / записи. (Открывает по умолчанию как текстовый файл.)
//////	//	"w+"
//////	//	Создает файл для чтения / записи. (Открывает по умолчанию как текстовый файл.)
//////	//	"a+"
//////	//	Присоединяет или создает файл для чтения / записи. (Открывает по умолчанию как текстовый файл.)
//////	//	"r+b"
//////	//	Открывает двоичный файл для чтения / записи.
//////	//	"w+b"
//////	//	Создает двоичный файл для чтения / записи.
//////	//	"a+b"
//////	//	Присоединяет или создает двоичный файл для чтения / записи.
//////	//	"rt"
//////	//	Открывает текстовый файл для чтения.
//////	//	"wt"
//////	//	Создает текстовый файл для записи.
//////	//	"at"
//////	//	Присоединяет к текстовому файлу.
//////	//	"r+t"
//////	//	Открывает текстовый файл для чтения.
//////	//	"w+t"
//////	//	Создает текстовый файл для чтения / записи.
//////	//	"a+t"
//////	//	Открывает или создает текстовый файл для чтения / записи.
//////
//////	// Create file descriptor
//////	FILE* filePointer = NULL;
//////
//////	// Open file
//////	filePointer = fopen("C:/Users/Nyzhnyk/Documents/test.txt","w");
//////	int fileSize = 0;
//////
//////	// Write some symbolic data to file
//////	if (filePointer) {
//////		// Check file size
//////		fseek(filePointer, 0U, SEEK_END); // Rewind current position to the end of the file
//////		fileSize = ftell(filePointer); // Get difference between current position and beginning
//////		fseek(filePointer, 0U, SEEK_SET); // Rewind current position to the beginning of the file
//////		fprintf(filePointer, "%s %d", "Hello World", 200); // Write formatted string
//////		fflush(filePointer); // Flush data to disk
//////		fputc('T',filePointer); // Push character
////////		fputc('\n', filePointer);
//////		fputs("Some text", filePointer); // Push string
//////		fclose(filePointer); // Close file
//////	}
//////	filePointer = fopen("C:/Users/Nyzhnyk/Documents/test.txt", "r+");
//////	if (filePointer) {
//////		char fileData[256] = { 0 };
//////		fseek(filePointer, 0U, SEEK_END);
//////		fileSize = ftell(filePointer);
//////		fseek(filePointer, 0U, SEEK_SET);
//////		int iterator = 0;
//////		int val = 0;
//////		// Scan symbolic data from file
//////		fscanf(filePointer, "%s", fileData);
//////		fscanf(filePointer, "%s", fileData);
//////		fscanf(filePointer, "%d", &val);
//////
//////		// Read string from file
//////		//fgets(fileData, 10, filePointer);
//////
//////		// Read file step-by-step
//////		//while (!feof(filePointer)) {
//////		//	fileData[iterator++] = (char)fgetc(filePointer);
//////		//}
//////
//////		// Check for errors
//////		//int errorStatus = ferror(filePointer);
//////		fclose(filePointer);
//////	}
//////	// Opent file as binary
//////	filePointer = fopen("C:/Users/Nyzhnyk/Documents/test2.txt", "wb");
//////
//////	if (filePointer) {
//////		char fileData[256] = { 0 };
//////		int arr[] = { 1,2,3,4,5 };
//////		// Get file size
//////		fseek(filePointer, 0U, SEEK_END);
//////		fileSize = ftell(filePointer);
//////		fseek(filePointer, 0U, SEEK_SET);
//////
//////		// Write binary data to file
//////		fwrite(arr, sizeof(int), sizeof(arr) / sizeof(int), filePointer);
//////
//////		// Create SomeData instance
//////		struct SomeData data;
//////		data._d = 3.14;
//////		data._i = 100;
//////		data._s = -3;
//////		data._c = 'A';
//////		data._c2 = 'B';
//////		strcpy(data._name, "John Doe");
//////
//////		// Write structure to file
//////		fwrite(&data, sizeof(struct SomeData), 1, filePointer);
//////		fflush(filePointer); // Flush data
//////		fclose(filePointer); // Close file
//////	}
//////
//////	// Open file for binary reading
//////	filePointer = fopen("C:/Users/Nyzhnyk/Documents/test2.txt", "rb");
//////
//////	if (filePointer) {
//////		char fileData[256] = { 0 };
//////		int arr[20] = { 0 };
//////		// Get file size
//////		fseek(filePointer, 0U, SEEK_END);
//////		fileSize = ftell(filePointer);
//////		fseek(filePointer, 0U, SEEK_SET);
//////
//////		// Read 5 int numbers from file
//////		fread(arr, sizeof(int), 5, filePointer);
//////		struct SomeData data;
//////		// Read structure from file
//////		fread(&data, sizeof(struct SomeData), 1, filePointer);
//////		fclose(filePointer); // Close file
//////	}
//////
//////	return 0;
//////}
//////
////////#include <stdio.h>
////////#include <stdlib.h>
////////#include <math.h>
////////#include <string.h>
////////#include <time.h>
////////#include "declare.h"
////////#include "functions.h"
////////
////////// malloc - memory allocation
////////// calloc
////////// realloc - memory reallocation
////////// free
////////
////////struct Student {
////////	int m_age;
////////	char m_name[100];
////////	float m_avarage;
////////	int* m_taskList;
////////	int m_taskNumber;
////////} MyStructure;
////////
////////int var = 0;
////////
////////void fillStudentData(struct Student * student) {
////////	student->m_age = 22;
////////	strcpy(student->m_name, "John Doe");
////////	student->m_avarage = 4.95;
////////}
////////
////////void processStudent(struct Student st) {
////////	st.m_taskNumber = 300;
////////}
////////
////////struct Student createStudent() {
////////	struct Student st;
////////	st.m_age = 19;
////////	strcpy(st.m_name, "Mr. Smith");
////////	return st;
////////}
////////
////////void copyStudent(const struct Student *source, struct Student *dest){
////////	if (source->m_taskNumber > 0) {
////////		dest->m_taskNumber = source->m_taskNumber;
////////		dest->m_taskList = calloc(dest->m_taskNumber, sizeof(int));
////////		memcpy(dest->m_taskList, source->m_taskList, sizeof(int) * dest->m_taskNumber);
////////	}
////////}
////////
////////struct Example {
////////	double num0;
////////	int num1;
////////	int num2;
////////	char num3;
////////	char num4;
////////	char num5;
////////	char num6;
////////	char num7;
////////};
////////
////////
////////
////////int main(int argc, char *argv[]) { // argc - argument count, argv - argument values
////////	printf("Example struct size = %d", sizeof(struct Example));
////////
////////
////////
////////	struct Student student1, student2;
////////	student1.m_age = 22;
////////	strcpy(student1.m_name, "John Doe");
////////	student1.m_avarage = 4.95;
////////
////////	MyStructure.m_age = 18;
////////
////////	fillStudentData(&student2);
////////
////////	struct Student st3 = createStudent();
////////
////////	struct Student classroom[20];
////////	for (int i = 0; i < 10; i++) {
////////		classroom[i].m_age = rand() % 5 + 20;
////////		classroom[i].m_avarage = rand() % 15 / 3.0;
////////	}
////////
////////	int variableData = 100;
////////
////////	student1.m_taskList = &variableData;
////////	student2 = student1;
////////	*student2.m_taskList = 200;
////////	processStudent(student2);
////////
////////
////////	struct Student st4, st5;
////////
////////	st4.m_taskNumber = 10;
////////	st4.m_taskList = calloc(st4.m_taskNumber, sizeof(int));
////////	st4.m_taskList[0] = 199;
////////	st4.m_taskList[1] = 197;
////////	copyStudent(&st4, &st5);
////////	free(st4.m_taskList);
////////	free(st5.m_taskList);
////////
////////	struct Student* st6 = malloc(sizeof(struct Student));
////////	st6->m_age = 19;
////////	free(st6);
////////
////////
////////	int arr[10][10] = { {0},{0} };
////////	for (int i = 0; i < 10; i++) {
////////		for (int j = i; j < 10; j++) {
////////			arr[i][j] = 1;
////////		}
////////	}
////////	
////////
////////	//// Work with arrays
////////	//int matrix[8][7];
////////	//int res[8][2] = { {0}, {0} };
////////	//// Fill matrix by function
////////	//fillMatrix(matrix,8,7,-10,10);
////////
////////	//// Create dynamic matrix. It is more siutable to create matrix dynammically as a onedimentional array
////////	//int* matrix2 = calloc(sizeof(int),7*8);
////////
////////	//// Fill matrix by function
////////	//fillMatrix(matrix2, 8, 7, -10, 10);
////////	//free(matrix2);
////////
////////	//// Fill static matrix
////////	//for(int i = 0; i < 8; i++) {
////////	//	for (int j = 0; j < 7; j++) {
////////	//		matrix[i][j] = rand() % 200 - 100;
////////	//	}
////////	//}
////////
////////	//// Process static matrix
////////	//for (int i = 0; i < 8; i++) {
////////	//	for (int j = 0; j < 7; j++) {
////////	//		if (matrix[i][j] < 0) {
////////	//			res[i][0]++;
////////	//			res[i][1] += matrix[i][j];
////////	//		}
////////	//	}
////////	//}
////////
////////	//// Print matrix
////////	//for (int i = 0; i < 8; i++) {
////////	//	for (int j = 0; j < 7; j++) {
////////	//		printf("%5d |", matrix[i][j]);
////////	//	}
////////	//	printf("\n");
////////	//}
////////	//// Print process result
////////	//for (int i = 0; i < 8; i++) {
////////	//	system("color 02");
////////	//	printf("%5d | %5d \n", res[i][0], res[i][1]);
////////	//}
////////
////////	//// Work with arrays
////////	//int arr1[]={ 1,2,3,4,5,6,7,8 };
////////	//int arr2[8];
////////
////////	//fillArray(arr2, 8, -20, 20);
////////	//fillArray(arr2, 8, -20, 20);
////////	//fillArray(arr2, 8, -20, 20);
////////	//fillArray(arr2, 8, -20, 20);
////////	//fillArray(arr2, 8, -20, 20);
////////
////////	//// Change values in function
////////	//double a;
////////	//int b;
////////	//float c;
////////
////////	//changeVals(&b, &a, &c);
////////
////////	//int idx = 7;
////////	//for (int i = 0; i < 8; i++) {
////////	//	arr2[idx] = arr1[i];
////////	//	idx--;
////////	//}
////////
////////	//// Work wit array using pointers
////////	//int* ptr2 = arr2;
////////	//int* ptr1 = arr1;
////////	//while(ptr2 <= (&arr2[7])){
////////	//	*ptr1 = *ptr2;
////////	//	ptr1++;
////////	//	ptr2++;
////////	//}
////////
////////	//srand(time(NULL));
////////
////////	//int array3[10];
////////	//for (int i = 0; i < 10; i++) {
////////	//	array3[i] = rand() % 20 - 10;
////////	//}
////////
////////	//for (int i = 0; i < 8; i++) {
////////	//	printf("%d, %d\n",arr2[i],arr1[i]);
////////	//}
////////
////////	//char string[TEXT_SIZE_LIMIT] = { "Hello" };
////////	//char string2[TEXT_SIZE_LIMIT] = { " World!!!" };
////////	//char resString[TEXT_SIZE_LIMIT] = {""};
////////
////////	////scanf("%s", resString);
////////
////////	//// Function to read some text
////////	////readText(resString, TEXT_SIZE_LIMIT);
////////
////////	//char* someString = "Hello";
////////	//char someOtherStr[] = { "World" };
////////	//char someStr2[] = {'B','r','a','v','e','\0'};
////////
////////	//printf("%d\n", strlen(someString));
////////	//printf("%d\n", strlen(someOtherStr));
////////	//printf("%d\n", strlen(someStr2));
////////
////////	//// Concatenate strings (add one string to other)
////////	//strcat(resString, string);          // Add string from variable (all characters to \0 are taken)
////////	//strcat(resString, " brave new");    // Add string from string literal
////////	//strncat(resString, string2, 7);     // Add n characters from string variable
////////
////////	//// Copying string
////////	//char string3[100];
////////	//strcpy(string3, resString);         // Copy string to string (include terminating symbol)
////////	//strncpy(string3 + strlen(resString), resString, 10);    // Copy n bytes to string (if more character should be copied then string contains - zeros would be added)
////////	////printf(string3);
////////
////////	//// Move string
////////	//char someText[128] = { "C language is very easy." };
////////	//memmove(someText + 19, someText + 14, 10);
////////
////////	//// Compare string
////////	//int res = strcmp("Airflow", "Airbus");
////////	//res = strncmp("Airflow", "Airbus", 3);
////////
////////	//function1();
////////	//function2(100, 3.14, 6.28, NULL, NULL);
////////	//int varArg1 = 100;
////////	//float varArg2 = 3.14;
////////	//double varArg3 = 6.28;
////////	//function2(varArg1, varArg2, varArg3, &varArg1, &varArg3);
////////
////////	//printToConsole();
////////
////////	//int* array = malloc(10 * sizeof(10));
////////	//int* arra2 = createArray(10);
////////	//realloc(array, 0);
////////
////////	//int oneMoreArray[10][10] = { {1,2,3,4,5},{1,2,3,4,5} };
////////	//int count = processArray(oneMoreArray, 10, 10);
////////	//count = processArray(NULL, 10, 10);
////////
////////	//double var = 2.0;
////////	//var = pow(var, 2.0);
////////	//changeVar(&var);
////////
////////	//void (*functionPtr)(int) = printInt;
////////	//functionPtr(10);
////////
////////	//double (*powPtr)(double, double) = pow;
////////	//printf("\n%f", powPtr(2.0, 2.0));
////////
////////	//double (*funcPtrArr[])(double, double) = {pow, fmax, fmin};
////////	//printf("\n%f\n%f", funcPtrArr[0](2.0, 2.0), funcPtrArr[1](2.0, 4.0));
////////
////////	//int someArray[] = { 1, 2 ,-1 ,-4,4,9,-2 };
////////	//int someArray3[] = { -1,-2,-3,-4,-5,-6,-7 };
////////	//printf("\n\nBigger than zero: %d\n\n", function3(someArray, sizeof(someArray)/sizeof(int)));
////////	//printf("\n\nBigger than zero: %d\n\n", function3(someArray3, 7));
////////
////////
////////	//int array[10] = {1 ,2 ,3};
////////	//function3(array, 10);
////////	//float value = 3.14;
////////	//float* fptr = &value;
////////	//float* fptr2 = NULL;
////////	//if (fptr2 != NULL) {
////////
////////	//}
////////	////int* intptr = array;
////////	////array[0]; // 1,2 ...
////////	////intptr[0]; // 1,2,3 ...
////////
////////	//int* _ptr = NULL;
////////
////////	////void* _voidptr;
////////	//_ptr = malloc(sizeof(int));
////////	//*_ptr = 100;
////////
////////	//double* _ptr2 = malloc(sizeof(8));
////////
////////	////printf("%d\n%d\n%d\n", sizeof(int), sizeof(double), sizeof(char));
////////
////////	//int* array2 = NULL;
////////
////////	////array2 = malloc(10 * sizeof(int));
////////	//array2 = calloc(10, sizeof(int));
////////	//for (int i = 0; i < 10; i++) {
////////	//	//printf("%d ", array2[i]);
////////	//}
////////	//double* dptr = NULL;
////////	//for (int i = 0; i < 10; i++) {
////////	//	dptr = realloc(dptr, (i+1)*sizeof(double));
////////	//	dptr[i] = 3.14 + i;
////////	//	for (int j = 0; j < i; j++) {
////////	//		//printf("%f, ", dptr[j]);
////////	//	}
////////	//	//printf("\n");
////////	//}
////////
////////	//free(_ptr);
////////	//free(_ptr2);
////////	//free(array2);
////////	//free(dptr);
////////
////////	//int* array2D[10];
////////	//for (int i = 0; i < 10; i++) {
////////	//	int size = rand() % 10;
////////	//	array2D[i] = malloc(size * sizeof(int));
////////	//	for (int j = 0; j < size; j++) {
////////	//		//printf("%d, ", array2D[i][j]);
////////	//	}
////////	//	//printf("\n");
////////	//}
////////	//for (int i = 0; i < 10; i++) {
////////	//	free(array2D[i]);
////////	//}
////////
////////	//int** array2D2 = NULL;
////////	//int size = 10;
////////	//array2D2 = malloc(size*sizeof(int*));
////////
////////	//for (int i = 0; i < size; i++) {
////////	//	array2D2[i] = malloc(size * sizeof(int));
////////	//	if (array2D2 != NULL) {
////////	//	for (int j = 0; j < size; j++) {
////////	//		array2D2[i][j] = j;
////////	//		printf("%d, ", array2D2[i][j]);
////////	//	}
////////	//	printf("\n");
////////	//}
////////	//}
////////	//for (int i = 0; i < size; i++) {
////////	//	free(array2D2[i]);
////////	//}
////////	//free(array2D2);
////////	//int * array2D3 = malloc(size * size * sizeof(int));
////////	//array2D3[10]; array2D3[20];
////////	//free(array2D3);
////////	
////////
////////	//for (int i = 0, j = 0; i < 10, j < 10; i++, j+=2) {
////////	//	array[i] = rand() % 10 - 5;
////////	//}
////////	//int i = 0, j = 0;
////////	//while (i < 10 && j < 10) {
////////	//	i++; j++;
////////	//}
////////	//int count = 0;
////////	//for (int i = 0; i < 10; i++) {
////////	//	if (array[i] > 0) {
////////	//		count++;
////////	//	}
////////	//}
////////
////////
////////
////////
////////	//float array[10];
////////	//float* var = malloc(sizeof(float));
////////	//*var = 100;
////////	//float* array1 = malloc(4 * sizeof(float));
////////	//float* array2 = calloc(4,sizeof(float));
////////	//printf("%p\n", array1);
////////	//printf("%p\n", array1 + 1);
////////	//printf("%f",*var);
////////	//for (int i = 0; i < 4; i++) {
////////	//	printf("%f | %f\n", array1[i], array2[i]);
////////	//}
////////	//array1 = realloc(array1, 8 * sizeof(float));
////////	//array2 = realloc(array2, 8 * sizeof(float));
////////	//for (int i = 0; i < 8; i++) {
////////	//	printf("%f | %f\n", array1[i], array2[i]);
////////	//}
////////	//int* array3 = NULL;
////////	//for (int i = 0; i < 10; i++) {
////////	//	array3 = realloc(array3, (i + 1) * sizeof(int));
////////	//	array3[i] = i + 100;
////////	//	for (int j = 0; j < (i + 1); j++) {
////////	//		printf("%d ,", array3[j]);
////////	//	}
////////	//	printf("\n");
////////	//}
////////
////////	//free(var);
////////	//free(array1);
////////	//free(array2);
////////	//free(array3);
////////	return 0;
////////}
////////
//////////#include <stdio.h>
//////////#include <stdlib.h>
//////////#include <time.h>
//////////
//////////#define ARRAY_SIZE 20
//////////
//////////int main() {
//////////	// Arrays in C
//////////	int array[10]; // Array with 10 elements
//////////	// Fill array in loop
//////////	for (int i = 0; i < 10; i++) {
//////////		array[i] = i;
//////////	}
//////////	// Print array element address and values
//////////	for (int i = 0; i < 10; i++) {
//////////		printf("%x | %d\n", &array[i], array[i]);
//////////	}
//////////	
//////////	// Second variant to create array
//////////	int array2[] = {7,6,4,8,9,3,2};
//////////	for (int i = 0; i < 7; i++) {
//////////		printf("%d\n", array2[i]);
//////////	}
//////////
//////////	// Fill part of array [7,6,4,8,0,0,0]
//////////	int array3[7] = { 7,6,4,8 };
//////////
//////////	// NOT USE INDEXES THAT ARE GRATER THAN ARRAY SIZE
//////////	// Sometimes it can work, but these values are not valid
//////////	printf("%d\n", array3[9]);
//////////	array3[12] = 10;
//////////	int array4[20];
//////////
//////////	// FILL ARRAY WITH RANDOM VALUES
//////////	printf("%d", RAND_MAX); // Random number upper limit
//////////
//////////	// Set random numbers "start value"
//////////	srand(time(NULL));
//////////	// Fill array with random numbers in range [20-34]
//////////	for (int i = 0; i < 20; i++) {
//////////		array4[i] = rand()%20 + 15;
//////////		printf("%d\n", array4[i]);
//////////	}
//////////
//////////	// Multydimentional arrays
//////////	// Twodimentional array
//////////	float multyArray[4][4]; // Array with size 4*4
//////////	// Fill twodimentional array with random values in range [0-19]
//////////	for (int i = 0; i < 4; i++) {
//////////		for (int j = 0; j < 4; j++) {
//////////			multyArray[i][j] = rand() % 20;
//////////			printf("%f ", multyArray[i][j]);
//////////		}
//////////		printf("\n");
//////////	}
//////////	
//////////	// Create twodimentional array from initalizers
//////////	int mArray2[][] = { {1,2,3},{4,5,6},{7,8,9} };
//////////	for (int i = 0; i < 3; i++) {
//////////		for (int j = 0; j < 3; j++) {
//////////			printf("%d ", mArray2[i][j]);
//////////		}
//////////		printf("\n");
//////////	}
//////////
//////////	// Check twodimentional array memory placement
//////////	printf("%x | %d\n", &mArray2[0][2], &mArray2[0][2]);
//////////	printf("%x | %d", &mArray2[1][0], &mArray2[1][0]);
//////////
//////////	// Threedimentional array example 
//////////	int mArray[3][3][3]; // Array with size 3*3*3
//////////
//////////	// POINTERS
//////////	int var = 9; // Variable with value 9
//////////	int*ptr = NULL; // Pointer creation and initialization with NULL
//////////	ptr = &var; // Assign variable address to pointer
//////////	int* ptr2 = ptr; // Create another pointer and initialize it with previously created pointer
//////////
//////////	// Print variable address and pointers values
//////////	printf("0x%x | 0x%x | 0x%x\n", &var, ptr, ptr2);
//////////	// Print variable value and values pointed by pointers
//////////	printf("%d | %d | %d\n", var, *ptr, *ptr);
//////////
//////////	// Change variable value
//////////	var = 5; // Value pointed by pointers are also changed
//////////	// Print variable value and values pointed by pointers
//////////	printf("0x%x | 0x%x | 0x%x\n", &var, ptr, ptr2);
//////////	printf("%d | %d | %d\n", var, *ptr, *ptr);
//////////
//////////	// Bad example
//////////	int* ptr3 = NULL;
//////////	{
//////////		int var2 = 100;
//////////		ptr3 = &var2; // Here pointer containt address of local variable
//////////	}
//////////	printf("%d", *ptr3); // Here variable var2 is destroyed
//////////
//////////	// Use pointers in work with arrays
//////////	int array6[10] = {200,300,400,500,600}; // Create partially initalized array
//////////	// Print first element address
//////////	printf("0x%x | 0x%x\n", &array6[0], array6);
//////////	// Print first element value
//////////	printf("%d | %d\n", array6[0], *array6);
//////////
//////////	// Print second element address
//////////	printf("0x%x | 0x%x\n", &array6[1], (array6 + 1));
//////////	// Print second element value
//////////	printf("%d | %d\n", array6[1], *(array6+1));
//////////
//////////	// Print 5-th element address
//////////	printf("0x%x | 0x%x\n", &array6[4], (array6 + 4));
//////////	// Print 5-th element value
//////////	printf("%d | %d\n", array6[4], *(array6 + 4));
//////////
//////////	// How to use pointer to check pointed data are valid
//////////	if (ptr == NULL) {
//////////		printf("No data.");
//////////	}
//////////
//////////	return 0;
//////////}
//////////
//////////
//////////
//////////
//////////#include <stdio.h>
//////////#include <conio.h>
//////////
//////////int menu();
//////////int main()
//////////{
//////////    int answer = menu();
//////////    switch (answer)
//////////    {
//////////    case 0: printf("Message on 1.\n"); break;
//////////    case 1: printf("Message on 2.\n"); break;
//////////    case 2: printf("Message on 3.\n"); break;
//////////    case 3: printf("Message on 4.\n"); break;
//////////    default: break;
//////////    }
//////////    return 0;
//////////}
//////////
//////////int menu() {
//////////    int key = 0;
//////////    int code;
//////////
//////////    do {
//////////        system("cls");
//////////        key = (key + 4) % 4;
//////////        printf("%sMenu item 1.\n", ((key == 0) ? "-->" : "   "));
//////////        printf("%sMenu item 2.\n", ((key == 1) ? "-->" : "   "));
//////////        printf("%sMenu item 3.\n", ((key == 2) ? "-->" : "   "));
//////////        printf("%sMenu item 4.\n", ((key == 3) ? "-->" : "   "));
//////////        code = _getch();
//////////        if (code == 224)
//////////        {
//////////            code = _getch();
//////////            if (code == 80) key++;
//////////            if (code == 72) key--;
//////////        }
//////////    } while (code != 13);
//////////    system("cls");
//////////    return key;
//////////}
//////////
////////////#include <stdio.h>
////////////#include "declare.h"
////////////#include <math.h>
////////////
////////////// Comment 
/////////////* Comment
////////////* some 
////////////* long
////////////*/
////////////
////////////// Gllobal 
////////////int globalVariable = 199;
////////////
////////////int main(){
////////////	#include <stdio.h>
////////////#include <conio.h>
////////////
////////////int menu();
////////////int main()
////////////{
////////////  //setlocale(LC_ALL, "Russian");
////////////    int answer=menu();      
////////////    switch (answer)
////////////    {
////////////        case 0: printf("Message on 1.\n");break;
////////////        case 1: printf("Message on 2.\n");break;
////////////        case 2: printf("Message on 3.\n");break;   
////////////        case 3: printf("Message on 4.\n");
////////////            return 0;
////////////    }
////////////    system("pause");
////////////    return 0;
////////////}
//////////// 
////////////int menu() {
////////////        int key=0; 
////////////        int code;  
////////////        do {
////////////                system("cls");  
////////////                key=(key+4)%4; 
////////////                printf("%s Menu item 1.\n", (key == 0) ? "->" : "  ");
////////////                printf("%s Menu item 2.\n", (key == 1) ? "->" : "  ");
////////////                printf("%s Menu item 3.\n", (key == 2) ? "->" : "  ");
////////////                printf("%s Menu item 4.\n", (key == 3) ? "->" : "  ");
////////////                code=_getch();  
////////////                if (code==224)
////////////                {
////////////                    code=_getch();
////////////                    if (code==80) key++; 
////////////                    if (code==72) key--; 
////////////                        }
////////////           }while(code!=13); 
////////////        system("cls");  
////////////        return key; 
////////////}
////////////
////////////	int var1 = 0;
////////////	int var2 = 0;
////////////	char status = 'n';
////////////	printf("%d", globalVariable);
////////////	// Simple loop to not restart your program each time
////////////	while (1) {
////////////		printf("Please input two numbers: ");
////////////		scanf("%d %d", &var1, &var2);
////////////		printf("%d + %d = %d", var1, var2, var1 + var2);
////////////		printf("Do You want to contimue?[Y/n] ");
////////////		scanf("%c", &status);
////////////		if (status == 'n') {
////////////			break;
////////////		}
////////////	}
////////////
////////////	/*/ Main function scope
////////////	double a1;
////////////	{
////////////		// Inner scope for a2
////////////		// Outer scope for a2 and a3
////////////		double a2;
////////////		{
////////////			// Inner scope for a3
////////////			double a3;
////////////		}
////////////	}
////////////
////////////	int varX = 5;
////////////	int varY = 3;
////////////	int varZ = 0;
////////////
////////////	
////////////	// Endless loops
////////////	// If You want to run this code - please comments these loops
////////////	/*while (1) {
////////////	};
////////////
////////////	do {
////////////	} while (1);
////////////
////////////	for (;;) {
////////////
////////////	}/
////////////
////////////	//while (varZ < 5 || varX < 10) {
////////////	while (varZ < 5) {
////////////		// Outer loop
////////////		varX = 5;
////////////		while (varX < 10) {
////////////			// Inner loop
////////////			varX++;
////////////			printf("XXX: %d\n", varX);
////////////		}
////////////		varZ++;
////////////		printf("ZZZ: %d\n", varZ);
////////////	}
////////////
////////////	varZ = 0;
////////////
////////////	// do..while loop
////////////	do {
////////////		varZ++;
////////////		printf("Iteration: %d\n", varZ);
////////////	} while (varZ < 5);
////////////
////////////	// for loop
////////////	for (int i = 1, j = 10; i < j; i++, j--) {
////////////		printf("i: %d\n", i);
////////////		printf("j: %d\n", j);
////////////	}
////////////
////////////	// Nested loops
////////////	for (int i = 0; i < 5; i++) {
////////////		// Outer loop
////////////		for (int j = 0; j < 5; j++) {
////////////			// Inner loop
////////////			printf("j,i: %d,%d\n", j,i);
////////////		}
////////////		printf("i: %d\n", i);
////////////	}
////////////
////////////	// For loop "external" handling
////////////	int i = 0;
////////////	int j = 0;
////////////	for (; i < 5;) {
////////////		for (; ;) {
////////////			printf("j,i: %d,%d\n", j,i);
////////////			j++;
////////////			if (j < 5) {
////////////				break;
////////////			}
////////////		}
////////////		printf("i: %d\n", i);
////////////		i++;
////////////	}
////////////
////////////	// Usage of "continue" keyword
////////////	i = 0;
////////////	while (i < 10) {
////////////		i++;
////////////		if (i % 2 != 0) {
////////////			continue;
////////////		}
////////////		printf("Number: %d\n", i);
////////////	};
////////////
////////////	// Usage of "break" keyword
////////////	i = 0;
////////////	while (i < 10) {
////////////		i++;
////////////		if (i == 6) {
////////////			break;
////////////		}
////////////		printf("Number: %d\n", i);
////////////	};
////////////
////////////	// Usage of "break" keyword
////////////	for (int it = 0; it < 100; it++) {
////////////		printf("Iterator: %d\n", it);
////////////		if (it == 7) {
////////////			break;
////////////		}
////////////	}
////////////
////////////	// Usage of "break" keyword with nested loops
////////////	int loopStatus = 1; // loop status
////////////	for (int it = 0; it < 100; it++) {
////////////		for (int it2 = 0; it2 < 10; it2++) {
////////////			printf("Iterator: %d\n", it2);
////////////			if (it2 == 7) {
////////////				loopStatus = 0;
////////////				break;
////////////			}
////////////		}
////////////		if (loopStatus == 0) {
////////////			break;
////////////		}
////////////	}
////////////
/////////////*	int varRes = 0;
////////////
////////////	// Add
////////////	varZ = varX + varY;
////////////	// Sub
////////////	varZ = varX - varY;
////////////	// Mult
////////////	varZ = varX * varY;
////////////	// Div
////////////	varZ = varX / varY;
////////////	varRes = varX % varY;
////////////
////////////	// Increment 
////////////	varZ++;
////////////	varZ = varZ + 1;
////////////	// Decrement
////////////	varZ--;
////////////	varZ = varZ - 1;
////////////
////////////	// Shotr operators
////////////	// Add
////////////	varZ += varY;
////////////	varZ = varZ + varY; // The same 
////////////	// Sub
////////////	varZ -= varY;
////////////	varZ = varZ - varY; // The same 
////////////	// Mult
////////////	varZ *= varY;
////////////	// Div
////////////	varZ /= varY;
////////////	varRes %= varY;
////////////
////////////	// Math functions
////////////	varZ = abs(-9);
////////////	varZ = sqrt(9.000);
////////////	varZ = sin(3.14/2.0);
////////////	int z = ceil(4.33);
////////////	z = floor(4.33);
////////////	z = round(4.33);
////////////
////////////	// Compare operator
////////////	varRes = (varX == varY);
////////////	varRes = (varX != varY);
////////////	varRes = (varX > varY);
////////////	varRes = (varX < varY);
////////////	varRes = (varX >= varY);
////////////	varRes = (varX <= varY);
////////////
////////////	// Output to console
////////////	printf("Hello world\n");
////////////	printf("Decimal value %e, %o, |%-10d|\n", 3.14, z, 255);
////////////	printf("%s %s\n", "Hello", "world");
////////////
////////////	// Input from console
////////////	float res2 = 0;
////////////	scanf("%f %d", &res2, &z);
////////////
////////////	int varNew = 6;
////////////
////////////	if ((varNew != 5) || (varNew < 10)) {
////////////		printf("True\n");
////////////	}
////////////	else if (varNew > 5){
////////////		printf("Grater\n");
////////////	}
////////////	else if (varNew < 5) {
////////////		printf("Less\n");
////////////	}
////////////
////////////	int number = 0;
////////////	scanf("%d", &number);
////////////	switch (number){
////////////	case 14: // one variant 
////////////		printf("14\n");
////////////	case 15: // other variant
////////////		printf("15\n");
////////////		break;
////////////	case 16: // ....
////////////		printf("16\n");
////////////		break;
////////////	default: 
////////////		printf("Default\n");
////////////		break;
////////////	}
////////////	int var = 10;
////////////	int result = (var != 4) || (var == 5);*/
////////////	return 0;
////////////}
////////////
////////////// Function implementation
////////////void printToConsole() {
////////////	printf("Hello world!;)");
////////////}
