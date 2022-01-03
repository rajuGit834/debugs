#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#define N 100
char ans,y,Y,n,N;
double bal=0.00;
double arr[50],arr1[50];
int i=0,j=0;
int match_pin,new_pin,old_pin,confirm_pin,pin;
int bal_enq()
{
    if(bal<0)
        return 0;
    else
    {
        printf("Current balance : %.2lf \n",bal);
        return bal;
    }
}

int deposit()
{
    double dep;
    printf("Enter amount to deposit : \n");
    scanf("%lf",&dep);
    if(dep>0)
    {
        bal=bal+dep;
        /*for(i=0;i<=arr[N];i++){
        arr[i]=dep;
        }*/
        arr[i]=dep;
        i++;
        printf("Current balance :%.2lf \n",bal);
        printf("Your balance is Successfully deposited, thank you ! \n");
        //printf("Current balance :%d",bal);
        return 0;
    }
    else{
        printf("please check the amount you entered\n");
    }
}

int withdraw()
{
    double with;
    printf("Enter Amount to withdraw :\n");
    scanf("%lf",&with);
    if( with <= bal )
    {
        bal=bal-with;
        /*for(i=0;i<=arr[N];i++){
        arr1[i]=with;
        }*/
        arr1[j]=with;
        j++;
        printf("Your withdraw is Successfull, thank you ! \n");
        printf("Current balance : %.2lf \n",bal);
    }
    else
        printf("Insufficient balance :\n");
}
int mini()
{
    double arr2[50],arr3[50];
    int k;
    time_t t;
    time(&t);
    for(k = 0; k < i; k++){
        arr2[k]=arr[k];
        printf("%s \t",ctime(&t));
        printf("credited : %.2lf \n",arr2[k]);
        printf("\n\n");
        /*arr3[k]=arr1[k];
        printf("Credited : %.2lf\n",arr3[k]);
        }*/
        }
        printf("\n\n");
        for(k = 0; k < j; k++){
        arr3[k]=arr1[k];
        printf("%s \t",ctime(&t));
        printf("Debited : %.2lf\n",arr3[k]);
        printf("\n\n");
        }
}

int change_pin()
{
    printf("Please enter old pin\n");
    scanf("%d",&old_pin);
    if(pin==old_pin)
    {
        printf("Please enter new pin:\n");
        scanf("%d",&new_pin);
        printf("Confirm New Pin:\n");
        scanf("%d",&confirm_pin);
        if(new_pin==confirm_pin){
        pin=new_pin;
        printf("Pin Changed Successfully. \n Thank you ! \n");
        main();
        }

    }
    else {
        printf("sorry!! Pin Not Matched, Re-enter the pin:\n");
    }
}
int password()
{
    printf("Do You want to set pin (Y/N)?");
    scanf("%c",&ans);

    if(ans=='y' || ans=='Y'){
    printf("\n Please set the 4 Digits Pin :\n");
    scanf("%d",&pin);
    printf("\n Congratulation , your pin Set \n");
    return 0;
    }

    else if(ans=='n' || ans=='N'){
        return 0;
    }
}
int main()
{
    int choice;
    password();
    printf("\n Please Enter your 4 Digits Pin :");
    scanf("%d",&match_pin);
    if(match_pin!=pin){
            printf("Invalid Pin!! \n Please Reenter the pin\n");
    }
    else {
        printf("\n***********************************************\n");
    printf("Welcome To My Bank.\n");
    printf("\n***********************************************\n");
    while(1){
        printf("\n***********************************************\n");
        printf("1. Balance Check\n2. Deposit\n3. Withdraw\n4. MiniStatement\n5. Change Pin\n6.Exit\n");
        printf("Enter your choice : \n");
        scanf("%d",&choice);
        switch(choice){

        case 1:
            bal_enq();
        break;

        case 2:
             deposit();
        break;

        case 3:
            withdraw();
        break;
        case 4:
            mini();
        break;
        case 5:
            change_pin();
        break;
        case 6:
            exit(0);
        break;
        default :
            printf("Please enter  valid choice :");
        break;
        }
    }
    }
    return 0;
}


