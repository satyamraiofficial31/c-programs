#include <stdio.h>
int main()
{
    int a,b,c;
    int avg;
    printf("Enter marks \n");
scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Your grade is ");
    switch(avg/10)
    {
      case 9:
      printf("A");
      break;
      case 8:
      printf("B");
      break;
      default :
      printf("F");

    }

     return 0;
}