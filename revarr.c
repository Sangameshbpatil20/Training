#include<stdio.h>
#include<conio.h>
int main(){
int arr[5]={1,2,3,4,5};int i,arr1[4]={},arr2[2]={};
for(i=0;i<4;i++){
    arr1[i]=arr[i];
}
for(i=4;i<=5;i++){
    arr2[i]=arr[i];
}
for(i=0;i<4;i++){
    printf("%d ",arr1[i]);
}printf("\n");
for(i=0;i<3;i++){
    printf("%d ",arr2[i]);
}
}