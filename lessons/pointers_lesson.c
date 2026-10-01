/*
Program that changes the value of a variable using a pointer
Chumani Ngubo
14 Sept 2026 @00h20
*/

#include <stdio.h>

int main(){

    double salary;
    double* ptr_salary = NULL;              // NULL to show that this pointer currently points to nothing in memory
    ptr_salary = &salary;                   // memory address of salary assigned to be the ptr_salary's value

    printf("Enter your salary: ");
    scanf("%lf", &salary);                 // accepts/takes in user input

    printf("Your salary is %.2lf", *ptr_salary);    //derefences ptr_salary to get actual value at the address it stores
    
    *ptr_salary = *ptr_salary * 2;                 //multiplies current value by 2 and stores it in the address  
    printf("\nYour salary multiplied by two is is %.2lf", *ptr_salary);

    return 0;
}