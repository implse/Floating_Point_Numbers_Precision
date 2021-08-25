#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Simple addition
    float a = .33;
    float b = .10;
    float c = a + b;

    puts ("---------------------------------------");
	puts("Simple Division Imprecision: number = 0.33 + 0.10");
	puts ("---------------------------------------");

    // Two decimal place
    puts("Two decimal view");
    printf("%.2f\n", c);
    puts ("---------------------------------------");

    // Ten decimal place
    puts("Two decimal view");
    printf("%.10f\n", c);
    puts ("---------------------------------------");

    // Twenty decimal place
    puts("Twenty decimal view");
    printf("%.20f\n", c);
    puts ("---------------------------------------");
}