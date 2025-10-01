#include<stdio.h>
int main(){
    int num;
    printf("Enter a num:");
    scanf("%d",&num);
    if(num & 1){
        printf("Number is odd");
    } else{
        printf("Number is even");
    } return 0;
}