#include <stdio.h>
#include <float.h>


/*linoy elimeleh, 319122610, 1/11/19
my program take kilometer from user
ant convert to maile*/

void main()
{
	float kilometer = 0;
	float maile = 0;

	printf("/n please write kilometer");
	scanf_s("%f", &kilometer);
	maile = kilometer * 0.621371;
	printf("the mail is : %.2f /n", maile);

}

