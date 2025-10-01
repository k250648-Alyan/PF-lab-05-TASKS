#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number:\n");
    scanf("%d",&num);
    if(num%2 == 0 && num%3 ==0){
        printf("Divisible by both 2 and 3");
    } else{
        printf("Not divisible by both 2 and 3");
    } return 0;
}
