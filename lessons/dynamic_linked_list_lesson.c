/*
Program that dynamically creates a Linked List's using structs and pointers
Chumani Ngubo
29 Sept 2026 @23h14*/

#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int value;
    struct node* next_ptr;
}node_t;

//function that creates a new node dynamically
node_t* create_new_node(int value)
    {
    node_t* new_node;                        //node ptr of type struct  
    new_node = malloc(sizeof(node_t));      //'rents' some memory address from heap

    //terminates the program if the new node points to no address in memory
    if (new_node == NULL)                     
        {
        printf("Error in assigning heap memory");
        exit(1);
        }

    new_node->value = value;                //dereferences the struct ptr and assigns value to it's value
    new_node->next_ptr = NULL;              //dereferences the struct ptr and sets the address it's next ptr points to to be NULL(prevents dangling pointer)
    return new_node;                        //returns the new node (or rather a ptr to the new node's address in memory)
    }

//function that uses pass by referencing to insert a new node at head and modify
//the address the head ptr points to
node_t* insert_new_node_at_head(node_t** head_ptr, node_t* node_to_insert)
    {

    //if there is no node to insert this is satisfied and NULL is returned
    if (node_to_insert == NULL)     
        {
        return NULL;
        }
    
    node_to_insert->next_ptr = *head_ptr;       //sets the value of the next_ptr to be address that head ptr points to
    *head_ptr = node_to_insert;                 //set the heat ptr to point to the node we want to insert at the head
    return node_to_insert;                      //returns the node (or rather a ptr to the node's address in memory) 
    }

    node_t* insert_new_node_at_tail(node_t** head_ptr, node_t* node_to_insert)
    {
        if (node_to_insert == NULL)
        {
        return NULL;
        }
        
        node_to_insert->next_ptr = NULL;
        node_t* current_node = *head_ptr;

        if (*head_ptr == NULL){
            *head_ptr = node_to_insert;
            return node_to_insert;
        }

        while(1)
            {
            if (current_node->next_ptr ==  NULL)
                {
                current_node->next_ptr = node_to_insert;
                break;
                }
            else
                {
                current_node = current_node->next_ptr;
                }
            }
            
        return node_to_insert;
    
    }




void free_memory(node_t** head_ptr){
    node_t* next_node = NULL;
    node_t* current_node = *head_ptr;

    while(current_node != NULL)
        {

        next_node = current_node->next_ptr;
        free(current_node);
        current_node = next_node;
        }

        *head_ptr = NULL;

}

void print_list(node_t* head_ptr){

    node_t* current_node = head_ptr;
    int sum = 0;

    while(current_node != NULL)
        {    
            sum += current_node->value;
            printf("%d - ", current_node->value);
            current_node = current_node->next_ptr;
        }   
        printf("NULL\n");
        printf("Total sum is: %d\n\n", sum);

}

node_t* num_search(node_t **head_ptr,int num)
    {
    if (*head_ptr == NULL) {return NULL;}

    node_t* current_node = *head_ptr;
    
    while(1)
        {
        if(current_node->value == num && current_node != NULL) 
            {
            printf("\nThe number is in node with value: %d and next pointer: %p\n\n", current_node->value, current_node->next_ptr);
            return current_node;
            break;
            }

        if (current_node == NULL ) {
            return NULL;
            break;}

        else
            {
            current_node = current_node->next_ptr;
            }
        }

    }


int main(void){

    node_t* tmp;
    node_t* head_ptr = NULL;

    for (int i=0; i<10; ++i)
        {
        tmp = create_new_node(i);
        insert_new_node_at_head(&head_ptr, tmp);
        }
    
    num_search(&head_ptr,5);
    print_list(head_ptr);
    free_memory(&head_ptr);

        for (int i=0; i<10; ++i)
        {
        tmp = create_new_node(i);
        insert_new_node_at_tail(&head_ptr, tmp);
        }

    print_list(head_ptr);
    free_memory(&head_ptr);

    return 0;
}