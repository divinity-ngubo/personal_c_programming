/*
Program that converts a decimal user input into binary/decimal as specified by user selection
Chumani Ngubo
v0 - 04 Oct 2026 @22h24 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void to_binary(double num){

      char str[2] = "";
    int rem, whole = (int)num, real;
    float dec = num - whole;
    char bits[32] = "";

    do{
        rem = whole%2;
        whole /= 2;
        sprintf(str,"%d", rem);
        strcat(bits, str);

    }while(whole != 0);

    int len = (strlen(bits));

    for(int i = 0; i<len/2; ++i){
        char temp = bits[i];
        bits[i] = bits[len - 1 - i ];
        bits[len - i - 1] = temp;
    }
    
    if(dec != 0.0){
        strcat(bits, ".");
        do{ 
            double floating = dec*2;
            real = (int)floating;
            dec = floating - real;
            sprintf(str, "%d", real);
            strcat(bits, str);
        }while(dec != 0);
    }

    printf("%s\n", bits);
    
}

int main(void){

    double num;

    do{
        printf("Enter a positive number: \n");
        scanf("%lf",&num);
    }while(num<0);

    to_binary(num);
    return 0;
}