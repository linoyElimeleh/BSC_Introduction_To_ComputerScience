//name:linoy elimeleh
//date : 7/12/19
//id: 319122610
//-----------------------------

#include "Utils.h"
//-----------------------------------------------------------------------------------------------//
//Q1
int RemoveDuplicates(int arr[], int size)
{
	//counter 
	int count = 0;
	//copy of varaible
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = size - i - count; j > i; j--)
		{
			if (arr[i] == arr[j])
			{
				count++;
				temp = arr[j];
				for (int k = j; k < size - 1; k++)
				{
					if (k != size - 1)
					{
						arr[k] = arr[k + 1];
					}
				}
				arr[size - 1] = temp;
			}
		}
	}
	return(size - count);
}
//-----------------------------------------------------------------------------------------------//
//Q2
void InsertionSort(int arr[], int size)
{
	//the function sort the array
	//import variable
	int i, j, temp;
	//sort the array
	for (i = 0; i < size; ++i)
	{

		for (j = i + 1; j < size; ++j)
		{

			if (arr[i] > arr[j])
			{
				//coping of arr[i]
				temp = arr[i];
				arr[i] = arr[j];
				//changing arr[j] to the value of temp
				arr[j] = temp;

			}
		}
	}
}
//-----------------------------------------------------------------------------------------------//
//Q3
void FlipMatrix(int mat[MATRIX_SIZE][MATRIX_SIZE], int option)
{
	//the function is fliip all matrix that she is getting
	//import variable
	int  j, arrayForRow[MATRIX_SIZE] = { 0 }, newMatrix[MATRIX_SIZE][MATRIX_SIZE] = { 0 };
	//pass over the matrix
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (j = 0; j < MATRIX_SIZE; j++)
		{
			//take all row and put on integer
			arrayForRow[j] = mat[i][j];
		}
		for (j = 0; j < MATRIX_SIZE; j++)
		{
			//choose options
			if (option == 1)
			{
				newMatrix[j][MATRIX_SIZE - i - 1] = arrayForRow[j];
			}
			if (option == 2)
			{
				newMatrix[MATRIX_SIZE - j - 1][i] = arrayForRow[j];
			}
			if (option == 3)
			{
				newMatrix[MATRIX_SIZE - i - 1][j] = arrayForRow[j];
			}
			if (option == 4)
			{
				newMatrix[i][j] = arrayForRow[MATRIX_SIZE - j - 1];
			}
		}
	}
	for (int i = 0; i < MATRIX_SIZE; i++)
	{
		for (j = 0; j < MATRIX_SIZE; j++)
		{
			mat[i][j] = newMatrix[i][j];
		}
	}
}
//-----------------------------------------------------------------------------------------------//
//Q4
int CountSemiSimilar(char a[][M], char b[][M], int n)
{
	//the function is count semi siliar strings
	//import variable
	int arrayForCounterA[26] = { 0 }, arrayForCounterB[26] = { 0 };
	int counterSimi = 0, integerValueForAskiB = 0, integerValueForAskiA = 0, i, j;
	int flag;
	//pass over the matrix
	for (i = 0; i < n; i++)
	{
		flag = 1;
		for (j = 0; j < M; j++)
		{
			//take aski value and do counters array
			integerValueForAskiB = b[i][j];
			integerValueForAskiA = a[i][j];
			arrayForCounterA[integerValueForAskiA - 97]++;
			arrayForCounterB[integerValueForAskiB - 97]++;
		}
		for (j = 0; j < 26; j++)
		{
			//check if the counter is the same
			if (arrayForCounterB[j] != arrayForCounterA[j])
			{
				flag = 0;
			}
		}
		if (flag == 1)
			counterSimi++;
	}

	return counterSimi;
}
//-----------------------------------------------------------------------------------------------//