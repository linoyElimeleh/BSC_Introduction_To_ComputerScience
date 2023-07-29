#include <stdio.h>
#include <stdbool.h>


void main()
{
	//import variable
	int number1FromUser = 0, number2FromUser, indexCount, digitInTrash = 0;
	bool flag;
	//enter input from user
	printf("enter two numbers - seperate them by :,");
	scanf_s("%d,%d", &number1FromUser, &number2FromUser);
	//check if the the second number includ in the one number
	do {
		indexCount = -1;
		flag = false;
		for (int i = 10; i < number1FromUser*10; i = i * 10)
		{
			indexCount++;

			if (number1FromUser % i == number2FromUser)
			{
				flag = true;
				if (flag)
				{
					break;
				}
			}

		}
		if (flag)
		{
			break;
		}
		number1FromUser = number1FromUser / 10;
		digitInTrash++;
	} while (number1FromUser / 10 != 0);
	
	if (flag)
	{
		printf("the index is %d", indexCount + digitInTrash);
	}
	else
	{
		printf("the index is -1");
	}

}