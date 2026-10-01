/*
Program to print multiplication table for given number from 10 to 1(lesson on do-while loop)
Chumani Ngubo 
31 August 2025 @01h39
*/

#include <stdio.h>

int main(){

    int count = 10, number, product;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("\n--- MULTIPLICATION TABLE ---\n\n");

    do{

        product = count*number;
        printf("%d*%d = %d\n", number, count, product);
        count -=1;

    }while(count >= 0);

    return 0;
}