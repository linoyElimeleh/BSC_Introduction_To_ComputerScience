
#include "Utils.h"
//-----------------------------------------------------------------------------------------------//
int VerifyMatrices( int mat1[MATRIX_SIZE][MATRIX_SIZE], int mat2[MATRIX_SIZE][MATRIX_SIZE] )
{
	int i, j;
	for( i = 0; i < MATRIX_SIZE; ++i )
	{
		for( j = 0; j < MATRIX_SIZE; ++j )
		{
			if( mat1[i][j] != mat2[i][j] )
				return 0;
		}
	}

	return 1;
}
//-----------------------------------------------------------------------------------------------//
int main()
{
	int i;
	
	//variables for ex1
	int arr1[] = { 1, 2, 1, 4, 4, 3, 5, 1, 2 };
	int arr1Res[] = { 1, 2, 4, 3, 5 };
	int arr2[] = { 1, 2, 1, 4, 4, 4, 3, 5, 1, 2 };
	int arr2Res[] = { 1, 2, 4, 3, 5 };
	int arr3[] = { 1, 1, 1, 1, 1, 1, 1 };
	int arr3Res[] = { 1 };
	int arr4[] = { 1, 5 };
	int arr4Res[] = { 2 };


	//variables for ex2
	int invalid1[] = { 6, 4, 2, 0, 3, 1, 5 };
	int invalid2[] = { 33, 44, 0, 0, 48, 0 };
	int invalid3[] = { 1, 0, 2, 3, 4, 2, 5 };
	int invalid4[] = {1, 1, 1, 1, 1, 1, 1 };


	//variables for ex3
	int mat1[MATRIX_SIZE][MATRIX_SIZE] = { {1, 2, 3, 4}, { 5, 6, 7, 8 }, { 9, 10, 11, 12 }, { 13, 14, 15, 16 } };
	int mat2[MATRIX_SIZE][MATRIX_SIZE] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
	int mat3[MATRIX_SIZE][MATRIX_SIZE] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
	int mat4[MATRIX_SIZE][MATRIX_SIZE] = { { 1, 2, 3, 4 },{ 5, 6, 7, 8 },{ 9, 10, 11, 12 },{ 13, 14, 15, 16 } };
	int opt1[MATRIX_SIZE][MATRIX_SIZE] = { { 13, 9, 5, 1 },{ 14, 10, 6, 2 },{ 15, 11, 7, 3 },{ 16, 12, 8, 4 } };
	int opt2[MATRIX_SIZE][MATRIX_SIZE] = { { 4, 8, 12, 16 },{ 3, 7, 11, 15 },{ 2, 6, 10, 14 },{ 1, 5, 9, 13 } };
	int opt3[MATRIX_SIZE][MATRIX_SIZE] = { { 13, 14, 15, 16 },{ 9, 10, 11, 12 },{ 5, 6, 7, 8 },{ 1, 2, 3, 4 } };
	int opt4[MATRIX_SIZE][MATRIX_SIZE] = { { 4, 3, 2, 1 },{ 8, 7, 6, 5 },{ 12, 11, 10, 9 },{ 16, 15, 14, 13 } };

	//variables for ex4
	char test1_a[M][M] = { "abcdefg", "gfeg", "abcd" };
	char test1_b[M][M] = { "cdefgba", "geff", "abcde" };
	char test2_a[M][M] = { "aba", "aabbaab", "zxw" };
	char test2_b[M][M] = { "baa", "abababa", "zxx" };
	char test3_a[M][M] = { "abcdefg", "zxyz" };
	char test3_b[M][M] = { "gfedcba", "xyzz" };
	char test4_a[M][M] = { "abcdefg", "a" };
	char test4_b[M][M] = { "gfedcba", "a" };

	//------------------------------------------------------------------------------------------------------------
	//=============== EX 1 ================// 
	if( 5 != RemoveDuplicates( arr1, sizeof( arr1 ) / sizeof( int ) ) )
		printf( "Ex1 - RemoveDuplicates function returned wrong value (-8)\n" );
	else
	{
		for( i = 0; i < sizeof( arr1Res ) / sizeof( int ); ++i )
		{
			if( arr1[i] != arr1Res[i] )
			{
				printf( "Ex1 - RemoveDuplicates function returned wrong array elements (-4)\n" );
				break;
			}
		}
	}

	if( 5 != RemoveDuplicates( arr2, sizeof( arr2 ) / sizeof( int ) ) )
		printf( "Ex1 - RemoveDuplicates function returned wrong value (-8)\n" );
	else
	{
		for( i = 0; i < sizeof( arr2Res ) / sizeof( int ); ++i )
		{
			if( arr2[i] != arr2Res[i] )
			{
				printf( "Ex1 - RemoveDuplicates function returned wrong array elements (-4)\n" );
				break;
			}
		}
	}

	if( 1 != RemoveDuplicates( arr3, sizeof( arr3 ) / sizeof( int ) ) )
		printf( "Ex1 - RemoveDuplicates function returned wrong value (-8)\n" );
	else
	{
		for( i = 0; i < sizeof( arr3Res ) / sizeof( int ); ++i )
		{
			if( arr3[i] != arr3Res[i] )
			{
				printf( "Ex1 - RemoveDuplicates function returned wrong array elements (-4)\n" );
				break;
			}
		}
	}

	if (2 != RemoveDuplicates(arr4, sizeof(arr4) / sizeof(int)))
		printf("Ex1 - RemoveDuplicates function returned wrong value (-8)\n");

	//=============== EX 2 ================// 
	InsertionSort( invalid1, sizeof( invalid1 ) / sizeof( int ) );
	for( i = 0; i < (sizeof( invalid1 ) / sizeof( int )) - 1; ++i )
	{
		if( invalid1[i] > invalid1[i + 1] )
		{
			printf( "Ex2 - InsertionSort function returned wrong array order (-8)\n" );
			break;
		}
	}

	InsertionSort( invalid2, sizeof( invalid2 ) / sizeof( int ) );
	for( i = 0; i < ( sizeof( invalid2 ) / sizeof( int ) ) - 1; ++i )
	{
		if( invalid2[i] > invalid2[i + 1] )
		{
			printf( "Ex2 - InsertionSort function returned wrong array order (-8)\n" );
			break;
		}
	}

	InsertionSort( invalid3, sizeof( invalid3 ) / sizeof( int ) );
	for( i = 0; i < ( sizeof( invalid3 ) / sizeof( int ) ) - 1; ++i )
	{
		if( invalid3[i] > invalid3[i + 1] )
		{
			printf( "Ex2 - InsertionSort function returned wrong array order (-8)\n" );
			break;
		}
	}

	InsertionSort(invalid4, sizeof(invalid4) / sizeof(int));
	for (i = 0; i < (sizeof(invalid4) / sizeof(int)) - 1; ++i)
	{
		if (invalid3[i] > invalid3[i + 1])
		{
			printf("Ex2 - InsertionSort function returned wrong array order (-8)\n");
			break;
		}
	}

	//=============== EX 3 ================// 
	FlipMatrix( mat1, 1 );
	if( 0 == VerifyMatrices( mat1, opt1 ) )
		printf( "Ex3 - FlipMatrix function with option = 1, returned wrong matrix (-6)\n" );

	FlipMatrix( mat2, 2 );
	if( 0 == VerifyMatrices( mat2, opt2 ) )
		printf( "Ex3 - FlipMatrix function with option = 2, returned wrong matrix (-6)\n" );

	FlipMatrix( mat3, 3 );
	if( 0 == VerifyMatrices( mat3, opt3 ) )
		printf( "Ex3 - FlipMatrix function with option = 3, returned wrong matrix (-6)\n" );

	FlipMatrix( mat4, 4 );
	if( 0 == VerifyMatrices( mat4, opt4 ) )
		printf( "Ex3 - FlipMatrix function with option = 4, returned wrong matrix (-6)\n" );

	//=============== EX 4 ================// 
	if( CountSemiSimilar( test1_a, test1_b, 3 ) != 1 )
		printf( "Ex4 - CountSemiSimilar({ abcdefg, gfeg, abcd }, { cdefgba, geff, abcde }, 3) function is wrong (-8)\n" );

	if( CountSemiSimilar( test2_a, test2_b, 3 ) != 2 )
		printf( "Ex4 - CountSemiSimilar({ aba, aabbaab, zxw }, { baa, abababa, zxx }, 3) function is wrong (-8)\n" );

	if( CountSemiSimilar( test3_a, test3_b, 2 ) != 2 )
		printf( "Ex4 - CountSemiSimilar({ abcdefg, zxyz }, { gfedcba, xyzz }, 2) function is wrong (-8)\n" );
	
	if (CountSemiSimilar(test4_a, test4_b, 2) != 2)
		printf("Ex4 - CountSemiSimilar({ abcdefg, zxyz }, { gfedcba, xyzz }, 2) function is wrong (-8)\n");
	//=============== FINISH ================// 
	printf( "\n\ndone\n" );

	return 0;
}
//-----------------------------------------------------------------------------------------------//
