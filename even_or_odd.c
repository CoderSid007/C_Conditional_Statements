#include<stdio.h>

int main()
{
    int num1;


    printf("enter the first number:");
    scanf("%d",&num1);



    if(num1 % 2 == 0)
    {
        printf("it is a even number");
    }
    else
    {
        printf("it is a odd number");
    }
    return 0;


}