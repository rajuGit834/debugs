#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    int g,h,i,j;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);
    a+=b;
    printf("\n Addition : %d",a);

    c=a;
    d=b;e
    c-=d;
    printf("\n substraction : %d",c);

    e=a;
    f=b;
    e*=f;
    printf("\n Multiplication : %d",e);

    g=a;
    h=b;
    g/=h;
    printf("\n Division : %d",g);

    i=a;
    j=b;
    i%=j;
    printf("\n Reminder : %d",i);
    return 0;
}
