#include<stdio.h>
int main()
{
    int a=5,b=5,c=5,d=5;
    // using post increment  and post decrement
    printf("post increment a= %d \n",a++); //it will print a=5;
    printf("post decrement b= %d \n",b--); //it will print b=5;
    // now we using pre-increment and decrement
    printf("pre increment c= %d \n",++c); //it will print c=6;
    printf("pre increment d= %d \n",--d); //it will print d=4;
    return 0;
}
