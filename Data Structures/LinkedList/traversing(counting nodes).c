#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node {
    int data;
    struct node *link;
};

void print_of_nodes( struct node *head);


int main(void)
{


    struct node *head  = (struct node *)malloc(sizeof(struct node));
    head ->data = 45;
    head ->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;


    current = (struct node *)malloc(sizeof(struct node));
    current->data = 5;
    current->link = NULL;

    head->link->link->link = current;

    current = (struct node *)malloc( sizeof(struct node));
    current->data = 10;
    current->link = NULL;

    head->link->link->link->link = current;

    print_of_nodes(head);

    return 0;
}


void print_of_nodes( struct node *head)
{
    if ( head == NULL){
        printf("Linked list is empty");
    }

    int count = 0;

    struct node *current = head;

    while ( current != NULL){
        count++;
        current = current->link;
    }

    printf("There are %d nodes in the linked list",count);

}
