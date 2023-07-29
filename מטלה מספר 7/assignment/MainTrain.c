
#include "Utils.h"

//-----------------------------------------------------------------------------------------------//
int count1 = 0; // do not change!
int count2 = 0; // do not change!
int count3 = 0; // do not change!
int count4 = 0; // do not change!
int count5 = 0; // do not change!
int count6 = 0; // do not change!
void fx1(){
	count1++;
}
void fx2(){
	count2++;
}
void fx3(){
	count3++;
}
void fx4(){
	count4++;
}
void fx5(){
	count5++;
}
void fx6(){
	count6++;
}
//help functions for Q5
int isEqual(int *a, int *b, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (a[i] != b[i])
			return 0;
	}
	return 1;
}
//-----------------------------------------------------------------------------------------------//
int main()
{


	//variables for ex1
	int arr1[] = { 1, 2, -1, 4, -4, 3, 5, 1, 0 };
	int res1 = 4;
	int arr2[] = { -1, 2, -1, 4, -4, 4, -13, 5, 1, 2 };
	int res2 = 6;
	int arr3[] = { 1, 1, 1, 1, 1, 1, 1 };
	int res3 = 0;
	int arr4[] = { 3, 4, 7, 1, 8, 2, 9 };
	int res4 = 3;
	int arr5[] = { 1, 0, -1, -2, -3, -100 };
	int res5 = 5;

	//variables for ex3

	int array1[] = { 1, 2, 3, 4, 5, 6 };
	int array2[] = { 6, 5, 4, 3, 2, 1 };
	int array3[] = { 1, 1, 1, 1, 1, 1 };
	int array4[] = { 1, 0, 2, 0, 3, 0 };
	int array5[] = { 10, 20, 30, 40 };

	//variables for ex4

	int a1[] = { 1, 2, 3, 4, 5, 6 };
	int a2[] = { 6, 5, 4, 3, 2, 1 };
	int a3[] = { 1, 1, 1, 1, 1, 1 };
	int a4[] = { 1, 0, 2, 0, 3, 0 };
	int a5[] = { 10, 20, 30, 40 };

	//variables for ex5

	int ar1[] = { 1, 2, 3, 4, 5, 6, 7 };
	int resar1[] = { 7, 6, 5, 4, 3, 2, 1 };
	int ar2[] = { 7, 6, 5, 4, 3, 2, 1 };
	int resar2[] = { 1, 2, 3, 4, 5, 6, 7 };
	int ar3[] = { 1, 1, 1, 1, 1, 1, 1 };
	int resar3[] = { 1, 1, 1, 1, 1, 1, 1 };
	int ar4[] = { 1, 0, 2, 0, 3, 0, 4 };
	int resar4[] = { 4, 0, 3, 0, 2, 0, 1 };
	int ar5[] = { 10, 20, 30 };
	int resar5[] = { 30, 20, 10 };
	//------------------------------------------------------------------------------------------------------------
	//=============== EX 1 ================// 
	if (res1 != smallest(arr1, sizeof(arr1) / sizeof(int)))
		printf("Ex1 - smallest function returned wrong value (-5)\n");

	if (res2 != smallest(arr2, sizeof(arr2) / sizeof(int)))
		printf("Ex1 - smallest function returned wrong value (-5)\n");

	if (res3 != smallest(arr3, sizeof(arr3) / sizeof(int)))
		printf("Ex1 - smallest function returned wrong value (-5)\n");

	if (res4 != smallest(arr4, sizeof(arr4) / sizeof(int)))
		printf("Ex1 - smallest function returned wrong value (-5)\n");

	if (res5 != smallest(arr5, sizeof(arr5) / sizeof(int)))
		printf("Ex1 - smallest function returned wrong value (-5)\n");

	if (count1<2)
		printf("Ex1 - smallest function is not recursive (-12)\n");

	

	//=============== EX 3 ================// 
	if (1 != isSortedArray(array1, sizeof(array1) / sizeof(int)))
		printf("Ex3 - isSortedArray function returned wrong value (-5)\n");

	if (0 != isSortedArray(array2, sizeof(array2) / sizeof(int)))
		printf("Ex3 - isSortedArray function returned wrong value (-5)\n");


	if (1 != isSortedArray(array3, sizeof(array3) / sizeof(int)))
		printf("Ex3 - isSortedArray function returned wrong value (-5)\n");

	if (0 != isSortedArray(array4, sizeof(array4) / sizeof(int)))
		printf("Ex3 - isSortedArray function returned wrong value (-5)\n");

	if (1 != isSortedArray(array5, sizeof(array5) / sizeof(int)))
		printf("Ex3 - isSortedArray function returned wrong value (-5)\n");

	if (count3<2)
		printf("Ex3 - isSortedArray function is not recursive (-12)\n");

	//=============== EX 4 ================// 
	if (1 != arithmeticProgression(a1, sizeof(a1) / sizeof(int)))
		printf("Ex4 - arithmeticProgression function returned wrong value (-5)\n");

	if (1 != arithmeticProgression(a2, sizeof(a2) / sizeof(int)))
		printf("Ex4 - arithmeticProgression function returned wrong value (-5)\n");

	if (1 != arithmeticProgression(a3, sizeof(a3) / sizeof(int)))
		printf("Ex4 - arithmeticProgression function returned wrong value (-5)\n");

	if (0 != arithmeticProgression(a4, sizeof(a4) / sizeof(int)))
		printf("Ex4 - arithmeticProgression function returned wrong value (-5)\n");

	if (1 != arithmeticProgression(a5, sizeof(a5) / sizeof(int)))
		printf("Ex4 - arithmeticProgression function returned wrong value (-5)\n");

	if (count4<2)
		printf("Ex4 - arithmeticProgression function is not recursive (-12)\n");

	//=============== EX 5 ================// 
	reveseArray(resar1, sizeof(resar1) / sizeof(int));
	if (1 != isEqual(ar1, resar1, sizeof(ar1) / sizeof(int)))
		printf("Ex5 - reveseArray function returned wrong value (-5)\n");

	reveseArray(resar2, sizeof(resar2) / sizeof(int));
	if (1 != isEqual(ar2, resar2, sizeof(ar2) / sizeof(int)))
		printf("Ex5 - reveseArray function returned wrong value (-5)\n");

	reveseArray(resar3, sizeof(resar3) / sizeof(int));
	if (1 != isEqual(ar3, resar3, sizeof(ar3) / sizeof(int)))
		printf("Ex5 - reveseArray function returned wrong value (-5)\n");

	reveseArray(resar4, sizeof(resar4) / sizeof(int));
	if (1 != isEqual(ar4, resar4, sizeof(ar4) / sizeof(int)))
		printf("Ex5 - reveseArray function returned wrong value (-5)\n");

	reveseArray(resar5, sizeof(resar5) / sizeof(int));
	if (1 != isEqual(ar5, resar5, sizeof(ar5) / sizeof(int)))
		printf("Ex5 - reveseArray function returned wrong value (-5)\n");

	if (count5<2)
		printf("Ex5 - reveseArray function is not recursive (-12)\n");

	//=============== EX 6 ================// 
	decimalToOctal(53);
	if (count6<2)
		printf("Ex5 - decimalToOctal function is not recursive (-12)\n");

	//=============== FINISH ================// 
	printf("\n\ndone\n");

	return 0;
}
//-----------------------------------------------------------------------------------------------//
