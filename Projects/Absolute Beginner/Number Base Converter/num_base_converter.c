/*
Program that converts a decimal user input into binary/decimal as specified by user selection
Chumani Ngubo
v0 - 04 Oct 2026 @22h24 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void conversion(double num){

    char str[2] = "";
    int rem, whole = (int)num, real;
    float dec = num - whole;
    char tmp[100000] = "";
    
    do{
        rem = whole%2;
        whole /= 2;
        sprintf(str,"%d", rem);
        strcat(tmp, str);

    }while(whole != 0);

    int len = (strlen(tmp));

    for(int i = 0; i<len/2; ++i){
        char temp = tmp[i];
        tmp[i] = tmp[len - 1 - i ];
        tmp[len - i - 1] = temp;
    }
    
    if(dec != 0.0){
        strcat(tmp, ".");
        do{ 
            double floating = dec*2;
            real = (int)floating;
            dec = floating - real;
            sprintf(str, "%d", real);
            strcat(tmp, str);
        }while(dec != 0);
    }


    printf("\nFunc called\n");
    printf("%s\n", tmp);
    
}

int main(void){

    printf("ON");
    conversion(2);
    return 0;
}