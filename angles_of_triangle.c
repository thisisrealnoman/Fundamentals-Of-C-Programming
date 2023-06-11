#include <stdio.h>

int main(){

    int A, B, C;

    printf("Enter two angles of triangle.\n\n");

    printf("Enter first angle: ");
    scanf("%d", &A);

    printf("Enter second angle: ");
    scanf("%d", &B);

    C = 180 - (A+B);

    printf("Third angle of the triangle = %d", C);

    return 0;
}


