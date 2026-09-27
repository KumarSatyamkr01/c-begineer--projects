#include<stdio.h>
int main( ) {
    float p, r, t;
    printf ("Enter principal amount :");
    scanf ("%f", &p);

    printf ("Enter rate of interest :");
    scanf ("%f", &r);

    printf ("Enter time period :");
    scanf ("%f", &t);
    
    printf (" simple interest is %f", (p*r*t)/100);
    return 0;

}