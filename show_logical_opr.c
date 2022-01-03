#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int a,b;
    printf("Enter two number : ");
    scanf("%d %d",&a,&b);

    printf("Enter your choice (+,-,*,/) : \n");

    ch = getch();
    if(ch == '+'|| ch == '-'||ch=='*'||ch=='/'){
    switch(ch)
    {
    case '+':
             printf("used operator is %c : \n Addition : %d \n",ch,(a+b));
              break;

    case '-':
            printf("used operator is %c : \n Substraction : %d\n",ch, (a-b));
            break;
    case  '*':
            printf("used operator is %c : \n Multiplication : %d\n",ch,(a*b));
            break;
    case '/':
            printf("used operator is %c : \n Division : %d\n",ch,(a/b));
            break;
    default :
            printf("\nWarning ! this is Wrong Operator !\n");
            break;
    }
    }
    else{
            printf("sorry wrong operator!!\n");
            return;
    }

}
