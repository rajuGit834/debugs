#include<stdio.h>
int main()
{
    int i,j,k=1,n;
    printf("enter row size :\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++,k=1)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
           /* for(k=1;k<=(i*2-1);k++)
            {
                printf("*");
            } */
            while(k<=i*2-1){
                printf("*");
                k++;
            }

        printf(" \n");
    }
    return 0;
}
