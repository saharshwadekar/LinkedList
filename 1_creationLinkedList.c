#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *createLinkedList()
{
    struct node *ptr = NULL;  // new node
    struct node *current = NULL;  // current or last node
    char ch;
    do{
        // creating a new node with the name of ptr
        ptr = (struct node *)malloc(sizeof(struct node));
        
        // malloc function returns NULL if memory is not allocated
        if(ptr == NULL){
            printf("404 Memory not Found Error!");
            return 0; // to exit from the program
        }
        
        // if new node is created then next pointer should be NULL
        ptr -> next = NULL;
        
        //settinge the DATA of ptr / new node 
        printf("Enter DATA :");
        scanf("%d",&ptr->data); // storing the data to data position


        // checking the node is already created or not
        if(head == NULL){ // execute when node is not created
            head = ptr; // assigning the the address of ptr to head
            current = ptr; // my last node will be ptr
        }
        else{ // execute when node is already created
            current->next = ptr; // assigning the next address of new node to previous node
            current = ptr;  // changing the current position to the last
        }
        
        printf("Do you wanna continue (Y/N) :"); //  for create a link in a node or continuing the process
        scanf("%s",&ch);
    }while(ch == 'Y'||  ch == 'y'); // checking the condition for to proceed further or not
    return head;  // returning the struct node type
}

int main()
{
    head = createLinkedList();
    return 0;
}
