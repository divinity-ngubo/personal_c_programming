/*

Program to find the largest element of an array using a pointer
Chumani Ngubo 
14 Sept 2026 @01h10

*/

#include <stdio.h>

int main(){
    
    int arr[] = {34, 12, 21, 54, 48, 100};
    int largest = *arr;                                  //assigns first array value(by dereferencing it since it's treated as point) to largest b
    int length_arr = sizeof(arr)/sizeof(arr[0]);         //gets the length of the array 

    for(int i=0; i< length_arr; ++i){
        if(largest< *(arr+i)){                            
            largest = *(arr+i);                         //updates the largest value if condition is met
        }
    }
    printf("%d", largest);
    
    return 0;
}
