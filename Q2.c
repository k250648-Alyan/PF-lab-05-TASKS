#include <stdio.h>
int main(){
    int age;
    char gender[10];
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gender (male or female): ");
    scanf("%s", gender);
    if(age >= 18 && strcmp(gender, "male") == 0){
        printf("Adult Male\n");
    } else if(age >= 18 && strcmp(gender, "female") == 0){
        printf("Adult Female\n");
    } else {
        printf("Minor\n");
    }
    return 0;
}