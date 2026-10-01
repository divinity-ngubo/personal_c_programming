/*
Program that takes full name as input and prints it, then changes first letter of the name to X
Chumani Ngubo 
10 Sept 2026 @16h12

*/

#include <stdio.h>

int main(){

    char full_name[30];

    printf("Enter your full name (Name & Surname):\n");
    fgets(full_name, sizeof(full_name), stdin);
    printf("Your name is %s\n", full_name);

    full_name[0] = 'X';
    printf("Your edited DOPEEEEEEEEEEE!!!!!!!!!!!!!!! name is, %s", full_name);

    return 0;
}