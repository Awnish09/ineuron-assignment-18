/*function to count words in a given string*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int count(char []);
int main()
{
    int a;
    char str[50];
    printf("Enter a sentence.\n");
    fflush(stdin);
    fgets(str,25,stdin);
    a=count(str);
    printf("There are %d words in a given string.",a);
    getch();
    return 0;
}


//function to remove extra space from the sentence
void rmvspc(char a[])
{
    int i, j, k, n;
    n=strlen(a)-1;
    for(i=0; a[i]; i++)
    {
        if(a[0]==' ')
        {
            for(j=0; j<n; j++)
                a[j]=a[j+1];
            a[n]='\0';
            i--;
        }
        if(a[n-1]==' ')
        {
            for(j=0; j<n; j++)
                a[n-1]='\0';
            n--;
            i--;
        }
        if(a[i]==' ' && a[i+1]==' ')
        {
            for(j=i+1; j<n; j++)
                a[j]=a[j+1];
            a[n]='\0';
            j--;
            i--;
        }
    }
}

void rmvspc(char []);
int count(char a[])
{
    int i, count=0;
    rmvspc(a);
    for(i=0; a[i]; i++)
    {
        if(a[i]==' ')
            count++;
    }
    return count+1;
}
