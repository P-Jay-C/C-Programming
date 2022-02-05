#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node {
    int data;
    struct node *link;
};

int  count_of_nodes( struct node *head);


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

    int count = count_of_nodes(head);
    printf("%d ",count);
    return 0;
}


int count_of_nodes( struct node *head)
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

    return count;

}
