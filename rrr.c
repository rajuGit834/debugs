#include<stdio.h>
char string[20];
int len=0;
int reverse()
{
   char temp;
   for(int i=0 ; i<=len/2;i++)
   {
        temp=string[i];
        string[i]=string[len-i-1];
        string[len-i-1]=temp;
   }

   for(int i=0;i<len;i++){
   printf("%c",string[i]);
   }
   return 0;
}
int main()
{
    int i;
    printf("Enter any String :\n");
    scanf("%s",&string);

    for(i=0;i<=string[i];i++)
    {
        len++;
    }
    printf("length : %d\n",len);
    reverse();
    return 0;
}
