#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: ALways 0 (Success)
 */
int main() 
{
    int num;
    int numb;
    int numc;

    for (num = 48; num <= 57; num++)
        for(numb = 48; numb <= 57; numb++)
            for(numc = 48;numc <= 57;numc++)
                {
                    if (num < numb && num < numc && numb < numc)
                    {
                    putchar(num);
                    putchar(numb);
                    putchar(numc);
                    if (num != 55 || numb !=56 || numc!= 57)
                    {
                       putchar(',');
                       putchar(' ');
                    }
                    }
                    }
    putchar('\n');
    return (0);
}
