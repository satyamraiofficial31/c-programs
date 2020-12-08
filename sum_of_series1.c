#include <stdio.h>
int main()
{
  int n2, sum, i = 12;
  printf("Enter a ending value ");
  scanf("%d", &n2);
  while (i <= n2)
  {
    sum = sum + i;
    i = i + 10;
  }
  printf("The sum of series is %d", sum);
  return 0;
}