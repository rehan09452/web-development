#include <stdio.h>

int main() {
    float num1, num2;
    char operator;
    char choice;

    do {
        // Ask the user for input
        printf("Enter first number: ");
        scanf("%f", &num1);
        
        printf("Enter operator (+, -, *, /, %%): ");
        scanf(" %c", &operator);  // Note the space before %c to consume any leftover newline character.
        
        printf("Enter second number: ");
        scanf("%f", &num2);

        // Perform the calculation based on the operator
        switch (operator) {
            case '+':
                printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0) {
                    printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;
            case '%':
                if ((int)num2 != 0) {
                    printf("%.0f %% %.0f = %.0f\n", num1, num2, (int)num1 % (int)num2);
                } else {
                    printf("Error! Division by zero is not allowed in modulus operation.\n");
                }
                break;
            default:
                printf("Invalid operator!\n");
                break;
        }

        // Ask if the user wants to perform another calculation
        printf("Do you want to perform another calculation (y/n)? ");
        scanf(" %c", &choice);  // The space before %c consumes any leftover newline character.
        
    } while(choice == 'y' || choice == 'Y');  // Continue if user enters 'y' or 'Y'

    printf("Thank you for using the calculator. Goodbye!\n");
    return 0;
}
