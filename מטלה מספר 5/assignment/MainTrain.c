#include "Utils.h"

void Test1(char *a, char *b, char *result)
{
	char* tempString = PairSortedArrays(a, b);

	if (tempString == NULL)
	{
		printf("Can't allocate arr (-4)\n");
		return;
	}

	if (strcmp(tempString, result) != 0)
	{
		printf("Your Output is %s, Expected: %s (-4)\n", tempString, result);
	}
}

void Test2(int start, int end, int jump, int wantedSize)
{
	int size;
	int* tempResult = CreateRange(start, end, jump, &size);

	if (tempResult == NULL)
	{
		printf("Can't allocate arr (-4)\n");
		return;
	}
	if (size != wantedSize)
	{
		printf("Your Output Size is %d, Expected Size : %d (-4)\n", size, wantedSize);
		return;
	}

	for (int i = 0; i < size; i++)
	{
		if (tempResult[i] != start + i * jump)
		{
			printf("Your Output In index %d is %d, Expected Output : %d (-4)\n", i, tempResult[i], start + i * jump);
			return;
		}
	}
}

void Test3(char* arr[], int size_arr, char* str, int size_res, char* str_cmp)
{
	int size_res_new;
	char** tempStringArr =LowerSTR(arr, size_arr, str, &size_res_new);

	if (tempStringArr == NULL)
	{
		printf("Can't allocate arr (-4)\n");
		return;
	}

	if (size_res_new != size_res)
	{
		printf("The amount of string is not correct (-4)\n");
		return;
	}

	for (int i = 0; i < size_res; i++)
	{
		if (strcmp(tempStringArr[i], str_cmp) == 0)
		{
			return;
		}
	}
	printf("No String: %s (-4)\n", str_cmp);
}


void Test4(char *a, char *b, char *result)
{
	char* tempString = AddNumbers(a, b);

	if (tempString == NULL)
	{
		printf("Can't allocate arr (-4)\n");
		return;
	}

	if (strcmp(tempString, result) != 0)
	{
		printf("Your Output is %s, Expected: %s (-4)\n", tempString, result);
	}
}

void Test5A(int** arr, int size_arr, int* arr_count, int range_ind, int num)
{

	if (arr == NULL)
	{
		printf("Can't allocate arr (-4)\n");
		return;
	}

	for (int i = 0; i < arr_count[range_ind]; i++)
	{
		if (arr[range_ind][i] == num)
			return;
	}
	printf("Can't find %d in index range %d (-4)\n",num,range_ind);
}

void Test5B(int* arr1, int* arr2, int size_arr)
{

	if (arr1 == NULL)
	{
		printf("Can't allocate arr (-4)\n");
		return;
	}

	for (int i = 0; i < size_arr; i++)
	{
		if (arr1[i] != arr2[i])
		{
			printf("Wrong values in avg/count arrays (-4)\n");
			return;
		}
	}
}

int main() {
	
	printf("Exercise 1\n");
	Test1("126", "345", "123456");
	Test1("Hello", "Hello", "HHeelllloo");
	Test1("12357", "7", "123577");
	Test1("++C", "++C", "++++CC");
	Test1("abc", "ABCD", "ABCDabc");
	// 20 Points

	printf("Exercise 2\n");
	Test2(1, 10, 1, 10);
	Test2(1, 10, 2, 5);
	Test2(2, 10, 2, 5);
	Test2(-1, 10, 3, 4);
	Test2(1, 10, 11, 1);
	// 20 Points

	printf("Exercise 3\n");
	int res_size;
	char* arr_p1[SIZE1] = { "hello","bye","buy","true","false","dad","mom" ,"good" };
	char* arr_p2[SIZE2] = { "to", "be",  "or", "not", "to", "be", "that", "is", "the", "question" };
	char* arr_p3[SIZE3] = { "hasta", "la", "vista", "baby"};
	Test3(arr_p1, SIZE1, "grandpa", 5, "bye");
	Test3(arr_p1, SIZE1, "grandpa", 5, "good");
	Test3(arr_p2, SIZE2, "shakespeare", 6, "or");
	Test3(arr_p2, SIZE2, "shakespeare", 6, "or");
	Test3(arr_p3, SIZE3, "terminator", 3, "baby");
	// 20 Points

	printf("Exercise 4\n");
	Test4("104104", "203203", "307307");
	Test4("0", "765", "765");
	Test4("6539876", "99", "6539975");
	Test4("8875643","8756875876533987","8756875885409630");
	Test4("65768796453436", "686756453446", "66455552906882");
	// 20 Points

	printf("Exercise 5\n");
	int grades[SIZE_GRADES] = {98,45,77,65,89,90,100,43,54,67,55,88,76,67,33,23,45,76,72,76};
	int avg_grd1[100 / GRD_RANGE1 + 1];
	int avg_grd2[100 / GRD_RANGE2 + 1];
	int count_grd1[100 / GRD_RANGE1 + 1];
	int count_grd2[100 / GRD_RANGE2 + 1];
	int** arr1 = GradeStat(grades, SIZE_GRADES, GRD_RANGE1, count_grd1, avg_grd1);
	int** arr2 = GradeStat(grades, SIZE_GRADES, GRD_RANGE2, count_grd2, avg_grd2);

	Test5A(arr1, 100 / GRD_RANGE1 + 1, count_grd1, 8, 88);
	Test5A(arr1, 100 / GRD_RANGE1 + 1, count_grd1, 10, 100);
	Test5A(arr2, 100 / GRD_RANGE2 + 1, count_grd2, 11, 77);
	
	int avg_grd1_test[100 / GRD_RANGE1 + 1] = {0,0,23,33,44,54,66,75,88,94,100};
	int count_grd2_test[100 / GRD_RANGE2 + 1] = {0,0,0,1,1,0,3,2,0,3,4,1,3,0,2};

	Test5B(avg_grd1, avg_grd1_test, 100 / GRD_RANGE1 + 1);
	Test5B(count_grd2, count_grd2_test, 100 / GRD_RANGE2 + 1);
//20 points
	printf("done");
	return 0;
}
