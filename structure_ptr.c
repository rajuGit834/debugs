#include<stdio.h>
struct student{
    int id;
    char name[60];
    float pr;
};

int main()
{
    int i;
    struct student record[3];
    printf("Enter Student ID , name and percentage :\n");
    for(i=0;i<=3;i++)
    {
        scanf("%d %s %f",&record[i].id,record[i].name,&record[i].pr);
    }
    for(i=0;i<=3;i++)
    {
        printf("\n Student ID :%d ,\n name :%s and \n percentage :%f",record[i].id,record[i].name,record[i].pr);
    }
    return 0;
}
