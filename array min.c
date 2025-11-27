#include<stdio.h>

int main()
{
   int i,a[5],min;
   printf("enter 5 integer numbers to continue:\n ");
   for(i=0;i<=4;i++)
   scanf("%d",&a[i]);
   min=a[0];
   for(i=0;i<=4;i++)
   {
   if (a[i]<min)
   min=a[i];
   }
   printf("sum of array elements:%d",min);
   return 0;
}
                                                                                                            












    