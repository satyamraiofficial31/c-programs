#include <stdio.h>
int main()
{
  int a;
  char c;
  printf("Enter integer ");
  scanf("%d",&a);
  //getchar();//gets the character and allows input after int
  //instead of get char you can use space before %c
  printf("Enter character ");
  scanf(" %c",&c);
  printf("\nchar value %c \nint value %d",c,a);
}