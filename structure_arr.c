#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[40];
    float pr;
};
int main()
{
    int i;
    struct student record[2];
    // First student record
    record[0].id=1;
    strcpy(record[0].name,"Raju");
    record[0].pr=86.5;

    // second student record
    record[1].id=2;
    strcpy(record[1].name,"Anand");
    record[1].pr=81.5;

    // third student record
    record[2].id=3;
    strcpy(record[2].name,"Shahid");
    record[2].pr=90.5;

    for(i=0;i<=2;i++)
    {
        printf("Record of student : %d \n",i+1);
        printf("Student id : %d\n",record[i].id);
        printf("Student name : %s \n",record[i].name);
        printf("Student percentage : %.2f\n",record[i].pr);
    }
    return 0;
}
