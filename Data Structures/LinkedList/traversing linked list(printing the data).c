#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

void print_nodes( struct node *head)
{
    int count;
    if ( head == NULL)
        printf("The list is empty");

    struct node* ptr = head;
    while ( ptr != NULL){
        printf("Node 1 data = %d\n",ptr->data);
        ptr = ptr->link;
    }
}
int main(void)
{

    struct node *head = (struct node *)malloc( sizeof(struct node));
    head ->data = 1;
    head ->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 2;
    current->link = NULL;

    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;

    current = (struct node*)malloc(sizeof(struct node));
    current->data = 4;
    current->link = NULL;

    head->link->link->link = current;

    print_nodes(head);

    return 0;
}
