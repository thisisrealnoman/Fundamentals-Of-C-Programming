#include <stdio.h>

int main(){

    int num1, num2;
    int sum, sub, mul, mod;
    float div;

    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float) num1 / num2;
    mod = num1 % num2;

    printf("SUM = %d\n", sum);
    printf("DIFFERENCE = %d\n", sub);
    printf("MULTIPLICATION = %d\n", mul);
    printf("QUOTIENT = %f\n", div);
    printf("MODULUS = %d", mod);

    return 0;
}

//happy coding
