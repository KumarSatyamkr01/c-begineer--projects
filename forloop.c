#include <stdio.h>

int main() {
    int num;
    printf ("Enter a number :");
    scanf("%d",&num);

    int multi=1;
    for( int i= num; i>0; i--){
    multi *=i; //updation
    }
    
        printf("the Factorial of '%d' is : %d" ,num,multi);
    
    
return 0; 
}