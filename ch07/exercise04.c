// C Primer Plus
// Chapter 7 Exercise 4

// Using if else statements, write a program that reads input up to #, replaces
// each period with an exclamation mark, replaces each exclamation mark
// initially present with two exclamation marks, and reports at the end the
// number of substitutions it has made.

#include <stdio.h>

#define STOP '#'

int main(void)
{
	char ch;
	int substitution_count = 0;

	printf("Enter input (%c to exit):\n", STOP);
	while ((ch = getchar()) != STOP)
	{
		if (ch == '.')
		{
		substitution_count++;
		printf("!");
		}
		else if (ch == '!')
		{
		substitution_count++;
		printf("!!");
		}
		else
		putchar(ch);
	}
	printf("The program has done the substitution %d time(s)", substitution_count);

	return 0;
}
