#ifndef UTILS_H
#define UTILS_H

#define SIZE1 8
#define SIZE2 10
#define SIZE3 4
#define GRD_RANGE1 10
#define GRD_RANGE2 7
#define SIZE_GRADES 20


#include <stdio.h>
#include <string.h>
#include<stdlib.h>

char* PairSortedArrays(char a[], char b[]);
int* CreateRange(int start, int end, int jump, int* sizeRage);
char** LowerSTR(char* arr[], int size_arr, char* str, int* size_res);
char* AddNumbers(char* num1, char* num2);
int** GradeStat(int* Grades, int size_grades, int grd_range, int* count_grd, int* avg_grd);

#endif // ifndef UTILS_H
