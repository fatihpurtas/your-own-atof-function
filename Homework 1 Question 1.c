#include <stdio.h>
#include <stdlib.h>
#define SIZE 250

float myAtof(char *string, char *error);

int main()
{
    char string[SIZE];
    float fnum1;
    char errorState = 0;

    printf("Enter a number:\n");
    gets(string);

    fnum1 = myAtof(string, &errorState);

    if (errorState == 0){
        printf("Your number is: %.2f \n", fnum1);
    } else if (errorState == 1){
        printf("Error has occurred due to inappropriate input!\n");
    }

    return 0;
}

float myAtof(char* string, char* error)
{

    int is_negative = 1;
    int is_decimal = 0;
    float result, frac;
    result = 0.0f;
    frac = 1.0f;

    while (*string == ' '){
        string++;
    }

    if (*string == '-')
    {
        is_negative = -1;
        string++;
    }


    for (; *string != '\0'; string++) {
        if (*string >= '0' && *string <= '9') {
            result = result * 10.0f + (*string - '0');
            if (is_decimal) {
                frac *= 10.0f;
            }
        } else if (*string == '.') {
            if (is_decimal) {
                *error = 1;
                return 0.0f;
            }
            is_decimal = 1;
        } else {
            *error = 1;
            return 0.0f;
        }
    }

    result *= is_negative;

    if (is_decimal)
        result /= frac;
    *error = 0;

    return result;
}