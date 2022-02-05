#include<stdio.h>
#include<stdlib.h>

struct Node{
     struct Node* prev;
     int data;
     struct Node* next;
};

int main()
{
     struct Node *head =(struct Node*)malloc(sizeof(struct Node));
     head->prev = NULL;
     head->data = 10;
     head->next = NULL;
     return 0;
}
