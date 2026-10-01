/*
Program that determines whether a given integer is a happy number using Floyd's cycle algorithm

Chumani Ngubo

v0 - 17 Sept 2026 @23h22 (began learning)
v0.1 - 01 Oct 2026 @0h011 (Floyd's Algo and LinkedLists in C learned, first attempt at solving)
v0.2 - COMPLETE!!!!!!!!!!!!!!!!!!!!!! @02h15

*/

#include <stdio.h>
#include <stdlib.h>

#if 0
typedef struct Node{
    int data;
    struct Node* next_ptr;

}node; 


node* new_node(int data){
    node* new_node = malloc(sizeof(node));

    if (new_node == NULL){return NULL;}

    new_node->data = data;
    new_node->next_ptr = NULL;
    return new_node;
}

node* insert_node_at_tail(node* node_to_insert, node** head){

    if (node_to_insert == NULL){
        return NULL;
    }

    node_to_insert->next_ptr = NULL;
    node* current_node = *head;

    if (*head == NULL){
        *head = node_to_insert;
        return node_to_insert;
    }
    if (node_to_insert == NULL){
        return NULL;
    }

    while(1){
        if(current_node->next_ptr == NULL){
            current_node->next_ptr = node_to_insert;
            break;
        }
        else{
            current_node = current_node->next_ptr;
        }

    }

    return node_to_insert;
}
#endif

//splits a number into its digits, squares each of the digits and returns
//the sum of their squares
int split_and_square(int num){
    int result = 0;

    do{
        int digit = num%10;                 //extracts last digit
        num = num / 10;                     //removes last digit
        result += digit*digit;              //adds its square to running total
    }while(num !=0);

    return result;                          
}

//checks if cycle exists using Floyd's Algo
//and returns value at which cycle begins
int cycle_checker(int num){
        
    int hare = num, tortoise = num;

    do {
        hare = split_and_square(split_and_square(hare));       //steps the hare twice in the sequence
        tortoise = split_and_square(tortoise);                 //steps the tortoise once in the sequence

    } while(hare != tortoise);

    tortoise = num;                                           //takes tortoise to the beginning of sequence

    //steps both once to find where they first meet
    //which is where cycle begins
    while(tortoise != hare){
        tortoise = split_and_square(tortoise);
        hare = split_and_square(hare);
    }

    return hare;                                            //value stored is the start of the cycle in the list
}

//determines whether or not a number is Happy
void happy_number(int num){

    if(cycle_checker(num) == 1){
        printf("The number %d is a happy number", num);
    }
    else{
        printf("The number %d is a sad number", num);
    }
}

int main() {
    
    int num = 0;

    printf("Please enter a number: ");

    //checking if the user input is an int
    if(scanf("%d",&num) != 1){
        printf("This input is invalid, please enter a number in decimal notation.");
        return 1;
    }

    happy_number(num);

    return 0;
}
