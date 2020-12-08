#include <stdio.h>
int main()
{
  int a;
  int b; //to store the remainder
  int st; //to store the reverse int

  printf("Enter a number ");
  scanf("%d",&a);
  int m;
  m=a; //stores the original value of a
  while(a!=0)
  {
b=a%10;
st=(st*10)+b;
a=a/10;
  }
  //checking wheather it is palindrome or not
  if(st==m)
  {
printf("it is palindrome \n");
  }
else
  {
  printf("Not palindrome \n");
  }
return 0;
}
