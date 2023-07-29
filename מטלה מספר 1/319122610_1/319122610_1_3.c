#include <stdio.h>
#include <float.h>


/*linoy elimeleh, 319122610, 1/11/19
my program take lenght and width from user
ant convert to 	float circumference*/

void main()
{
	float Length = 0;
	float width = 0;
	float circumference = 0;

	printf("/n please write Length and width - between them must be : ,");
	scanf_s("%f,%f",  &Length, &width);
	circumference = (width + Length) * 2;
	printf("the circumference is : %.2f/n", circumference);

}

