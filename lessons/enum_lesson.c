/*
Program where an enum with days of the week is created and values of two weekends is printed on the output
Chumani Ngubo
17 Sept 2026 @21h53
*/

#include <stdio.h>

enum week{
    Monday = 1, Tuesday , Wednesday, Thursday, Friday, Saturday, Sunday
}weekend1, weekend2;

int main(){

    weekend1 = Saturday;
    weekend2 = Sunday;

    printf("First weekend is: %d", weekend1);
    printf("\nSecond weekend is: %d", weekend2);

    return 0;
}