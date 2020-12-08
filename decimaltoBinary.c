#include <stdio.h>
#include <string.h>
int main()
{
  int a, r, s, base = 1;

  printf("Enter a number ");
  scanf("%d", &a);
  while (a != 0)
  {
    r = a % 2;
    s = s + (r * base);
    printf("2 | %d - %d \n", a, r);
    printf("---------------\n");
    a = a / 2;
    base = base * 10;
  }
  printf("  | 0 \n");
  printf("\n The answer is %d", s);

  return 0;
}