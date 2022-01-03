#include<stdio.h>
int main()
{
    int a,b,num,i,fibo;
    printf("Enter two number : \n");
    scanf("%d %d",&a,&b);
    printf("Enter last term : \n");
    scanf("%d",&num);
    printf("%d,%d,",a,b);
    for(i=1;i<=num;i++)
    {
        fibo=a+b;
        a=b;
        b=fibo;
        printf("%d,",fibo);
    }

    return 0;

}
