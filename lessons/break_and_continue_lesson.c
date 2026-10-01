/*
Program that takes user input and outputs it if the number is a negative odd number.
Chumani Ngubo
07 Sept 2026 @21h16
*/

#include <stdio.h>
#include <stdbool.h>

int main(){

    while(1){

        int number;
        printf("\nEnter a number: ");
        scanf("%d", &number);                  //accepts user input and stores it in the number variable
        
          if ((number%2 != 0) && (number<0)){  //checks if the number is negative and odd
            printf("%d",number);
            break;
        }
          else if ((number%2 == 0) && (number<0)){ //checks if the number is negative and even
            printf("Negative Even");  
            continue;
        }

          else if(number>0) {                 //checks if the number is positive 
            printf("Positive Value");
            break;
        }
    }

    return 0;

}