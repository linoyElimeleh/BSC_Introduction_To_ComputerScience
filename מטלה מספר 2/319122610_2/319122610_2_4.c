#include <stdio.h>


void main()
{
	//import variable
	int numberFromUser,sum=0;
	//enter input from user
	printf("enter one number");
	scanf_s("%d", &numberFromUser);
	
	//check if the number is perfect
	for (int i = 1; i < numberFromUser; i++)
	{
		if (numberFromUser%i==0)
		{
			sum = sum + i;
		}
	}
	if (sum==numberFromUser)
	{
		printf("Perfect number");
	}
	else
	{
		printf("Not a perfect number");
	}

}