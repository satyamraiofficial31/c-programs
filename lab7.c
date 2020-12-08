#include <stdio.h>
int main()
     {
         int b,c,mul,sub,add;
         char a;
         printf("Enter + to add \nEnter - to subtract \nEnter * to multiply \n ");
         scanf("%c",&a);
         printf("Enter 2 numbers \n");
         scanf("%d%d",&b,&c);

         switch(a)
         {
           case '+':
           add=b+c;
           printf("=%d",add);
           break;
           case '-':

           sub=b-c;
           printf("=%d",sub);
           break;
           case '*':
           mul=c*b;
           printf("=%d",mul);
           break;
           default:
           printf("Invalid\n");
         }
            return 0;
     }