#include<stdio.h>
#include<conio.h>
int main(){

    //If Statement
    int a;
    printf("Enter a Number\n");
    scanf("%d",&a);
    if(a>10){
    printf("%d is Greater than 10",a);
    }
    
    //If-Else Statement
    int age=0;
    printf("Enter the Age\n");
    scanf("%d",&age);
    if(age<18)
    printf("You are not eligible for Voting!\n");
    else
    printf("You are eligible for Voting!\n");

    //Switch Statement
    int day=0;
    printf("Enter the Days\n");
    scanf("%d",&day);
    switch(day){
        case 1:printf("Its Monday!\n");break;
        case 2:printf("Its Tuesday!\n");break;
        case 3:printf("Its Wednesday!\n");break;
        case 4:printf("Its Thrusday!\n");break;
        case 5:printf("Its Friday!\n");break;
        case 6:printf("Its Saturday!\n");break;
        case 7:printf("Its Sunday!\n");break;
        default:printf("Invalid Option!\n");
    }
    return 0;
}