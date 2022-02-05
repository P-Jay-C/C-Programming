#include<stdio.h>
#include<stdlib.h>

struct Node{
     struct Node* prev;
     int data;
     struct Node* next;
};

struct Node* addToEmpty(struct Node* head, int data){

     struct Node* temp = malloc(sizeof(struct Node));
     temp->prev = NULL;
     temp->data = data;
     temp->next = NULL;

     head = temp;
     return head;
};

struct Node *addAtBeg(struct Node* head, int data){

     struct Node* temp =(struct Node*) malloc(sizeof(struct Node));

     temp->prev = NULL;
     temp->data = data;
     temp->next = NULL;

     temp->next = head;
     head->prev = temp;
     head = temp;

     return head;

};

struct Node *addAtEnd(struct Node *head, int data){

     struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
     struct Node *ptr;

     temp->prev = NULL;
     temp->data = data;
     temp->next = NULL;

     ptr = head;

     while(ptr->next != NULL){
          ptr = ptr->next;
     }

     ptr->next = temp;
     temp->prev = ptr;

     return head;

}

struct Node *addAfterPos(struct Node *head, int data,int position)
{
     struct Node *newP = NULL;
     struct Node *temp = head;
     struct Node *temp2 = NULL;

     newP = addToEmpty(newP,data);

     while(position != 1){
          temp = temp2->next;
          position--;
     }

     if(temp->next == NULL){
          temp ->next = newP;
          newP->prev = temp;
     }
     else{
          temp2 = temp->next;
          temp->next = newP;

          temp2->prev = newP;
          newP->next = temp2;
          newP->prev = temp;
     }

     return head;
}


int main()
{
     struct Node *head = NULL;
     struct Node *ptr = NULL;


     head = addToEmpty(head, 45);
     head = addAtBeg(head, 34);
     head = addAtEnd(head, 9);
     head = addAfterPos(head,25,2);

     ptr = head;

     while( ptr != NULL){
          printf("%d ", ptr->data);
          ptr = ptr->next;
     }

     return 0;
}
