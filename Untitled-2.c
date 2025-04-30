#include <stdio.h>
int main()
{
    int num1, num2, add=0, sub=0,mult=1;
    float div;
    printf("Please Enter Integer number1: ");
    scanf("%d", &num1);
    printf("Please Enter Integer number2: ");
    scanf("%d", &num2);

    add= num1 + num2;
    sub= num1-num2;
    mult= num1*num2;
    div= num1/num2;

    printf("The addition is: %d\n", add);

    printf ("The subtract is: %d\n", sub);

    printf("The multiply is: %d\n", mult);

    printf ("The division is: %f", div);

    return 0;
}