#include <stdio.h>
void main() {
  int n1,n2,o;
  printf("Enter the first Integer :");
  scanf("%d",&n1);
  printf("Enter the second Integer :");
  scanf("%d",&n2);
  
    printf("\nInput your option :\n");
    printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
    scanf("%d",&o);
    switch(o) {
      case 1:
        printf("The Addition of  %d and %d is: %d",n1,n2,n1+n2);
        break;
        
      case 2:
        printf("The Substraction of %d  and %d is: %d",n1,n2,n1-n2);
        break;
        
      case 3:
        printf("The Multiplication of %d  and %d is: %d",n1,n2,n1*n2);
        break;  
      
      case 4:
        if(n2==0) {
          printf("The second integer is zero. Devide by zero.");
        } else {
          printf("The Division of %d  and %d is : %d",n1,n2,n1/n2);
        }  
        break;
        
      default:
        printf("INcorrect option");
        break; 
    }
}