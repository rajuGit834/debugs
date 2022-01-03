#include<stdio.h>
int main()
{
    int i,length=0;
    char temp,str[20];
    char ch[5];
    printf("Enter a string : \n");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("Length : %d \n",length);


    for(i=0; i<length/2; i++)
    {
        temp=str[i];
        str[i] = str[length-1-i];
        str[length-1-i]=temp;

    }
    for(i=0;i<length;i++){
         printf("%c",str[i]);
    }
    return 0;
}
