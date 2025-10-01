#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    // Toggle the second least significant bit (bit 1, zero-based)
    num = num^(1 << 1);
    printf("Number after toggling 2nd bit:%d\n",num);
    return 0;
}