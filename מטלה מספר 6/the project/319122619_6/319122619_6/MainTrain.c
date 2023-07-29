#include "Building.h"
//-----------------------------------------------------------------------------------------------//
int compareApartmentDifferentAddress( Apartment* a1, Apartment* a2 )
{
	if( a1 == a2 )
		return 0;
	
	if( a1->family_name == a2->family_name )
		return 0;

	if( strcmp( a1->family_name, a2->family_name ) != 0 )
		return 0;

	if( a1->number != a2->number )
		return 0;

	if( a1->number_of_rooms != a2->number_of_rooms )
		return 0;

	if( a1->area != a2->area )
		return 0;

	return 1;
}
//-----------------------------------------------------------------------------------------------//
int compareFloorDifferentAddress( Floor* f1, Floor* f2 )
{
	int i;

	if( f1 == f2 )
		return 0;

	if( f1->floor_title == f2->floor_title )
		return 0;

	if( strcmp( f1->floor_title, f2->floor_title ) != 0 )
		return 0;

	if( f1->floor_number != f2->floor_number )
		return 0; 
	
	if( f1->num_of_apartments != f2->num_of_apartments )
		return 0;

	for( i = 0; i < f1->num_of_apartments; ++i )
	{
		if( 0 == compareApartmentDifferentAddress( f1->apartments[i], f2->apartments[i] ) )
			return 0;
	}

	return 1;
}
//-----------------------------------------------------------------------------------------------//
int compareBuildingDifferentAddress( Building* b1, Building* b2 )
{
	int i;

	if( b1 == b2 )
		return 0;

	if( b1->street_name == b2->street_name )
		return 0;

	if( strcmp( b1->street_name, b2->street_name ) != 0 )
		return 0;

	if( b1->street_number != b2->street_number )
		return 0;

	if( b1->num_of_floors != b2->num_of_floors )
		return 0;

	for( i = 0; i < b1->num_of_floors; ++i )
	{
		if( 0 == compareFloorDifferentAddress( b1->floors[i], b2->floors[i] ) )
			return 0;
	}

	return 1;
}
//-----------------------------------------------------------------------------------------------//
int checkApartment( Floor* f, Apartment* a )
{
	int i;
	if( NULL == f || NULL == a )
		return 0;

	for( i = 0; i < f->num_of_apartments; ++i )
	{
		if( 0 == strcmp( f->apartments[i]->family_name, a->family_name )
			&& f->apartments[i]->number == a->number
			&& f->apartments[i]->number_of_rooms == a->number_of_rooms
			&& f->apartments[i]->area == a->area )
			return 1;
	}

	return 0;
}
//-----------------------------------------------------------------------------------------------//
int checkFloor( Building* b, Floor* f )
{
	int i, j, check;
	if( NULL == b || NULL == f )
		return 0;

	for( i = 0; i < b->num_of_floors; ++i )
	{
		if( 0 == strcmp( b->floors[i]->floor_title, f->floor_title ) && b->floors[i]->floor_number == f->floor_number && b->floors[i]->num_of_apartments == f->num_of_apartments )
		{
			check = 0;
			for( j = 0; j < f->num_of_apartments; ++j )
			{
				if( compareApartmentDifferentAddress( b->floors[i]->apartments[j], f->apartments[j] ) )
					++check;
			}

			if( check == f->num_of_apartments )
				return 1;
		}
	}

	return 0;
}
//-----------------------------------------------------------------------------------------------//
int checkSortedByNumbersArray( Floor* f, int numbers[] )
{
	int i;
	for( i = 0; i < f->num_of_apartments; ++i )
	{
		if( f->apartments[i]->number != numbers[i] )
			return 0;
	}

	return 1;
}
//-----------------------------------------------------------------------------------------------//
int main()
{
	int sum = 0;
	int num1 = 5, num2 = 7, num3 = 9, num4 = 14;
	int arr1[] = { num1, num4, num2, num3 };
	int arr2[] = { num1, num2, num3, num4 };
	Apartment apartment1 = { "Cohen", num1, 4.5f, 90.f };
	Apartment apartment2 = { "Levi", num2, 5.f, 120.f };
	Apartment apartment3 = { "Mizrahi", num3, 3.f, 65.5f };
	Apartment apartment4 = { "Freedman", num4, 5.5f, 140.f };
	Apartment* pItem[3] = { &apartment1, &apartment2, &apartment3 };
	Apartment* pItem2[4] = { &apartment1, &apartment2, &apartment3, &apartment4 };
	Floor f1 = { pItem, 3, 7, "Penthouse" };
	Floor f2 = { pItem2, 4, 4, "Normal" };
	Floor* tmpFloor = NULL;
	Floor* myFloor;
	Apartment* p1;
	Apartment* p2;
	Floor* pItem3[1] = { &f1 };
	Building b1 = { "Hertzel", 2, 1, pItem3 };
	Building* b2;

	//------------------------------------------------------------------------------------------------------------
	//=============== EX 1 ================// 
	p1 = CreateNewApartment( "Cohen", num1, 4.5f, 90.f );
	if( 0 == compareApartmentDifferentAddress( p1, &apartment1 ) )
		printf( "Failed Ex1 - CreateNewApartment function (-8)\n" );

	//=============== EX 2 ================// 
	p2 = DuplicateApartment( &apartment2 );
	if( 0 == compareApartmentDifferentAddress( p2, &apartment2 ) )
		printf( "Failed Ex2 - DuplicateApartment function (-8)\n" );

	//=============== EX 3 ================// 
	tmpFloor = AddApartment( tmpFloor, &apartment1 );
	if( 0 == checkApartment( tmpFloor, &apartment1 ) )
		printf( "Failed Ex3 - AddApartment function (-8)\n" );

	//=============== EX 4 ================// 
	myFloor = DuplicateFloor( &f1 );
	if( 0 == compareFloorDifferentAddress( &f1, myFloor ) )
		printf( "Failed Ex4 - DuplicateFloor function (-8)\n" );

	//=============== EX 5 ================// 
	b2 = DuplicateBuilding( &b1 );
	if( 0 == compareBuildingDifferentAddress( &b1, b2 ) )
		printf( "Failed Ex5 - DuplicateBuilding function (-8)\n" );

	//=============== EX 6 ================// 
	b2 = AddFloor( b2, &f2 );
	if( 0 == checkFloor( b2, &f2 ) )
		printf( "Failed Ex6 - AddFloor function (-8)\n" );

	//=============== EX 7 ================// 
	SortByName( &f2 );
	if( 0 == checkSortedByNumbersArray( &f2, arr1 ) )
		printf( "Failed Ex7 - SortByName function (-8)\n" );

	//=============== EX 8 ================// 
	SortByNumber( &f2 );
	if( 0 == checkSortedByNumbersArray( &f2, arr2 ) )
		printf( "Failed Ex8 - SortByNumber function (-8)\n" );

	//=============== EX 9 ================// 
	if( 120.f != GetArea( &f2, "Levi" ) )
		printf( "Failed Ex9 - GetArea function (-8)\n" );

	//=============== EX 10 ===============//
	if( 30.5f != GetTotalRooms( b2 ) )
		printf( "Failed Ex10 - GetTotalRooms function (-8)\n" );

	//=============== EX 11 ===============// 
	FreeApartment( p1 );
	FreeApartment( p2 );
	
	//=============== EX 12 ===============// 
	FreeFloor( tmpFloor );
	FreeFloor( myFloor );

	//=============== EX 13 ===============// 
	FreeBuilding( b2 );
	
	//=============== FINISH ================// 
	printf( "\n\ndone\n" );

	return 0;
}
//-----------------------------------------------------------------------------------------------//