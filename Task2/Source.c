#include<stdio.h>
#include<math.h>
// Variant 19(5)
void calculateSumForFirstExpresion()
{
	double sum = 0, sum10 = 0, eps = 0.00000001, el;
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		el = pow(-1.0, i) * (double)((i + 1) / (pow(3, i) + pow(2, i)));
		if (fabs(el) >= eps)
		{
			sum += el;
		}
	}
	sum10 = sum;
	printf_s("\n Sum of first 10 elements: %10.7lf", sum10);
}
void calculateSumForSecondExpresion()
{
	double sum = 0, sum10 = 0, eps = 0.00000001, el;
	int n = 10;
	for (int i = 0; i < n; i++)
	{
		el = pow(-1.0, i) * ((i + 1.0) / ((2.0 * i + 1.0) * (3.0 * n + 1.0)));
		if (fabs(el) >= eps)
		{
			sum += el;
		}
	}
	sum10 = sum;
	printf_s("\n Sum of first 10 elements: %10.7lf", sum10);
}
int main()
{
	calculateSumForFirstExpresion();
	calculateSumForSecondExpresion();
}