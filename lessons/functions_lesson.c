/*

Program that has a function performs multiplication of two numbers and returns the result
Chumani Ngubo
07 Sept 2026 @22h32

*/

#include <stdio.h>
#include <math.h>

double multiplyNumbers(double num1, double num2);  //function prototype

int main(){

    double number1, number2;

    printf("\nEnter the first number: ");               
    scanf("%lf", &number1);                         //stores user input to number1 variable
    printf("\nEnter the second number: ");
    scanf("%lf", &number2);                         //stores user input to number2 variable

    double product = multiplyNumbers(number1, number2);   //calls multiplyNumbers function and stores the returned value from the function to product local variable as a double
    printf ("The product of %lf and %lf is %.2lf", number1, number2, product); 

    return 0;

}


double multiplyNumbers(double num1, double num2){   //function that multiplies two numbers(which are double) and returns their product as a double

    double product = num1 * num2 ;          //multiplication of num1 and num2 
    return product;                        

}