#include<stdio.h>

int main()
{
    int n1 , n2 , n3;


    printf("enter the First Number:");
    scanf("%d",&n1);

    printf("enter the Second Number:");
    scanf("%d",&n2);

    printf("enter the Third Number:");
    scanf("%d",&n3);
    
    

    if(n1 > n2 && n1 > n3)
    {
        printf("First number is largest");
    }
    else if(n2 > n1 && n2 > n3)
    {
        printf("Second number is largest");
    }
    else
    {
        printf("Third number is largest");
    }
    return 0;


}