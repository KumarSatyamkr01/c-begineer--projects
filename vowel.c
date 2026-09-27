#include <stdio.h>

int main() {
    char vowels ;
    printf("Enter a leeter: ");
     scanf(" %c",&vowels);
    
     if(vowels=='a'|| vowels=='i'||vowels=='o'||vowels=='u'||vowels=='e'){
            printf("Entered letter is vowels");
        }
    else {
        printf("Entered letteer is consonent");
    }
    return 0;
}