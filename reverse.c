#include<stdio.h>
int main()
{
    int i,length=0;
    char temp,str[10];

    printf("Enter a string : \n");
    scanf("%s",&str);

    for(i=0;i<str[i]!='\0';i++)
    {
        length++;
    }
    printf("%d \n",length);

    for(i=0;i<length/2;i++)
    {
        temp=str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }

    for(i=0;i<length;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
