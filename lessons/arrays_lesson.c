/*

Program that computes the average marks of a student
Chumani Ngubo 
10 Sept 2026 @15h50

*/
#include <stdio.h>

int main(){
    double marks[5], average = 0 ,sum_marks = 0;  //variable declarations 

    for (int i=0; i<5; ++i ){
        printf("Enter mark %d: ", i);             //prompts user to input marks
        scanf("%lf",&marks[i]);                   //stores the marks in an array by order of entry
        sum_marks += marks[i];                   //this is a running total that adds the marks in the array
    }

    average = sum_marks/5;           //gets the average mark of the 5 subject marks in the marks array
    printf("Your average is %.2lf", average);    

    return 0;
}