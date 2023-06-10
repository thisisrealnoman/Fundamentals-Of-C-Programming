/*#include <stdio.h>

int main(){

    char ch;

    printf("Enter Your Grade: ");
    scanf("%c", &ch);

    printf("Your Grade is: %c", ch);

    return 0;
}
*/
/* Please work */


#include <stdio.h>

int main(){

    char grade;

    printf("Enter your grade: ");

    grade = getchar();

    printf("Your grade is : ");
    putchar(grade);

    return 0;
}
