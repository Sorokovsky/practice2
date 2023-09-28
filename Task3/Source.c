#include<stdio.h>
#include<math.h>
//Variant 19(5)
void graf1()
{
	double x = 0, y = 0, n = 19;
	double period = 4, step = 0;
	printf_s("|  x  |  y  |\n");
	for (double i = 0.0; i <= n; i += 0.25)
	{

		if ((int)i % (int)period == 0)
		{
			step += period;
		}
		x = i;
		if (x >= 0 + step && x <= 2 + step)
		{
			y = (double)sqrt(1.0 - x * x);
		}
		printf_s("| %.4lf | %.4lf |\n", x, y);
	}
}
int main()
{
	graf1();
}