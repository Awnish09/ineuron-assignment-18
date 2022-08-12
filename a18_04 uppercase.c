/*function to transform string into uppercase*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void uprcse(char [], int);
int main()
{
    int a;
    char str[25];
    printf("Enter a word.\n");
    fgets(str, 25, stdin);
    uprcse(str, 25);
    getch();
    return 0;
}

void uprcse(char a[], int b)
{
    int i, n;
    for(i=0; a[i]; i++)
    {
        if(a[i]>='a' && a[i]<='z')
           a[i]-=32;
    }

    printf("%s",a);
}
