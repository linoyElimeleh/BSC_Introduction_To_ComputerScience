//linoy elimeleh
//319122610
//1.1.20

#ifndef SCHOOL_H
#define SCHOOL_H
//-----------------------------------------------------------------------------------------------//
#include "Floor.h"
//-----------------------------------------------------------------------------------------------//
typedef struct Building
{
	char*	street_name;   	//the name of the street
	int		street_number;	//the number of the building in this street
	int		num_of_floors;   //number of floors
	Floor** floors; 		//a pointer to an array of pointers to floors
} Building;
//-----------------------------------------------------------------------------------------------//
Building*	DuplicateBuilding( const Building* source );
Building*	AddFloor( Building* building, const Floor* fl );
void		FreeBuilding( Building* building );
float		GetTotalRooms( Building* building );
//-----------------------------------------------------------------------------------------------//
#endif

