//#include <stdio.h>
//#include <string.h>
//
//
//void main()
//{
//	//import variable
//	int day, month, year, dateFromUser, arrayForSeperate[3];
//	//enter input from user
//	printf("enter a date time in this format :dd mm yyyy (enter to seperate)");
//	for (int i = 0; i < 3; i++)
//	{
//		scanf_s("%d", &arrayForSeperate[i]);
//	}
//	///separate between the month, year and day
//	day = arrayForSeperate[0];month = arrayForSeperate[1];year = arrayForSeperate[2];
//	//check validation
//	if (year <= 9999 && year >= 0)
//	{
//		if (month <= 12 && month >= 1)
//		{
//			if (month == 4 || month == 6 || month == 9 || month == 11)
//			{
//				if (day >= 1 && day <= 30)
//				{
//					printf("the date is valid");
//
//				}
//				else
//				{
//					printf("the day is invalid");
//
//				}
//			}
//			else
//			{
//				if (month == 2)
//				{
//					if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//					{
//						if (day >= 1 && day <= 29)
//						{
//							printf("the date is valid");
//
//						}
//						else
//						{
//							printf("the day is invalid");
//
//						}
//					}
//					else
//					{
//						if (day >= 1 && day <= 28)
//						{
//							printf("the date is valid");
//
//						}
//						else
//						{
//							printf("the day is invalid");
//
//						}
//					}
//				}
//				else
//				{
//					if (day >= 1 && day <= 31)
//					{
//						printf("the date is valid");
//
//					}
//					else
//					{
//						printf("the day is invalid");
//
//					}
//				}
//
//			}
//		}
//		else
//		{
//			printf("the month is invalid");
//		}
//	}
//	else
//	{
//		printf("the year is invalid");
//	}
//}