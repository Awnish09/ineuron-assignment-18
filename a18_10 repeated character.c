/*function to find the repeated character in a given string.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>


void repeated(char []);
int main()
{
    char str[100];
    printf("Enter a word.\n");
    fflush(stdin);
    fgets(str,25,stdin);
    repeated(str);
    getch();
    return 0;
}


void repeated(char a[])
{
    int i, j, k, l, n;
    n=strlen(a)-1;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j] && a[i]!=' ')
            {
                printf("%c is a repeated character.\n",a[i]);
                break;
            }
        }
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j] && a[i]!=' ')
            {
                for(k=j; k<n; k++)
                    a[k]=a[k+1];
                n--;
                k--;
            }
        }

    }
}
