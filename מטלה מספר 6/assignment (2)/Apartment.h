#ifndef APARTMENT_H
#define APARTMENT_H
//-----------------------------------------------------------------------------------------------//
#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//-----------------------------------------------------------------------------------------------//
typedef struct Apartment
{
	char*	family_name;		//the name of the family
	int		number; 			//the apartment number
	float	number_of_rooms; 	//how many rooms in the apartment
	float	area;				//the apartment area in meters
} Apartment;
//-----------------------------------------------------------------------------------------------//
Apartment*	CreateNewApartment( const char* _fname, int _number, float _rooms, float _area );
Apartment*	DuplicateApartment( const Apartment* source );
void		FreeApartment( Apartment* ap );
//-----------------------------------------------------------------------------------------------//

#endif 