#include<stdio.h>
#include<conio.h>
int main(){
    char bg=0;
    printf("Enter the Blood Group\n\tOptions\na for A Blood Group\nb for B Blood Group\nc for AB Blood Group\n");
    scanf("%c",&bg);
    switch(bg){
        case 'a':printf("Can donate blood for a and ab blood group peoples\n");break;
        case 'b':printf("Can donate blood for b and ab blood group peoples\n");break;
        case 'c':printf("can donate blood for a, b and ab blood group peoples\n");break;
        default:printf("O blood grp can donate blood for any blood group peoples\n");
    }
    return 0;
}
