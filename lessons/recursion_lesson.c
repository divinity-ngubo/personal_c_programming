/*
Program that computes the factorial of a number
Chumani Ngubo
08 Sept 2026 @00h57
*/

#include <stdio.h>
#include <math.h>

int factorial(int num){         // function that computes the factorial of a number recursively
                 
    if(num == 0){               //ensures that 0! = 1  
        return 1;
    }
    else if (num!=0){
        int result = num * factorial(num-1);    //recursively calls the function with parameter less than one and multiplies it by current num to get the factorial
        return result;      
    }
}

int main(){

    int number;
    
    printf("Enter a number: ");                 // prompts user to enter an input/number
    scanf("%d",&number);

    int factorial_result =  factorial(number);     //the returned integer value from factorial function is assigned to the variable     

    printf("The factorial of %d is %d", number, factorial_result); 

    return 0;

}