#include <stdio.h>

int main()
{
    int num1, num2;
    float num3, num4;

    // get the inputs from the user
    scanf("%d %d", &num1, &num2);
    scanf("%f %f", &num3, &num4);

    // print the sum and difference of the integers
    printf("%d %d\n", num1 + num2, num1 - num2);

    // print the sum and difference of the floating point numbers
    printf("%.1f %.1f\n", num3 + num4, num3 - num4);

    return 0;
}