#include<stdio.h>
void print()
{
    printf("inside print");
    main();
}
int main()
{
    printf("Hello ! inside main ");
    print();
    return 0;
}
