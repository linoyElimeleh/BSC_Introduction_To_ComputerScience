#include <stdio.h>
#include <float.h>


/*linoy elimeleh, 319122610, 1/11/19
my program take celsuis degrees from user
ant convert to forint degrees*/

void main()
{
	float fDegrees = 0;
	float cDegrees = 0;
	printf("please write temp in celcius");
	scanf_s("%f", &cDegrees); //input from user
	fDegrees = cDegrees * 9 / 5 + 32;
	printf("the temp in forint is : %.2f", fDegrees);//output from program

}

