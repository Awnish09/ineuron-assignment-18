/*function to transform string into lowercase*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void lwrcse(char [], int);
int main()
{
    char str[25];
    printf("Enter a word.\n");
    fgets(str, 25, stdin);
    lwrcse(str, 25);
    getch();
    return 0;
}

void lwrcse(char a[], int b)
{
    int i, n;
    for(i=0; a[i]; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
           a[i]+=32;
    }

    printf("%s",a);
}
