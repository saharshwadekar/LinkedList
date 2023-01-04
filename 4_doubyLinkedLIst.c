#include <stdio.h>
#include <stdlib.h>

struct node 
{
    struct node *pre;
    int data;
    struct node *next;
};

struct node *createLinkedList()
{
    int n;
    struct node *head;
    struct node *newnode;
    struct node *temp;
    printf("Length of Linked list :");
    scanf("%d",&n);

    for(int k = 0; k < n; k++){
        if(k==0){
            head = (struct node *)malloc(sizeof(struct node));
            head->pre = NULL;  // doubly
            newnode = head;
        }
        else{
            temp = newnode;
            newnode->next = (struct node *)malloc(sizeof(struct node));
            newnode = newnode->next;
            newnode->pre = temp; // 
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
        printf("\nPre: %p\nData : %d\nNext : %p\n\n",temp->pre,temp ->data,temp->next);
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