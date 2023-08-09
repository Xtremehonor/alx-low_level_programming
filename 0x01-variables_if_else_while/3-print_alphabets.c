#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then in uppercase,
 * followed by a new line.
 * Return: Always 0 to indicate success.
 */
int main(void)
{
	char ch = 'a';
	char c = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
