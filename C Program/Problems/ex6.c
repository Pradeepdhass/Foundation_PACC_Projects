#include <stdio.h>

int main() {

    int a, b;
    char exp;

    printf("Enter the values for a & b: ");
    scanf("%d %d", &a, &b);

    printf("Enter the operator : ");
    scanf(" %c", &exp);

    switch(exp) {

        case '+':
            printf("Result = %d", a + b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            printf("Result = %d", a / b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}