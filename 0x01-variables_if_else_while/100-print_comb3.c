#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void) 
{
int num;
int numb;

for (num = 48;num <= 57;num++)
    for(numb = 48;numb <= 57;numb++)
    {
        if (num < numb)
        {
        putchar(num);
        putchar(numb);
            if (num != 56 || numb != 57)
            {
               putchar(',');
               putchar(' ');
            }
            }
    }
    putchar('\n');
    return (0);
}
