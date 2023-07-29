#ifndef DEPARTMENT_H
#define DEPARTMENT_H
//-----------------------------------------------------------------------------------------------//
#include "Apartment.h"
//-----------------------------------------------------------------------------------------------//
typedef struct Floor
{
	Apartment**	apartments;			//a pointer to an array of pointers to apartments
	int			num_of_apartments;	//number of apartments in this floor
	int			floor_number;		//the number of the floor
	char* 		floor_title;		//the title of the floor (normal, penthouse, garden)
} Floor;
//-----------------------------------------------------------------------------------------------//
Floor*	AddApartment( Floor* fl, const  Apartment* apartment );
Floor*	DuplicateFloor( const Floor* source );
void	SortByName( Floor* fl );
void	SortByNumber( Floor* fl );
float	GetArea( const Floor* fl, const char* fname );
void	FreeFloor( Floor* fl );
//-----------------------------------------------------------------------------------------------//
#endif 

