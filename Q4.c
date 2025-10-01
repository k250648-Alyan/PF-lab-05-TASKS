#include<stdio.h>
int main(){
    int continent,country;
    printf("Enter a number to select a Continent:\n1=Asia\n2=Europe\n");
    scanf("%d",&continent);
    switch(continent){
        case 1:
        printf("Enter a number to select a Country:\n1=Pakistan\n2=India\n");
        scanf("%d",&country);
        switch (country){
          case 1:
          printf("You selected Pakistan");
          break;
              case 2:
              printf("You selected India");
              break;
              default:
              printf("Invalid Country");  
         } break;  
         case 2:
         printf("Enter a number to select a Country:\n1=France\n2=Germany\n");
         scanf("%d",&country);
            switch(country){
                case 1:
                printf("You selected France");
                break;
                case 2:
                printf("You selected Germany");
                break;
                default:
                printf("Invalid Country");
            }
             break;
            default:
            printf("Invalid Continent");
        } return 0;
    }