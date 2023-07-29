#include "Utils.h"
//linoy elimeleh
//319122610
//17/1/20

//-----------------------------------------------------------------------------------------------//
//Q1

int min(int num1, int num2)
{
	return (num1 > num2) ? num2 : num1;

}

int smallest(int* arr, int size)
{
	/********Do Not Change!!!*****/
	fx1(); // do not change!!!
	/*****************************/

	if (size == 1 || size == 0)
		return 0;
	int i = smallest(arr, --size);
	return arr[size] < arr[i] ? size : i;
	/*if (smallest(arr, size - 1) > arr[size - 1])
	{
		return (size - 1);
	}*/
	//return min(smallest(arr, size - 1), arr[size]);

}

//-----------------------------------------------------------------------------------------------//
//Q2
void printReverse()
{
	/********Do Not Change!!!*****/
	fx2(); // do not change!!!
	/*****************************/
	char c;
	printf("enter char. for stop get .");
	scanf("%c", &c);

	if (c == '.')
		return;
	else
	{
		printReverse();
		printf("%c", c);
	}


}
//-----------------------------------------------------------------------------------------------//
//Q3
int isSortedArray(int* arr, int size)
{
	/********Do Not Change!!!*****/
	fx3(); // do not change!!!
	/*****************************/
	// Array has one or no element or the 
	// rest are already checked and approved. 
	if (size == 1 || size == 0)
		return 1;

	// Unsorted pair found (Equal values allowed) 
	if (arr[size - 1] < arr[size - 2])
		return 0;

	// Last pair was sorted 
	// Keep on checking 
	return isSortedArray(arr, size - 1);

}
//-----------------------------------------------------------------------------------------------//
//Q4
int arithmeticProgression(int* arr, int size)
{
	/********Do Not Change!!!*****/
	fx4(); // do not change!!!
	/*****************************/
	if (size == 1 || size == 0 || size == 2)
		return 1;

	if (arr[size - 2] - arr[size - 3] != arr[size - 1] - arr[size - 2])
		return 0;

	return arithmeticProgression(arr, size - 1);

}
//-----------------------------------------------------------------------------------------------//
//Q5
void reveseArray(int* a, int n)
{
	/********Do Not Change!!!*****/
	fx5(); // do not change!!!
	/*****************************/
	int temp = 0;
	if (n == 1 || n == 0)
		return;
	else
	{
		temp = a[n - 1];
		a[n - 1] = a[0];
		a[0] = temp;
	}
	return reveseArray(a + 1, n - 2);


}
//-----------------------------------------------------------------------------------------------//
//Q6
void decimalToOctal(int num)
{
	/********Do Not Change!!!*****/
	fx6(); // do not change!!!
	/*****************************/
	if (num == 0)
		return;
	else //x!=0
	{
		int smallest_num = num % 8;
		decimalToOctal((int)num / 8);
		printf("%d", smallest_num);
	}
}
//-----------------------------------------------------------------------------------------------//