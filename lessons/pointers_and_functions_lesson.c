/*
Program to find the multiplication of two numbers using a function and pointers
Chumani Ngubo
17 Sept @02h06
*/

#include <stdio.h>

double* pointer_multiplication(double* num1, double* num2, double* num3);           //function prototype for a function that accepts three pointers of type double as arguments

int main(){
    double num1 = 13, num2 = 9, num3;
    double* result = pointer_multiplication(&num1, &num2, &num3);
    printf("result: %.2lf",*result);

    return 0;
}



double* pointer_multiplication(double* num1, double* num2, double* num3){
    *num3 = *num1 * *num2;
    return num3;                
}
