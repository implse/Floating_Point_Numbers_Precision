/*
 Description : Declaring and using floating-point types

 https://en.wikipedia.org/wiki/C_data_types

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("Floating point type usage in C:");
	puts ("------------------------------");

	// Floating point types
	float			floatNumber;
	double			doubleNumber;
	long double		longDoubleNumber;

	// Size of floating point types
	printf("Storage size for unsigned float : %lu  bytes \n", sizeof(float));
	printf("Storage size for double :         %lu  bytes \n", sizeof(double));
	printf("Storage size for long double :   %lu  bytes \n", sizeof(long double));

	floatNumber = 2.0/3.0;
	doubleNumber = 2.0/3.0;
	longDoubleNumber = 2.0/3.0;

	puts ("---------------------------------------");
	puts("Simple Division Imprecision: number = 2.0 / 3.0");
	puts ("---------------------------------------");
	
	puts("\nCompare precision at 4 decimal points:");
	puts ("---------------------------------------");
	printf("floatNumber      = %1.4f\n", floatNumber);
	printf("doubleNumber     = %1.4lf\n", doubleNumber);
	printf("longDoubleNumber = %1.4Lf\n", longDoubleNumber);

	puts("\nCompare precision at 10 decimal points:");
	puts ("----------------------------------------");
	printf("floatNumber      = %1.10f\n", floatNumber);
	printf("doubleNumber     = %1.10lf\n", doubleNumber);
	printf("longDoubleNumber = %1.10Lf\n", longDoubleNumber);

	puts("\nCompare precision at 30 decimal points:");
	puts ("----------------------------------------");
	printf("floatNumber      = %1.30f\n", floatNumber);
	printf("doubleNumber     = %1.50lf\n", doubleNumber);
	printf("longDoubleNumber = %1.50Lg\n", longDoubleNumber);
	return 0;
}
