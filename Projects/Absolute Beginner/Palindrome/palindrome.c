/*
Program that checks that if a user input string is a palindrome
Chumani Ngubo
01 Oct 2026 @05h37*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void palindrome(char* ptr){

    int length = strlen(ptr);
    char str[length + 1];

    /*if (str = NULL){
        print("Error in allocating memory for string.");
        exit(1);
    }*/
    
    for (int i = 0; i < length; ++i){
        str[i] = ptr[length - 1 -i];
   }

   str[length] = '\0';
    
    if(strcmp(str, ptr) == 0){
        printf("This word %s is a palindrome",ptr);
    }
    else{
        printf("The word %s is not a palindrome", ptr);
    }

    
}

int main(void){

    char* str = malloc(100);

    if (str == NULL){
        return 1;
    }

    printf("Please type in the word you think is a palindrome: \n");
    scanf("%s",str);
    palindrome(str);

    free(str);
    str = NULL;

    return 0;
}
