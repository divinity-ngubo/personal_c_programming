/*
Program that finds the differences between three complex numbers
Chumani Ngubo 
17 Sept 2026 @21h31
*/

#include <stdio.h>

typedef struct complex_num                                          //complex number struct with an alias named complex
{
    double real;
    double imaginary;
}complex;


int main(){

    complex c1 = {.real = 10, .imaginary = -2};                     //creating a struct varible assigning values to it's variables
    complex c2 = {.real = 100, .imaginary = 200};                   //creating a struct varible assigning values to it's variables
    complex c3 = {.real = 1, .imaginary = -20};                     //creating a struct varible assigning values to it's variables

    complex diff;
    diff.real = c1.real -c2.real - c3.real;                         //calculating the difference of the three real numbers
    diff.imaginary = c1.imaginary - c2.imaginary - c3.imaginary;    //calculating the difference of the three complex numbers

    printf("The complex difference is %.2lf + %.2lfi ", diff.real, diff.imaginary);

    return 0;
}