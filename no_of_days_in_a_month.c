#include <stdio.h>
void main()
{
   int monthno;
   
   printf("Input Month No : ");
   scanf("%d",&monthno);
   switch(monthno)
   {
	case 1:
    printf("Month have 31 days.");
	       break;
    case 2:
	printf("The 2nd month is a February and have 28 days.");
	break;
	case 3:
    printf("Month have 31 days.");
	       break;
    case 4:
    printf("Month have 31 days.");
	       break;
	case 5:
    printf("Month have 31 days.");
	       break;
    case 6:
    printf("Month have 31 days.");
	       break;
	case 7:
    printf("Month have 31 days.");
	       break;
	case 8:
    printf("Month have 31 days.");
	       break;
    case 9:
    printf("Month have 31 days.");
	       break;
	case 10:
    printf("Month have 31 days.");
	       break;
    case 11:
	       printf("Month have 30 days.");
	       break;
	case 12:
	       printf("Month have 31 days. ");
	       break;
	
    default:
	       printf("invalid Month number.");
	       break;
      }
}
