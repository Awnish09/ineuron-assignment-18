/*function to compare two strings*/

#include<conio.h>
#include<stdio.h>
#include<string.h>

int cmpr(char [], char []);
int main()
{
    int x;
    char a[20]="ram", b[20]="ramesh";
    x=cmpr(a,b);
    printf("%d",x);
}


int cmpr(char x[], char y[])
{
    int i, j=0, k;
    if(strlen(x)>strlen(y))
        k=strlen(x)-1;
    else
        k=strlen(y)-1;
    for(i=0; i<k; i++)
    {
        if(x[i]==y[i])
            j++;
    }
    if(i==j)
        return 0;
    else
        for(j; j<k; j++)
        {
            if(x[j]<y[j])
                return -1;
            else
                return 1;
        }
}
