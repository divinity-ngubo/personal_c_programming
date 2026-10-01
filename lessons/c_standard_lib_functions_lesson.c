/*

Program that computes the result of a number raised to the power of the square root of a number
Chumani Ngubo
07 Sept 2026  @23h43

*/
#include <stdio.h>
#include <math.h>

int main(){

    int number; 

    printf("Enter a number :");     //asks for user to input number
    scanf("%d", &number);           //stores the user input into number variable

    double num_sqrt = sqrt(number);     //calculates the square root of number
    double result = pow(number, num_sqrt);      //calculates the result of user input number raised to the power of it's square root

    printf("\nThe result is: %lf", result);

    return 0;
}