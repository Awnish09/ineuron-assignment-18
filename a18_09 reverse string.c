/*function to reverse the given string.*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
char reverse(char []);
int main()
{
    char str[50]="awnish is name";
    reverse(str);
    printf("%s ",str);
    getch();
    return 0;
}
char reverse(char a[])
{
    char temp[50]={0}, temp2[50]={0};
    int i, j, k;
    for(i=0, j=0; a[i]; i++, j++)
    {
        temp[j]=a[i];
        temp[j+1]=0;
        if(a[i+1]==0)
        {
            temp[j+1]=' ';
            temp[j+2]=0;
        }
        if(a[i]==32 || a[i+1]==0)
        {
            strcat(temp,temp2);
            strcpy(temp2,temp);
            j=-1;
        }
    }
    strcpy(a,temp2);
}
