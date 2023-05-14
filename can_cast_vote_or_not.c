#include<stdio.h>

int main()
{
    int age;


    printf("enter the age:");
    scanf("%d",&age);



    if(age >= 18)
    {
        printf("He/She is eligible to cast his/her own vote");
    }
    else
    {
        printf("He/She is not eligible to cast his/her own vote");
    }
    return 0;


}