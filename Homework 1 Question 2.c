#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double custom_atof(char *str) {
    double result = 0.0;
    int sign = 1;
    int i = 0;


    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    while (isdigit(str[i])) {
        result = result * 10.0 + (str[i] - '0');
        i++;
    }


    if (str[i] == '.') {
        double fraction = 0.1;
        i++;


        while (isdigit(str[i])) {
            result += (str[i] - '0') * fraction;
            fraction *= 0.1;
            i++;
        }
    }

    return result * sign;
}

void evaluate_operation(char *operation) {
    double num1 = custom_atof(operation);
    char operator = '+';
    double num2 = 0.0;
    int i = 0;


    while (operation[i] != '\0') {
        if (operation[i] == '+' || operation[i] == '-' ||
            operation[i] == '*' || operation[i] == '/') {
            operator = operation[i];
            num2 = custom_atof(operation + i + 1);
            break;
        }
        i++;
    }


    double result = 0.0;

    switch (operator) {
        case '+':
            result = num1 + num2;

            break;
        case '-':

            if(result<0.0) {


                printf("Error has been occurred due to inappropriate input!\n");

            } else {
                result = num1 - num2;
            }
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0.0) {
                printf("Cannot divided into 0.\n");
                return;
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operation\n");
            return;
    }


    printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
}

int main() {
    char operation[100];


    printf("Enter arithmetic operation:\n ");
    fgets(operation, sizeof(operation), stdin);


    operation[strcspn(operation, "\n")] = '\0';


    evaluate_operation(operation);

    return 0;
}
