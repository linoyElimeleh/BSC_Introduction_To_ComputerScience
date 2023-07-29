#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#define MATRIX_SIZE 4
#define M 20

int RemoveDuplicates( int arr[], int size );
void InsertionSort( int arr[], int size );
void FlipMatrix( int mat[MATRIX_SIZE][MATRIX_SIZE], int option );
int CountSemiSimilar( char a[][M], char b[][M], int n );

#endif // ifndef UTILS_H
