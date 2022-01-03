#include<stdio.h>
#include<string.h>

struct person {
char name[10];
int citno;
float salary;
};

int main()
{
    struct person person1;{
    strcpy(person1.name,"Raju Kumar");
    person1.citno=102;
    person1.salary=30000.40;
    }

    printf("\n Name : %s",person1.name);
    printf("\n Citizenship number :%d",person1.citno);
    printf("\n salary : %2f",person1.salary);
    return 0;
}
