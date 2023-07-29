#include <stdio.h>
#include <float.h>
#include <math.h>


/*linoy elimeleh, 319122610, 1/11/19
my program take radius  from user
and print the voliumS*/

void main()
{
	float radius = 0;
	float volium = 0;

	printf("/n please write radius");
	scanf_s("%f", &radius);
	volium = pow(radius,3) * 3.14 * 4 / 3;
	printf("the volium is : %.2f/n", volium);

}

