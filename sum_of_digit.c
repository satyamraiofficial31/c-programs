#include <stdio.h>
int main()
{

  int a, r, s;
  printf("Enter A number ");
  scanf("%d", &a);
  while (a != 0)
  {
    r = a % 10;
    s = s + r;
    a = a / 10;
  }
  printf("The sum is %d", s);
  return 0;
}