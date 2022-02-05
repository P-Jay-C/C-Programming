//Create a complete circular linked list

#include<stdio.h>
#include<stdlib.h>

struct Node{
     int data;
     struct Node *next;
};

struct Node* addToEmpty(int data)
{
     struct Node* temp = malloc(sizeof(struct Node));

     temp->data = data;
     temp->next = temp;

     return temp;

};

struct Node* addAtBeg(struct Node* tail, int data)
{
     struct Node* newP = malloc(sizeof(struct Node));

     newP->data = data;
     newP->next = tail->next;
     tail->next = newP;

     return tail;
};

struct Node *AddAtEnd(struct Node * tail, int data)
{
     struct Node* newP = malloc(sizeof(struct Node));

     newP->data = data;
     newP->next = NULL;

     newP->next = tail->next;
     tail->next = newP;
     tail = tail ->next;

     return tail;
};

void print(struct Node *tail)
{
     struct Node* p = tail->next;

     do{
          printf("%d ",p->data);
          p = p->next;
     }while(p!=tail->next);
}

struct Node* createList(struct Node* tail)
{
     int i, n, data;
     printf("Enter the number of nodes of the linked list: ");
     scanf("%d",&n);

     if (n == 0)
          return tail;

     printf("Enter the element 1: ");
     scanf("%d", &data);
     tail = addToEmpty(data);

     for(i = 1; i < n; i++)
     {
          printf("Enter the element %d: ",i+1);
          scanf("%d",&data);
          tail = AddAtEnd(tail,data);
     }

     return tail;
};


int main()
{
     struct Node* tail = NULL;
     tail = createList(tail);
     print(tail);

     return 0;
}
