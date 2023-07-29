#include "Utils.h"
//-----------------------------------------------------------------------------------------------//
//Name:linoy bekker
//ID:206777500

//Q1
//The program move all the Duplicates to the end of the program
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
//Q2//
void InsertionSort(int arr[], int size)
{
	//The program sort array
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j <= size - 1; j++)
		{
			//checking two linked variables if the left one is bigger than than the right one
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
	switch (option)
	{
		int temp = 0;
		int copy = 0;
	case 1:
		//trun matrix to the right side
	{
		int tempMat[MATRIX_SIZE][MATRIX_SIZE];
		for (int row = 0; row < MATRIX_SIZE; ++row) {
			for (int column = 0; column < MATRIX_SIZE; column++)
			{
				tempMat[column][row] = mat[MATRIX_SIZE - row - 1][column];
			}
		}

		for (int row = 0; row < MATRIX_SIZE; row++)
		{
			for (int column = 0; column < MATRIX_SIZE; column++)
			{
				mat[row][column] = tempMat[row][column];
			}
		}

		break;
	}
	//trun matrix to the left side
	case 2:
	{
		for (int i = 0; i < MATRIX_SIZE / 2; i++)
		{
			for (int j = i; j < MATRIX_SIZE - i - 1; j++)
			{
				temp = mat[i][j];

				mat[i][j] = mat[j][MATRIX_SIZE - 1 - i];

				mat[j][MATRIX_SIZE - 1 - i] = mat[MATRIX_SIZE - 1 - i][MATRIX_SIZE - 1 - j];

				mat[MATRIX_SIZE - 1 - i][MATRIX_SIZE - 1 - j] = mat[MATRIX_SIZE - 1 - j][i];

				mat[MATRIX_SIZE - 1 - j][i] = temp;
			}
		}
	}
	break;
	//trun matrix from up to dowm
	case 3:
	{
		for (int i = 0; i < MATRIX_SIZE / 2; i++)
		{
			for (int j = 0; j < MATRIX_SIZE; j++)
			{
				temp = mat[i][j];
				mat[i][j] = mat[MATRIX_SIZE - i - 1][j];
				mat[MATRIX_SIZE - i - 1][j] = temp;
			}
		}
	}
	break;
	//trun matrix from left to right
	case 4:
	{
		int tempMat[MATRIX_SIZE][MATRIX_SIZE];
		for (int row = 0; row < MATRIX_SIZE; ++row) {
			for (int column = 0; column < MATRIX_SIZE; column++)
			{
				tempMat[row][column] = mat[row][MATRIX_SIZE - column - 1];
			}
		}
		for (int row = 0; row < MATRIX_SIZE; row++)
		{
			for (int column = 0; column < MATRIX_SIZE; column++)
			{
				mat[row][column] = tempMat[row][column];
			}
		}
		break;
	}
	}
}

//function that sorting array
void arraySort(char arr[], int size)
{
	char temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j <= size - 1; j++)
		{
			if (arr[i] != 0 && arr[j] != 0 && arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

//function that checks if the arrays is similars
int isArraySimilar(char a[], char b[], int col_size)
{
	arraySort(a, col_size);
	arraySort(b, col_size);

	for (int i = 0; i < col_size; i++)
	{
		//checks if the varaible in the array1 is similar to the varaible in array2
		if (a[i] != b[i])
		{
			//retrun 0 when they different
			return 0;
		}
	}
	//return 1 if they are similar
	return 1;
}


//-----------------------------------------------------------------------------------------------//
int CountSemiSimilar(char a[][M], char b[][M], int n)
//Q3
{
	//counter
	int counter = 0;
	if (n >= 1 || n <= M)
	{
		for (int row = 0; row < n; ++row) {
			if (isArraySimilar(a[row], b[row], M) == 1)
				//adding 1 to the conter when the rows in the matrix are the same 
				counter++;
		}
	}
	return counter;
}
//-----------------------------------------------------------------------------------------------//
