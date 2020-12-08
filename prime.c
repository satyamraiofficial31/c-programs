#include <stdio.h>
int main()
{
   int a,i=2;
   printf("Enter a number ");
   scanf("%d",&a);
  do
  {
    if(a==2)
    {
      printf("Prime\n");
      break;
    }
    else if(a%i==0)
    {
      printf("Not Prime \n");
      break;
    }

    else
    {
      printf("Prime \n");
      break;
    }
  }while(i<=(a/2));









  return 0;
}