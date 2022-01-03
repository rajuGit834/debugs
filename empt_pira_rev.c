#include<stdio.h>
int main()
{
    int i,j,k,n;
    int m=1;
    printf("Enter row size :\n");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i*2-1;j++)
        {

            if(j==1 || j==i*2-1 || i==n)
            {
                printf("*");

            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        for(k=1;k<=m;k++)
        {
            printf(" ");
        }
        m++;

    }
    return 0;
}
