#include <stdio.h>
#include <float.h>


/*linoy elimeleh, 319122610, 1/11/19
my program take houers and minutes from user
ant convert to total minutes*/

void main()
{
	int houers = 0;
	int minutes = 0;
	int totalTIme = 0;

	printf("/n please write houers ant minutes- between them put a , ");
	scanf_s("%d,%d", &houers, &minutes);
	totalTIme = (houers * 60) + minutes;
	printf("the total minutes is : %d", totalTIme);
}

