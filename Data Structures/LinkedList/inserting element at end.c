#include<stdio.h>
#include<stdlib.h>

struct node{
    char *name;
    int age;
    struct node *next;
};

void print_nodes(struct node *head);
void count_nodes(struct node *head);
void add_at_end(struct node *head, char *name, int age);

int main(void)
{
    struct node *head = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    head->name = "Jerry";
    head->age = 1;
    head->next = NULL;

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->name = "Yaw";
    current->age = 2;
    current->next = NULL;

    head->next = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->name = "Kofi";
    current->age = 3;
    current->next = NULL;

    head->next->next = current;


    current = (struct node *)malloc(sizeof(struct node));
    current->name = "Akose";
    current->age = 4;
    current->next = NULL;

    head->next->next->next = current;

    print_nodes(head);
    count_nodes(head);

    printf("After adding a new node at the end.\n\n");
    add_at_end(head,"Kwadwo",5);
    print_nodes(head);
    count_nodes(head);


    return 0;
}

void print_nodes( struct node*head)
{
    struct node *ptr;
    ptr = head;

    while ( ptr != NULL){
        printf("Name is %s and Age is %d\n",ptr->name,ptr->age);
        ptr = ptr->next;
    }

    puts("");
}

void count_nodes( struct node *head){

    struct node *ptr;
    ptr = head;
    int count = 0;

    while ( ptr != NULL){
        count++;
        ptr = ptr->next;
    }

    printf("There are %d nodes in the list\n",count);
}

void add_at_end(struct node *head, char *name, int age)
{
    struct node *ptr,*newNode;

    ptr = head;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->name = name;
    newNode->age = age;
    newNode->next = NULL;

    while ( ptr ->next != NULL){
        ptr = ptr->next;
    }
    ptr->next= newNode;
}
