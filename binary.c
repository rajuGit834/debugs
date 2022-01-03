#include<stdio.h>

int main()
{
    int num,rem[20],i;
    printf("enter 0-9 number :\n");
    scanf("%d",&num);

    if(num == 0){
            printf("binary of given number is : %d",num);
            return;
    }
    for(i=0;num>0;i++)
    {
        rem[i]=num%2;
        num=num/2;

    }
    printf("Binary of the given number is : ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d\t",rem[i]);
    }
    return 0;
}
