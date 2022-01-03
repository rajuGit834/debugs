#include<stdio.h>
#include<conio.h>

void voter();
void senior_citizen();

void voter(int age)
{
    if(age<18)
    {
        printf("Your age is : %d , you are not eligible for voting.\n",age);
    }
    else if(age==18)
    {
        printf("your age is : %d , you are eligible for voting.\n",age);
    }
    else if(age>18)
    {
        printf("your age is : %d , you are eligible for voting.\n",age);
    }
}

void senior_citizen(int age)
{
    if(age<=60)
    {
        printf("\nYour age is : %d , you are not in senior citizen category.\n",age);
    }
    else if(age>=60 || age==60)
    {
        printf("\nyour age is : %d , you are in senior citizen cotegory.\n",age);
    }
}
int main()
{
    char ch;
    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    printf("Enter your choice(1 or 2) :");
    //scanf("%c",&ch);
    ch=getch();

    switch(ch)
    {
    case '1':
        voter(age);
        break;
    case '2':
        senior_citizen(age);
        break;
    default:
        printf("Wrong choice !\n");
        break;
    }
    return 0;
}
