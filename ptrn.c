#include<stdio.h>
int main()
{
   int i,j,clm,n;
   printf("n0. of column");
   scanf("%d",&n);
   clm=1;
   for(i=1;i<n*2;i++)
   {
       for(j=1;j<=clm;j++)
       {
           printf("* ");
       }
       if(i<n)
        clm++;
       else
        clm--;
       printf("\n");
   }

}
