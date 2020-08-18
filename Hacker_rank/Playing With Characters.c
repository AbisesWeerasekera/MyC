#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char s2[100];
scanf("%c\n%s\n%[^\n]",&ch,&s,&s2);

printf("%c \n%s \n%s ",ch,s,s2);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


