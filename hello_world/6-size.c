#include <stdio.h>

/**
 * main - The main Function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int myInt;
	char myChar;
	long int myLongInt;
	long myLongLongInt;
	float myFloat;

	printf("Size of a %ld byte(s) \n", sizeof(myChar));
	printf("Size of a %ld byte(s) \n", sizeof(myInt));
	printf("Size of a %ld byte(s) \n", sizeof(myLongInt));
	printf("Size of a %ld byte(s) \n", sizeof(myLongLongInt));
	printf("Size of a %ld byte(s) \n", sizeof(myFloat));
	return (0);
}
