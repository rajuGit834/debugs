#include<stdio.h>
//#include<string.h>
int main()
{
    int len=0,i;
    char temp,string[20];

    printf("Enter Any String :\n");
    scanf("%s",&string);
    len=strlen(string);
    printf("%d\n",len);

    for(i=0;i<=len/2;i++){
        temp=string[i];
        string[i]=string[len-i-1];
        string[len-i-1]=temp;
    }
    for(i=0;i<=len;i++){
        printf("%c",string[i]);
    }
    return 0;
}
