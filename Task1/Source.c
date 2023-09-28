#include<stdio.h>
// Variant 19(5)
void checkFirstArea(double x, double y)
{
	if ((x >= -1 && x <= 0 && y >= -1 && y <= 0) || (y > 0 && y <= 1 && x >= 0 && x <= y))
	{
		printf_s("\n This point is in this area");
	}
	else
	{
		printf_s("\n This point is not in this area");
	}
}
void checkSecondArea(double x, double y)
{
	if ((x <= 0 && x >= -1 && y <= 1 && y >= 1) || (x >= 0 && x <= 1 && y >= -1 && y <= 0))
	{
		printf_s("\n This point is in this area");
	}
	else
	{
		printf_s("\n This point is not in this area");
	}
}
int main(void)
{
	double x, y; // input data
	printf_s("\n Enter the coordinate x: "); scanf_s("%lf", &x);
	printf_s("\n Enter the coordinate y: "); scanf_s("%lf", &y);
	// Task1
	checkFirstArea(x, y);
	
	// Task2
	printf_s("\n Enter the coordinate x: "); scanf_s("%lf", &x);
	printf_s("\n Enter the coordinate y: "); scanf_s("%lf", &y);
	checkSecondArea(x, y);
	return 0;
}