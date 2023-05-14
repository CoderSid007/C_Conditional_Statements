#include<stdio.h>

int main()
{
    int num1 , num2;


    printf("enter the first number:");
    scanf("%d",&num1);


    printf("enter the second number:");
    scanf("%d",&num2);


    if(num1 == num2)
    {
        printf("Number1 and Number2 are equal");
    }
    else
    {
        printf("They are not equal");
    }
    return 0;


}