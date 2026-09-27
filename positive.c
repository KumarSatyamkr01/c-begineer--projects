#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
        scanf("%d",&num);
        
        if(num==0){
        printf("You entered zero number");
        }
    else if(num>0){
        printf("You entered positive number ");
    }
        else{
            printf("you enterd negative number");
        }
}