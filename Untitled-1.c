#include <stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;

    printf("Please Enter Integer input: ");
    scanf("%d", &a);
    printf("Please Enter a char input: ");
    scanf(" %c", &b);
    printf("Please Enter float input: ");
    scanf("%f", &c);
    printf("Please Enter double input: ");
    scanf("%lf", &d);
    

    printf("\nThe Integer input is: %d\n", a);
    printf ("The char input is: %c\n", b);
    printf("The float input is: %f\n", c);
    printf ("The double input is: %lf", d);

    return 0;
}