#include <stdio.h>
/**
* Main - prints the alphabet in lower case and then in uppercase,
* followed by a new line
* return: Always 0 to show success
*/
int main() {
    char ch = 'a';
    char c = 'A';
    
    while(ch <= 'z'){
        putchar(ch);
        ch++;
       
    }
    while (c <= 'Z'){
        putchar(c);
        c++;
    }
    putchar('\n');
    return(0);
}
