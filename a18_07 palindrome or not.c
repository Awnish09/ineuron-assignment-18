/*function to find the string is palindrome or not*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void plnd(char []);
int main()
{

    char str[20];
    int b;
    printf("Enter a word.\n");
    fgets(str, 20, stdin);
    plnd(str);
    getch();
}



void plnd(char c[])
{
    int i, j=0, k, x;

    k=strlen(c)-1;
    x=k;
    for(i=0; i<x/2; i++, k--)
    {
        if(c[i]!=c[k-1])
            continue;
        j+=1;
    }

    if(j==i)
        printf("It is palindrome");

    else
        printf("It is not palindrome");

}
