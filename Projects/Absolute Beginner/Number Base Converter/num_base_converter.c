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
    double num_mag = abs(num);
    int rem, whole = (int)num_mag, real;
    float dec = num_mag - whole;
    char bits[32] = "";

    do{
        rem = whole%2;
        whole /= 2;
        sprintf(str,"%d", rem);
        strcat(bits, str);

    }while(whole != 0);

    if (num<0){
        strcat(bits,"1");
        }
    else{
        strcat(bits,"0");
        }

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


    printf("\nFunc called\n");
    printf("%s\n", bits);
    
}

int main(void){

    printf("ON");
    to_binary(-2);
    return 0;
}