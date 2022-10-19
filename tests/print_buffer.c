#include <stdio.h>
#include <unistd.h>

int main()
{
   int a=0,b=0,c=0;

   printf ("Enter two numbers: ");

   sleep (3);

   scanf("%d%d",&b,&c);

   a=b+c;

   printf("The sum is %d\n",a);
   
   return (1);
}