#include<stdio.h>
int main()
{
    int num,i,table;
    printf("Enter a number : \n");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        table=num*i;
        printf("%d * %d = %d\n",num,i,table);
    }
    return 0;

}
