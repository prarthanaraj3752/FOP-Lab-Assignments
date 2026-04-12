#include <stdio.h>

int main() 
  {
    int choice;
    float a, b, result;

    printf("Menu:\n");

    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(choice) {

        case 1:
            result = a + b;
            printf("Addition = %.2f", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction = %.2f", result);
            break;

        case 3:
            result = a * b;
         printf("Multiplication = %.2f", result);
            break;

        case 4:
            if(b == 0)
                printf("Error! Division by zero");
            else {
                result = a / b;
                printf("Division = %.2f", result);
            }
            break;

        default:
            printf("Invalid choice");
    }
    return 0;
}
