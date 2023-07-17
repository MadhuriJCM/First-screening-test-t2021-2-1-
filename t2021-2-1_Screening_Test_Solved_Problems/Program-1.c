#include <stdio.h>
#include <string.h>

double addition(double a, double b) {
    double value = a + b;
    return value;
}

double subtraction(double a, double b) {
    double value = a - b;
    return value;
}

double multiplication(double a, double b) {
    double value = a * b;
    return value;
}

double divide(double a, double b) {
    double value = a / b;
    return value;
}

int main() {
    double a;
    double b;
    char operation[10];
    int i;

    printf("Enter the first digit: ");
    scanf("%lf", &a);
    
    printf("Enter the second digit: ");
    scanf("%lf", &b);

    printf("Enter the operation you want to perform (+, -, *, /): ");
    scanf("%s", operation);

    double (*operations[4])(double, double) = {addition, subtraction, multiplication, divide};
    char* symbols[4] = {"+", "-", "*", "/"};

    for (i = 0; i < 4; i++) {
        if (strcmp(operation, symbols[i]) == 0) {
            double result = operations[i](a, b);
            printf("%.1lf\n", result);
            break;
        }
    }

    if (i == 4) {
        printf("Please enter correct operation\n");
    }

    return 0;
}
