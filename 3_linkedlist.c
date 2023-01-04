#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *createLinkedList()
{
    int n;
    struct node *head;
    struct node *newnode;
    printf("Length of Linked list :");
    scanf("%d",&n);

    for(int k = 0; k < n; k++){
        if(k==0){
            head = (struct node *)malloc(sizeof(struct node));
            newnode = head;
        }
        else{
            newnode->next = (struct node *)malloc(sizeof(struct node));
            newnode = newnode->next;
        }
        printf("\nEnter data: ");
        scanf("%d",&newnode->data);
    }
    newnode->next = NULL;
    return head;
}

void display(struct node *head){
    struct node *temp = head;
    while(temp!=NULL){
        printf("\nData : %d\nNext : %p\n\n",temp ->data,temp->next);
        temp = temp -> next;
    }
}

int main()
{
    struct node *head;
    head = createLinkedList();
    display(head);
    return 0;
}