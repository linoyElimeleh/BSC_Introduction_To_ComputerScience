#include <stdio.h>
#include <stdbool.h>
#include "Util.h"

//name : linoy elimeleh
//Id: 319122610
//exam number 3
//phone number : 0532808388






int checkLen(int number)
{
	//the exam checking the number of digit
	//conditions and loops
	if (number < 0)
		return -1;
	else
		if (number < 10)
			return 1;
		else
			if (number < 100)
				return 2;
			else
				if (number < 1000)
					return 3;
				else
					return 4;
}

int checkDate(int day, int month, int year)
{
	//the exam is check date validation

	//check validation by conditions
	if (year <= 9999 && year >= 0)
	{
		if (month <= 12 && month >= 1)
		{
			if (month == 4 || month == 6 || month == 9 || month == 11)
			{
				if (day >= 1 && day <= 30)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				if (month == 2)
				{
					if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
					{
						if (day >= 1 && day <= 29)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else
					{
						if (day >= 1 && day <= 28)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
				else
				{
					if (day >= 1 && day <= 31)
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}

			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}

int IsOpen(int dayNum, int hour)
{

	//check validation hour and day and print if close or open
	if ((hour >= 8 && hour <= 19) && (dayNum >= 1 && dayNum <= 7))
	{
		switch (dayNum)
		{
		case 1:
		case 3:
			if ((hour >= 8 && hour < 12) || (hour >= 15 && hour < 18))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 2:
		case 4:
			if (hour >= 8 && hour < 13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 5:
			if ((hour >= 10 && hour < 14) || (hour >= 16 && hour < 20))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		case 6:
			if (hour >= 8 && hour < 11)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		default:
			return 0;
		}
	}
	else
	{
		return -1;
	}

}

int isPerfect(int number)
{
	//the exam is checking if the number is ferfect

	//import variable
	int sum = 0;
	//check if the number is perfect
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
		{
			sum = sum + i;
		}
	}
	if (sum == number)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isContained(int num1, int num2)
{
	//the exam is checking if the the second number includ in the one number

	//import variable
	int  indexCount, digitInTrash = 0;
	bool flag;
	//check if the the second number includ in the one number
	do {
		indexCount = -1;
		flag = false;
		for (int i = 10; i < num1 * 10; i = i * 10)
		{
			indexCount++;

			if (num1 % i == num2)
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
		num1 = num1 / 10;
		digitInTrash++;
	} while (num1 / 10 != 0);

	if (flag)
	{
		return  (indexCount + digitInTrash);
	}
	else
	{
		return -1;
	}



}



