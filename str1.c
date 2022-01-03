#include<stdio.h>
struct student{
    int id;
    char name[10];
    float marks;
};
enum flag {sunday = 7, monday = 6, tuesday = 5, wednesday = 4, thrusday = 3, friday = 2, saturday = 1};

int main()
{
    int i;
    enum flag f;
    f = sunday;
    for(i=sunday; i>=saturday; i--){
        printf("%d ",i);
    }

    int size = sizeof(f) / sizeof(monday);

    printf(" enum size is : %d \n", size);
     printf(" size of int : %d \n", sizeof(int)*4);
       printf(" size of char : %d \n", sizeof(char));
         printf(" size of long : %d ", sizeof(long)*8);

}
