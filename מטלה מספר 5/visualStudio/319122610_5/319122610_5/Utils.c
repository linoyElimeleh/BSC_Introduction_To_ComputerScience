#include "Utils.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define _CAT_SECURE_NO_WARNINGS

//linoy elimeleh 
// id 319122610
//date 21/12/19

//-----------------------------------------------------------------------------------------------//
//Q1
char* PairSortedArrays(char a[], char b[])
{
	//this function is take 2 strings array and return new string sorted by asci values

	//get new pointer to the sum of the strings
	int strLenth = strlen(a) + strlen(b);
	char* newStr = NULL;
	//new index and initialise it
	newStr = (char*)(calloc(strLenth + 1, sizeof(char)));
	//import index variable
	char temp = NULL;
	char* indexA = a, * indexB = b;
	//put values in the string
	newStr = strcat(newStr, indexA);
	newStr = strcat(newStr, indexB);
	//the string sorting
	for (int i = 0; i < strLenth; i++)
	{
		for (int j = i + 1; j < strLenth; j++)
		{
			if (newStr[i] > newStr[j])
			{
				temp = newStr[i];
				newStr[i] = newStr[j];
				newStr[j] = temp;
			}
		}
	}
	return newStr;

}
//-----------------------------------------------------------------------------------------------//
//Q2
char** LowerSTR(char* arr[], int size_arr, char* str, int* size_res)
{
	//this function is get string array and return new string array that small lexsicografin
	//import variable
	char** newStr = NULL;
	char* stringToCheck = NULL;
	//take place
	newStr = (char**)(calloc(size_arr + 1, sizeof(char*)));
	bool flag;
	int place = 0;
	//check all strings in the array
	for (int i = 0; i < size_arr; i++)
	{
		stringToCheck = arr[i];
		//suggest that is bigger laxigorfan
		flag = true;
		//check all words in the string
		for (int j = 0; j < sizeof(stringToCheck); j++)
		{
			//if it smaller - break
			if (strcmp(&stringToCheck[j], &str[j]) > 0)
			{
				flag = false;
				break;
			}
			//if it bigger -break
			else
				if (strcmp(&stringToCheck[j], &str[j]) < 0)
				{
					flag = true;
					break;
				}
			//if there are equalse- continue
		}
		if (flag)
		{
			//fulfil the newSTR
			newStr[place] = *(arr + i);
			place++;
		}
	}
	*size_res = place;
	return newStr;


}
//-----------------------------------------------------------------------------------------------//
//Q3
char* AddNumbers(char* num1, char* num2)
{
	//this function is take 2 strings array and return new string sorted by asci values
	//get new pointer to the sum of the strings
	char* newStr = NULL;
	int biggerNumberLenth;
	unsigned long long  sum = 0;
	int placeNum1, placeNum2;
	//check who is longer and initialize
	if (strlen(num1) >= strlen(num2))
	{
		biggerNumberLenth = strlen(num1);
	}
	else
	{
		biggerNumberLenth = strlen(num2);
	}
	//initialize size of pointer
	newStr = (char*)(calloc(biggerNumberLenth + 2, sizeof(char)));
	placeNum1 = strlen(num1) - 1;
	placeNum2 = strlen(num2) - 1;
	unsigned long long powForLoop = 10;
	for (int i = 0; i < biggerNumberLenth; i++)
	{
		powForLoop *= 10;
	}
	//sum all
	for (unsigned long long i = 1; i < powForLoop; i = i * 10)
	{
		if (placeNum1 != -1 && placeNum2 != -1)
		{
			sum = sum + ((*(num1 + placeNum1) - 48) * i) + ((*(num2 + placeNum2) - 48) * i);
			placeNum1--; placeNum2--;
		}
		else
		{
			if (placeNum1 == -1 && placeNum2 != -1)
			{
				sum = sum + ((*(num2 + placeNum2) - 48) * i);
				placeNum2--;
			}
			else
				if (placeNum2 == -1 && placeNum1 != -1)
				{
					sum = sum + ((*(num1 + placeNum1) - 48) * i);
					placeNum1--;
				}
				else break;
		}
	}
	//change to string
	for (int i = 0; i < biggerNumberLenth; i++)
	{
		newStr[biggerNumberLenth - 1 - i] = (char)(sum % 10 + 48);
		sum = sum / 10;
	}
	return newStr;
}
//-----------------------------------------------------------------------------------------------//
//Q4
int* CreateRange(int start, int end, int jump, int* sizeRage)
{
	//the program return new range with jumps numbers
	//new index and initialise it
	int* newStr = NULL;
	newStr = (int*)(calloc(end + 1, sizeof(int)));
	int range_place = 0;
	//the jumps
	for (int i = start; i <= end; i = i + jump)
	{
		*(newStr + range_place) = i;
		range_place++;
	}
	*sizeRage = range_place;
	return  newStr;
}
//-----------------------------------------------------------------------------------------------//
//Q5
int** GradeStat(int* Grades, int size_grades, int grd_range, int* count_grd, int* avg_grd)
{
	////the function do statistic calculation 
	int n = 100 / grd_range + 1;
	int* count_grd2 = calloc(n, sizeof(int));
	int* avg_grd2 = calloc(n, sizeof(int));
	int** gradesArr = (int**)malloc(n * sizeof(int*));
	//calulat count array
	for (int i = 0; i < size_grades; i++)
	{
		count_grd2[Grades[i] / grd_range]++;
	}
	//calculate grades array
	for (int i = 0; i < n; i++)
	{
		gradesArr[i] = (int*)(malloc(count_grd2[i] * sizeof(int)));

	}
	int* cArr = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < size_grades; ++i)
	{
		gradesArr[Grades[i] / grd_range][cArr[Grades[i] / grd_range]] = Grades[i];
		cArr[Grades[i] / grd_range]++;
	}
	//calculate avarge array
	int sum ;
	for (int i = 0; i < n;++i)
	{
		sum = 0;
		for (int j = 0; j < count_grd2[i]; j++)
		{
			sum = sum + gradesArr[i][j];
		}
		if (count_grd2[i] != 0)
		{
			avg_grd2[i] = sum / count_grd2[i];
		}

	}
	*count_grd = calloc(n, sizeof(int));
	*avg_grd= calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		count_grd[n] = count_grd2[n];
		avg_grd[n] = avg_grd2[n];
	}
	return gradesArr;
	

	//int grade = NULL;
//int numberGroup = 100 / grd_range + 1;
//int** newStrGrade = NULL;
//int** arrayPointerToGrades = NULL;

//arrayPointerToGrades= (int**)calloc(size_grades, sizeof(int*));
//count_grd = (int*)(calloc(numberGroup, sizeof(int)));
//newStrGrade = (int**)(calloc(numberGroup, sizeof(int*)));
////grade = (int*)malloc(sizeof(int));

//for (int i = 0; i < size_grades; i++)
//{
//	grade = *(Grades +i);
//	int group = grade / grd_range;
//	*arrayPointerToGrades[i] = &Grades[i];
//	*newStrGrade[group] = &arrayPointerToGrades[i];


//	return newStrGrade;
//}
}
//-----------------------------------------------------------------------------------------------//