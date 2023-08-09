#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num = 48;
    
    while (num <=57)
    {
        if (num==57){
            putchar(num);
            break;
        }
        else{
            putchar(num);
            putchar(44);
            putchar(32);
            num++;
        }  
    }
    putchar('\n');
    return(0);
}
