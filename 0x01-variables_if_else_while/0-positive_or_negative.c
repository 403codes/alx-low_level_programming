#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description - checks if n is negative, zero, or positive
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n > 0) {
        printf("%d is positive\n", n);
    }
    else if (n == 0){
        printf("%d is zero\n, n");
    }
    else if (n < 0){
        printf("%d is negative\n", n);
    }
    else{
        printf("none");
    }
    
	return (0);
}