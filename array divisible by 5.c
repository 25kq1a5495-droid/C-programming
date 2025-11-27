#include<stdio.h>

int main()
{
   int i,a[5];
   printf("enter 5 integer numbers to continue:\n ");
   for(i=0;i<=4;i++)
   scanf("%d",&a[i]);
   for(i=0;i<=4;i++)
   {
   if(a[i]%5==0)
   printf("given array is divisible by 5:%d\n",a[i]);
   }
   return 0;
}
                                                                                                            












    