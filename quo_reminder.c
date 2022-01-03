#include<stdio.h>
int main()
{
    int rem;
    float num1,num2;
    float quo;

    printf("Enter two number : \n");
    scanf("%f %f",&num1,&num2);


    rem =((int)num1%(int)num2);
    printf("Reminder : %d \n",rem);

    quo=(num1/num2);
    printf("Quotient : %.2f\n",quo);
    return 0;
}
