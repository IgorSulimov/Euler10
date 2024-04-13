#include <stdlib.h>
#include "Euler.h"
unsigned long long Problem_Euler81(unsigned long long number)
{
	unsigned long long* array = (unsigned long long*)calloc(number, sizeof(number));
	array[0] = 2;
	unsigned long long s = 0;
	for (unsigned long long i = 3; i < number; i += 2)
	{
		unsigned long long k = 0;
		int not_prime = 0;
		for (k; array[k] != 0; k++)
		{
			if (i % array[k] == 0) {
				not_prime = 1;
				break;
			}
		}
		if (not_prime != 1)
		{
			array[s + 1] = i;
			s += 1;
		}

	}


	unsigned long long sum = 0;

	for (unsigned long long p = 0; array[p] != 0; p++)
	{
		sum = array[p] + sum;
	}
	return sum;
	free(array);
}