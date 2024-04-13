#include <stdio.h>
#include "Euler.h"
#include <time.h>

int main()
{
	clock_t start, end;
	start = clock();
	unsigned long long number = 2000000;
	printf("%llu\n", Problem_Euler81(number));
	end = clock();
	printf("Time: %.4lf\n", (double)(end - start) / (CLOCKS_PER_SEC));

}