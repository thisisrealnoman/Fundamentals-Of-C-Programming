#include <stdio.h>

int main(){

    int area, w, h;

    printf("C program to find area of rectangle\n\n");


    printf("Enter Width of rectangle: ");
    scanf("%d", &w);

    printf("Enter Height of rectangle: ");
    scanf("%d", &h);

    area = w * h;

    printf("Area of rectangle = %d sq. units\n\n", area);

    return 0;
}
