#include <stdio.h>


int main() {

    int number;

    printf("Enter your number btw 0 to 100:");
    scanf("%d", &number);

    if (number >=90 && number <=100) {
        printf("Your grade is A+");
    }

else if (number >=80 && number <=89) {
    printf("your grade is A")
}

else if (number >=70 && number <=79) {
    printf("Your grade is B");
}

else if (number >=60 && number <=69) {
    printf("Your Grade is C");
}

else if (number >=50&&  number<=59) {
    printf ("Your grade is D");
}

else {
    printf("invalid  number");
}
return 0;
}

