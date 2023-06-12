#include <stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Magic. Do not touch.
    fahrenheit = (celsius * 9/5) + 32;

    printf("%.2f celsius = %.2f fahrenheit\n", celsius, fahrenheit);

    return 0;
}
