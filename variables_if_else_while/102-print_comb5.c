#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations of two two-digit numbers 
 * 
 * description: The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
 * You can only use the putchar function (every other function 
 * (printf, puts, etc…) is forbidden)
 * You can only use putchar eight times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Allways (0)
 */
int main(void)
{
	int num = 48;
	int secNum = 48;
    int i = 0;

    for (; i < 10; i++)
    {
        for (; num <= 57; num++)
	    {
		    secnum = 48;
		    for (; secnum <= 57; secnum++)
		    {
			    if (num < secnum)
			    {
				    putchar(num);
				    putchar(secnum);
				    putchar(',');
				    putchar(' ');
				    /* if (num == 56 && secNum == 57)
				    {
					    putchar('\n');
				    }
				    else
				    {
					    putchar(',');
					    putchar(' ');
				    }*/
			    }
		    }
	    }
        
    }

	return (0);
}
