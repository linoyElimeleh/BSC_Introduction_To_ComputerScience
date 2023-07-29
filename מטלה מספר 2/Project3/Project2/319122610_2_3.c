//#include <stdio.h>
//
//
//void main()
//{
//	//import variable
//	int day, hour;
//	//enter input from user
//	printf("enter a day between 1 to 7");
//	scanf_s("%d", &day);
//	printf("enter a hour between 8 to 19");
//	scanf_s("%d", &hour);
//	//check validation hour and day and print if close or open
//	if ((hour >= 8 && hour <= 19) && (day >= 1 && day <= 7))
//	{
//		switch (day)
//		{
//		case 1:
//		case 3:
//			if ((hour >= 8 && hour < 12) || (hour >= 15 && hour < 18))
//			{
//				printf("the dental clinic is open");
//			}
//			else
//			{
//				printf("the dental clinic is close");
//			}
//			break;
//		case 2:
//		case 4:
//			if (hour >= 8 && hour < 13)
//			{
//				printf("the dental clinic is open");
//			}
//			else
//			{
//				printf("the dental clinic is close");
//			}
//			break;
//		case 5:
//			if ((hour >= 10 && hour < 14) || (hour >= 16 && hour < 20))
//			{
//				printf("the dental clinic is open");
//			}
//			else
//			{
//				printf("the dental clinic is close");
//			}
//			break;
//		case 6:
//			if (hour >= 8 && hour < 11)
//			{
//				printf("the dental clinic is open");
//			}
//			else
//			{
//				printf("the dental clinic is close");
//			}
//			break;
//		default:
//			printf("the dental clinic is close");
//		}
//	}
//	else
//	{
//		printf("Illegal time  or date");
//	}
//
//}