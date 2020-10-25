#include<stdio.h>
void main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            if(i<j){
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
