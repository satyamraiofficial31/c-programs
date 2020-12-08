#include <stdio.h>
int main()
{
  int a;
  int b;  //to store the remainder
  int st; //to store the reverse int
  int m;

  printf("Enter a number ");
  scanf("%d", &a);
  m = a;
  while (a != 0)
  {
    b = a % 10;
    st = (st * 10) + b;
    a = a / 10;
  }
  if (st == m)
  {
    printf("it is palindrome");
  }
  else
  {
    printf("Not palindrome ");
  }

  return 0;
}
