#include<stdio.h>

struct person {
    int age;
    float weight;
};

int main()
{
    struct person *ptr,persons;
    ptr=&persons;

    printf("Enter the age :\n");
    scanf("%d",&ptr->age);

    printf("Enter the weight :\n");
    scanf("%f",&ptr->weight);

    printf("%d %.2f",ptr->age,ptr->weight);
    return 0;
}

