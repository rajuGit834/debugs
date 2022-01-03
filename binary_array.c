#include<stdio.h>

int i;
void binary_array(int arr[], int len){
    int arr2[6];
    int j,count=0;
    for(i=0;i<len;i++){
        if(arr[i]==1){
            arr2[i]=arr[i];
            count++;
            printf("all 1's -> %d\n",arr[i]);
        }
    }
    j=count;
    for(i=j;i<len;i++){
        if(arr[i] != 1){
            arr2[i]=0;
            printf("all 0's -> %d\n",arr2[i]);
        }
    }
    for(i=0;i<len;i++){
        printf("%d\t",arr2[i]);
    }

}
int main(){
    int arr[6] = {1,0,1,1,1,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("\nSize of an array is : %d\n",len);
    binary_array(arr,len);
    return 0;
}
