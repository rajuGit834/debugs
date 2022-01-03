#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,rem[20],i;
    system("cls");
    printf("(0-999)andi mandi sandi jo iss bra number diya wo randi :\n");
    scanf("%d",&num);

    for(i=0;i>0;i++)
    {
        rem[i]=num%2;
        num=num/2;
    }
    for(i=i-1;i>0;i--)
    {
        printf("%d",rem[i]);
    }
    return 0;
}
