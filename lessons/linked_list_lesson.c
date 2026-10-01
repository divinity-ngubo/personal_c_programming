/*A Program that creates four static nodes containing:
5 → 10 → 15 → 20 → NULL
and traverse them using current
*/
/*
Chumani Ngubo 
26 Sept 2026 @04h12*/

#include <stdio.h>

typedef struct node
{
    int data;
    struct node* next_ptr;                  //ptr of type struct that stores address of next node
}node_;

void print_list(node_ *head){               //function that prints the linked list

    node_ *current_node = head;             //assigns head ptr to current node ptr variable for tracking current node we're at
    int sum_data = 0;

    while(current_node != NULL){            
        sum_data += current_node->data;     //(running total) adds the data value of each node in the list to get a ovr total
        printf("%d - ", current_node->data);
        current_node = current_node->next_ptr;  //changes current node address to next node's address (effectively updates to next node)
    }
    printf("\nSum of all nodes is: %d", sum_data);
}

int main(void){

    node_ *head;        //head ptr
    
    //assignment of data, and next_ptr values in the linked list
    node_ node4 = {20, NULL};
    node_ node3 = {15, &node4};
    node_ node2 = {10, &node3};
    node_ node1 = {5, &node2};

    head = &node1;  //head ptr -> points to (address of) first node

    print_list(head);
    return 0;
}