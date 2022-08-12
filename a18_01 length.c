/*function to calculate length of the string*/

#include<stdio.h>
#include<conio.h>

int length(char [], int);
int main()
{
    int a;
    char str[25];
    printf("Enter a word.\n");
    fgets(str, 25, stdin);
    a=length(str, 25);
    printf("The length of the string is %d",a);
    getch();
    return 0;
}

int length(char a[], int b)
{
    int count, i;
    for(i=0, count=0; a[i]; a++)
        count++;
    return count-1;
}
