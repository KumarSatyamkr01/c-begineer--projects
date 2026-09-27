#include <stdio.h>
int main() {
    float length;
    float width;
    printf("Enter length value ");
    scanf("%f", &length);
    printf("Enter width value ");
    scanf("%f", &width);
    printf("area of rectangle is %f", length*width);
    return 0;
}