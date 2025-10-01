#include<stdio.h>
int main(){
    int studentMarks;
    printf("Enter the marks of the student:\n");
    scanf("%d",&studentMarks);
    if(studentMarks>=50){
        if(studentMarks>=85){
            printf("Passed with Distinction");
        } else{
            printf("Just Passed");
        }
    } return 0;
}