#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[100];
    float marks;
};
int main()
{
    struct student std;
    std.id=01;
    strcpy(std.name , "Raju Kumar");
    std.marks=80;
    printf("\nid :%d \n name :%s \n and marks :%.2f",std.id,std.name,std.marks);
    printf("\n");
    std.id=02;
    strcpy(std.name , "Anand Kumar");
    std.marks=75;
    printf("\nid :%d \n name :%s \n and marks :%.2f",std.id,std.name,std.marks);
    printf("\n");
    std.id=03;
    strcpy(std.name , "Shahid Raza");
    std.marks=70;
    printf("\nid :%d \n name :%s \n and marks :%.2f",std.id,std.name,std.marks);
    printf("\n");
    return 0;

}
