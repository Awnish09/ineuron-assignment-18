/*function to reverse the string*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void reverse(char []);
int main()
{
    int a;
    char str[25];
    printf("Enter a word.\n");
    fgets(str, 25, stdin);
    reverse(str);
    getch();
    return 0;
}

void reverse(char a[])
{
    int i, n;
    char x;
    n=strlen(a)-1;
    for(i=0; i<n/2; i++)
    {
       x=a[i];
       a[i]=a[n-1-i];
       a[n-1-i]=x;
    }
    printf("%s",a);
}
