#include<stdio.h>

int main()
{
    int height;


    printf("enter the height:");
    scanf("%d",&height);



    if(height < 200)
    {
        printf("dwarf");
    }
    else 
    {
        printf("Tall");
    }
    return 0;


}