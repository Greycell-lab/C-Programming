#include <stdio.h>
#include <stdlib.h>

int main()
{
    char wait;
    while(wait!='\r')
    {
        printf("Usage:\n1. First Number\n2. Operator\n3. Second Number\n4. Enter\nExample: 12+12 ENTER\nPress ENTER to start!");
        wait = getch();
    }
    system("cls");
    printf("Calculation: ");
    char o[50];
    char oo[50];
    int i=-1;
    int l=-1;
    while(o[i]!='+' && o[i]!='-' && o[i]!='*' && o[i]!='/')
    {
        i++;
        o[i] = getch();
        printf("%c", o[i]);
    }
    while(oo[l]!='\r')
    {
        l++;
        oo[l] = getch();
        printf("%c", oo[l]);
    }
    int res;
    int a = atoi(o);
    int b = atoi(oo);
    if(o[i]=='+') res = a + b;
    else if(o[i]=='-') res = a - b;
    else if(o[i]=='*') res = a * b;
    else if(o[i]=='/') res = a / b;

    printf("\nResult: %d", res);
}
