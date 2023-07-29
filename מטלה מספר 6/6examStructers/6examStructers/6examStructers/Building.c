//linoy elimeleh
//319122610
//1.1.20
#include "Building.h"
#include "Floor.h"

Building* DuplicateBuilding(const Building* source)
{
	Building* newBuilding = NULL;
	newBuilding = (Building*)(malloc(sizeof(Building)));
	if (newBuilding != NULL && source != NULL)
	{
		newBuilding->num_of_floors = source->num_of_floors;
		newBuilding->street_number = source->street_number;
		newBuilding->street_name = (char*)malloc((strlen(source->street_name + 1))*sizeof(char));
		strcpy(newBuilding->street_name, source->street_name);
		newBuilding->floors = (Floor**)malloc(source->num_of_floors * sizeof(Floor*));
		if (newBuilding->floors != NULL)
		{
			for (int i = 0; i < newBuilding->num_of_floors; i++)
			{
				newBuilding->floors[i] = DuplicateFloor(source->floors[i]);
			}
			return newBuilding;
		}
		else
		{
			//free(newBuilding);
			return NULL;
		}
	}
	else
	{
		//free(newBuilding);
		return NULL;
	}
}

Building* AddFloor(Building* building, const Floor* fl)
{
	Building* newBuilding = NULL;
	newBuilding = (Building*)(malloc(sizeof(Building)));
	Floor* newFloor = NULL;
	newFloor = (Floor*)(malloc(sizeof(Floor)));
	if (fl != NULL)
	{
		if (building == NULL)
		{
			newBuilding->num_of_floors = 1;
			newBuilding->street_number = 1;
			newBuilding->street_name = (char*)malloc((strlen("Rotshild") + 1) * sizeof(char));
			strcpy(newBuilding->street_name, "Rotshild");
			newBuilding->floors = (Floor**)malloc(sizeof(Floor*));
			if (newBuilding->floors != NULL)
			{
				newBuilding->floors[0] = DuplicateFloor(fl);
				return newBuilding;
			}
			else
			{
				//free(newBuilding);
				//free(newFloor);
				return NULL;
			}
		}
		else//if building!=null
		{
			for (int i = 0; i < building->num_of_floors; i++)
			{
				if (building->floors[i]->floor_number == fl->floor_number)
				{
					building->floors[i] = DuplicateFloor(fl);
					return building;
				}
				else
				{
					if (i == building->num_of_floors - 1)
					{
						building->floors = (Floor**)realloc(building->floors, sizeof(fl));
						building->floors[building->num_of_floors] = DuplicateFloor(fl);
						if (building->floors[building->num_of_floors] != NULL)
						{
							building->num_of_floors = building->num_of_floors + 1;
							return building;
						}
						//free(newBuilding);
						//free(newFloor);
						return NULL;
					}
				}
			}

		}

	}
	else
	{
		//free(newBuilding);
		//free(newFloor);
		return NULL;
	}
}

float GetTotalRooms(Building* building)
{
	float sum = 0;
	if (building != NULL)
	{
		for (int i = 0; i < building->num_of_floors; i++)
		{
			for (int j = 0; j < building->floors[i]->num_of_apartments; j++)
			{
				sum = sum + (float)building->floors[i]->apartments[j]->number_of_rooms;

			}
		}
		return sum;
	}
	else
	{
		return 0;
	}
}

void FreeBuilding(Building* building)
{
		for (int i = 0; i < building->num_of_floors; i++)
		{
			FreeFloor(building->floors[i]);
		}
		free(building);
}

