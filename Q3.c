#include<stdio.h>
int main(){
    int choice,brand;
    printf("Enter a number to select a device:\n1=Phone\n2=Laptop\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter a number to select a brand:\n1=Samsung\n2=Apple\n");
        scanf("%d",&brand);
        switch (brand){
          case 1:
          printf("You selected Samsung Phone");
          break;
              case 2:
              printf("You selected Apple Phone");
              break;
              default:
              printf("Invalid Brand");  
         } break;  
         case 2:
         printf("Enter a number to select a brand:\n1=Dell\n2=HP");
         scanf("%d",&brand);
            switch(brand){
                case 1:
                printf("You selected Dell Laptop");
                break;
                case 2:
                printf("You selected HP Laptop");
                break;
                default:
                printf("Invalid Brand");
            }
             break;
            default:
            printf("Invalid Device");
        } return 0;
    }
    