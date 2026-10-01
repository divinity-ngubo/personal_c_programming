/*
Program that compares two strings and prints the larger string
Chumani Ngubo
13 Sept 2026 @23h22
*/
#include <stdio.h>
#include <string.h>

int main(){

    char first_string[100]; 
    char second_string[100];

    printf("Enter the first string: ");
    fgets(first_string, sizeof(first_string), stdin);           //takes in user input and stores in first_string array

    printf("\nEnter the second string: ");
    fgets(second_string, sizeof(second_string), stdin);         //takes in user input and stores in second_string array

    int len1 = strlen(first_string);
    int len2 = strlen(second_string);


    if(len1 > len2){           //checks if the first string's length is larger
        printf("\n%s", first_string);
        printf("Length = %d", len1);
    }
    else if(len1 < len2) {    //checks if the second string's length is larger
        printf("\n%s",second_string);
        printf("Length = %d", len2);
    }
    else{                                                //checks if the strings are of equal length 
        printf("%s and %s are of equal length",first_string,second_string);
        printf("Length = %d", len1);
    }

    return 0;
}