#ifndef LINKED_LIST_H
#define LINKED_LIST_H


struct Node{
    int data;
    struct Node* next;
};

struct Node * Insertatbegin(struct Node *head, int data);
struct Node * Insertatend(struct Node *head, int data);
struct Node * Deleteatbegin(struct Node *head);
void printList(struct Node *ptr);
void freequit(struct Node* head);


#endif