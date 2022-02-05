
#include<stdio.h>
#include<stdlib.h>

struct node{
     int data;
     struct node *link;

};
void add_at_end(struct node *head, int data);

int main(void)
{

     struct node *head = NULL;

     head = (struct node *)malloc(sizeof(struct node));
     head->data = 45;
     head->link = NULL;

     add_at_end(head,98);
     add_at_end(head,3);

     struct node *ptr;
     ptr = head;

     while(ptr != NULL){
          printf("%d ",ptr->data);
          ptr = ptr->link;
     }

     puts("");

     head = del_first(head);
     ptr = head;

     while(ptr != NULL){
          printf("%d ",ptr->data);
          ptr = ptr->link;
     }


     return 0;
}

void add_at_end(struct node *head,int data)
{
    struct node *ptr,*newNode;

    ptr = head;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->link = NULL;

    while ( ptr ->link != NULL){
        ptr = ptr->link;
    }
    ptr->link= newNode;
}

del_first(struct node *head)
{
     if(head == NULL)
          printf("List is already empty");
     else{
          struct node *temp = head;
          head =  head->link;
          free(temp);
     }

     return head;
}
