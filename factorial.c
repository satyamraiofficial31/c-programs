#include <stdio.h>
int main()
{
int a,s=1;
printf("Enter a number ");
scanf("%d",&a);
do
{
  s=s*a;

  a=a-1;
} while(a!=0);
printf(" Factorial is %d",s);
  return 0;
}