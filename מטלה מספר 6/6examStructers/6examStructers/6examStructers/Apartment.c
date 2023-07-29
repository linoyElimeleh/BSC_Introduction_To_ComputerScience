//linoy elimeleh
//319122610
//1.1.20

#include "Apartment.h"

#define APARTMENT_H
//-----------------------------------------------------------------------------------------------//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>

Apartment* CreateNewApartment(const char* _fname, int _number, float _rooms, float _area)
{
	Apartment* newApartment = NULL;
	newApartment = (Apartment*)(malloc(sizeof(Apartment)));
	newApartment->family_name = NULL;
	newApartment->family_name = (char*)malloc((strlen(_fname) + 1) * sizeof(char));
	if (newApartment == NULL)
		return NULL;
	if (newApartment->family_name == NULL)
		return NULL;
	strcpy(newApartment->family_name, _fname);
	newApartment->number = _number;
	newApartment->number_of_rooms = _rooms;
	newApartment->area = _area;

	return newApartment;
}

Apartment* DuplicateApartment(const Apartment* source)
{
	if (source !=NULL)
	{


		Apartment* newApartmentForDup = NULL;

		newApartmentForDup = (Apartment*)(malloc(sizeof(Apartment)));
		if (newApartmentForDup == NULL)
			return NULL;
		newApartmentForDup = CreateNewApartment(source->family_name, source->number, source->number_of_rooms, source->area);
		return newApartmentForDup;
	}
	else
	{
		return NULL;
	}
}

void FreeApartment(Apartment* ap)
{
	free(ap);
}
