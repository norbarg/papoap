#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num1, num2, num3, num4, num5;

	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	if ((num1 >= 1000 && num1 <= 9999) && (num1 % 10 != ((num1 / 10) % 10)) && (num1 % 10 != ((num1 / 100) % 10)) && ((num1 / 10) % 10) != ((num1 / 100) % 10))
	{
		printf("%d satisfy 1 condition\n", num1);
	}
	else if (num1 % 10 == 3 || num1 % 10 == 6 || num1 % 10 == 9) 
	{
		printf("%d satisfy 2 condition\n", num1);
	}
	else if ((num1 >= 100 && num1 <= 999) && (num1 % 10 == 0 || ((num1 / 10) % 10) == 0 || ((num1 / 100) % 10) == 0))
	{
		printf("%d satisfy 3 condition\n", num1);
	}
	else 
	{
		printf("%d satisfy no one condition\n", num1);
	}
	if ((num2 >= 1000 && num2 <= 9999) && (num2 % 10 != ((num2 / 10) % 10)) && (num2 % 10 != ((num2 / 100) % 10)) && ((num2 / 10) % 10) != ((num2 / 100) % 10))
	{
		printf("%d satisfy 1 condition\n", num2);
	}
	else if (num2 % 10 == 3 || num2 % 10 == 6 || num2 % 10 == 9)
	{
		printf("%d satisfy 2 condition\n", num2);
	}
	else if ((num2 >= 100 && num2 <= 999) && (num2 % 10 == 0 || ((num2 / 10) % 10) == 0 || ((num2 / 100) % 10) == 0))
	{
		printf("%d satisfy 3 condition\n", num2);
	}
	else
	{
		printf("%d satisfy no one condition\n", num2);
	}
	if ((num3 >= 1000 && num3 <= 9999) && (num3 % 10 != ((num3 / 10) % 10)) && (num3 % 10 != ((num3 / 100) % 10)) && ((num3 / 10) % 10) != ((num3 / 100) % 10))
	{
		printf("%d satisfy 1 condition\n", num3);
	}
	else if (num3 % 10 == 3 || num3 % 10 == 6 || num3 % 10 == 9)
	{
		printf("%d satisfy 2 condition\n", num3);
	}
	else if ((num3 >= 100 && num3 <= 999) && (num3 % 10 == 0 || ((num3 / 10) % 10) == 0 || ((num3 / 100) % 10) == 0))
	{
		printf("%d satisfy 3 condition\n", num3);
	}
	else
	{
		printf("%d satisfy no one condition\n", num3);
	}
	if ((num4 >= 1000 && num4 <= 9999) && (num4 % 10 != ((num4 / 10) % 10)) && (num4 % 10 != ((num4 / 100) % 10)) && ((num4 / 10) % 10) != ((num4 / 100) % 10))
	{
		printf("%d satisfy 1 condition\n", num4);
	}
	else if (num4 % 10 == 3 || num4 % 10 == 6 || num4 % 10 == 9)
	{
		printf("%d satisfy 2 condition\n", num4);
	}
	else if ((num4 >= 100 && num4 <= 999) && (num4 % 10 == 0 || ((num4 / 10) % 10) == 0 || ((num4 / 100) % 10) == 0))
	{
		printf("%d satisfy 3 condition\n", num4);
	}
	else
	{
		printf("%d satisfy no one condition\n", num4);
	}
	if ((num5 >= 1000 && num5 <= 9999) && (num5 % 10 != ((num5 / 10) % 10)) && (num5 % 10 != ((num5 / 100) % 10)) && ((num5 / 10) % 10) != ((num5 / 100) % 10))
	{
		printf("%d satisfy 1 condition\n", num5);
	}
	else if (num5 % 10 == 3 || num5 % 10 == 6 || num5 % 10 == 9)
	{
		printf("%d satisfy 2 condition\n", num5);
	}
	else if ((num5 >= 100 && num5 <= 999) && (num5 % 10 == 0 || ((num5 / 10) % 10) == 0 || ((num5 / 100) % 10) == 0))
	{
		printf("%d satisfy 3 condition\n", num5);
	}
	else
	{
		printf("%d satisfy no one condition\n", num5);
	}
}
