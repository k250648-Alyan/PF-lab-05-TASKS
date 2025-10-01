#include<stdio.h>
int main(){
    int i=1,j;
    //For post increment
    j=i++;
    printf("%d\t %d\n",j,i);
    /*j=1 and i=2 As, it is a post increament
    so it first assign the value and then increment it.*/
    j=++i;
    //For pre increment
    printf("%d\t %d\n",j,i);
    /*j=3 and i=3 As,it is a pre increment so it first 
    increment the value and then assign it.*/
    return 0;
}