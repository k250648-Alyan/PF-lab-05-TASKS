#include<stdio.h>
int main(){
    int num, leftShift, rightShift;
    printf("Enter an integer:\n");
    scanf("%d",&num);
    leftShift = num << 1;
    rightShift = num >> 1;
    printf("Original Number: %d\n",num);
    printf("After left shift by 1: %d\n",leftShift);
    printf("After right shift by 1: %d\n",rightShift);
    return 0;
}