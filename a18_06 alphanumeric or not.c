/*function to find if the string is alphanumeric or not*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void alpha(char []);
int main()
{

    char a[20];
    int b;
    printf("Enter a word.\n");
    fgets(a, 20, stdin);
    alpha(a);

    getch();
    return 0;
}



void alpha(char c[])
{
    int i, j=0, k=0;

    for(i=0; c[i]; i++)
    {
        if(c[i]>='a' && c[i]<='z'|| c[i]>='A' && c[i]<='Z')
            j+=1;
        else
            if(c[i]>='0' && c[i]<='9')
                 k+=1;
    }
    if(j!=0&&k!=0)
        printf("It is an alphanumeric");
    else
        printf("It is not an alphanumeric");

}
