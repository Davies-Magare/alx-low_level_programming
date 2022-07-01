#include <stdio.h>
/**
 * main - Entry point
 *
 * Return 0 (Success)
 */

int main(void) /*Printing the values of all the types in the system*/
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of long: %ld byte(s)\n", sizeof(long));
	printf("Size of long long: %ld byte(s)\n", sizeof(long long));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	return (0);/*returns zero since type was int*/
}
/*Printing values of all types in the system*/
