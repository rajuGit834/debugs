#include<stdio.h>
int main()
{
    char name[20],temp;
    int len=0,i;
    printf("Enter a string :");
    scanf("%s",name);
    for(i=0;i<name[i];i++)
    {
        len++;
    }
    printf("\n length :%d",len);
    for(i=0;i<=len/2;i++)
    {
        temp=name[i];
        name[i]=name[len-i];
        name[len-i]=temp;
    }
    for(i=0;i<=len;i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}

