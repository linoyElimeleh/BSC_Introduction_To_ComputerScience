//linoy elimeleh
//319122610
//1.1.20

#include "Apartment.h"
#include "Floor.h"

#define DEPARTMENT_H
//-----------------------------------------------------------------------------------------------//
//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>

Floor* AddApartment(Floor* fl, const  Apartment* apartment)
{
	Apartment* newApartment = NULL;
	Floor* newFloor = NULL;
	newFloor = (Floor*)(malloc(sizeof(Floor)));
	newApartment = (Apartment*)(malloc(sizeof(newApartment)));

	if (apartment != NULL)
	{
		if (fl == NULL)
		{

			newFloor->floor_title = NULL;
			newFloor->floor_title = (char*)(malloc(sizeof(char)));
			newFloor->apartments = (Apartment**)(malloc(sizeof(Apartment*)));
			if (newFloor != NULL && newFloor->floor_title != NULL)
			{
				strcpy(newFloor->floor_title, "Normal");
				newFloor->floor_number = 2;
				newFloor->num_of_apartments = 1;
				newFloor->apartments[0] = DuplicateApartment(apartment);
				return newFloor;
			}
			else
			{
				free(newApartment);
				free(newFloor);
				return NULL;
			}
		}
		else //if fl!=null
		{
			for (int i = 0; i < fl->num_of_apartments; i++)
			{
				if (fl->apartments[i]->number == apartment->number)
				{
					fl->apartments[i]->area = apartment->area;
					strcpy(fl->apartments[i]->family_name, apartment->family_name);
					fl->apartments[i]->number_of_rooms = apartment->number_of_rooms;
					return fl;
				}
				else
				{
					if (i == fl->num_of_apartments - 1)
					{
						realloc(fl->apartments, sizeof(apartment));
						fl->apartments[fl->num_of_apartments] = DuplicateApartment(apartment);
						if (fl->apartments[fl->num_of_apartments] != NULL)
						{
							fl->num_of_apartments = fl->num_of_apartments + 1;
							return fl;
						}
						return NULL;
					}
				}
			}
		}
	}
	else
	{
		free(newApartment);
		free(newFloor);
		return NULL;

	}


	return NULL;

}

Floor* DuplicateFloor(const Floor* source)
{
	Apartment* apartmentForCopy = NULL;
	apartmentForCopy = (Apartment*)(malloc(sizeof(Apartment)));
	Floor* newFloor = NULL;
	newFloor = (Floor*)(malloc(sizeof(Floor)));
	newFloor->floor_title = NULL;
	newFloor->floor_title = (char*)(malloc(sizeof(*source-> floor_title)+1));
	
	//TODO: check 
	newFloor->apartments = (Apartment**)(malloc(sizeof(Apartment*)));
	if (newFloor != NULL && source != NULL)
	{
		newFloor->floor_number = source->floor_number;
		newFloor->num_of_apartments = source->num_of_apartments;
		strcpy(newFloor->floor_title, source->floor_title);
		newFloor->apartments = (Apartment**)(realloc(&(newFloor->apartments),(sizeof(Apartment*))*(source->num_of_apartments)));
		//if (newFloor->apartments != NULL)
		//{
			for (int i = 0; i < newFloor->num_of_apartments; i++)
			{
				newFloor->apartments[i] = DuplicateApartment(source->apartments[i]);
				apartmentForCopy = source->apartments[i];
				DuplicateApartment(apartmentForCopy);
			}
			return newFloor;
		//}
		//else
		//{
			//return NULL;
		//}
	}
	else
	{
		free(newFloor);
		return NULL;
	}

}


void SortByName(Floor* fl)
{
	if (fl != NULL)
	{
		Apartment* tempAppartment;
		for (int i = 0; i < fl->num_of_apartments - 1; i++)
		{
			if (strcmp(fl->apartments[i]->family_name, fl->apartments[i + 1]->family_name) > 0)
			{
				tempAppartment = fl->apartments[i];
				fl->apartments[i] = fl->apartments[i + 1];
				fl->apartments[i + 1] = tempAppartment;
			}
		}
	}

}

void SortByNumber(Floor* fl)
{
	if (fl != NULL)
	{
		Apartment* tempAppartment;
		for (int i = 0; i < fl->num_of_apartments - 1; i++)
		{
			if (fl->apartments[i]->number > fl->apartments[i + 1]->number)
			{
				tempAppartment = fl->apartments[i];
				fl->apartments[i] = fl->apartments[i + 1];
				fl->apartments[i + 1] = tempAppartment;
			}
		}
	}
}

float GetArea(const Floor* fl, const char* fname)
{
	if (fl != NULL)
	{
		for (int i = 0; i < fl->num_of_apartments; i++)
		{

			if (strcmp(fl->apartments[i]->family_name, fname) == 0)
			{
				return fl->apartments[i]->area;
			}
		}
		return -1;
	}
	else
		return -1;
}
void FreeFloor(Floor* fl)
{
	if (fl != NULL)
	{
		for (int i = 0; i < fl->num_of_apartments; i++)
		{
			FreeApartment(fl->apartments[i]);
		}
	}
}
