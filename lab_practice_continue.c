#include <stdio.h>
int main()
{
for (int i = 0;i<=10 ; i++)
{
  if(i==5)
  {
    continue; //this skipps i=5 nsd gets to the new value thats i=6
  }

  printf("\n %d",i);
}

  return 0;
}