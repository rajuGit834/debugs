#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter row number : \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=(i*2-1);k++)
        {
            if(k==1 || k==(i*2-1) || i==n)
            {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
