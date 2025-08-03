#include <stdio.h>
int main() {
    double num1, num2;
    char op;
    printf("Enter first number: \n");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /, %%): \n");
    scanf(" %c", &op);
    printf("Enter second number: \n");
    scanf("%lf", &num2);

    switch(op) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: \n");
            break;
        case '%':
            if((int)num2 != 0)
                printf("Result: %d\n", (int)num1 % (int)num2);
            else
                printf("Error: \n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
