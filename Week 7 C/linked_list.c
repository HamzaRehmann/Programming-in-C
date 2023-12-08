#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

//for b
struct Node * Insertatbegin(struct Node *head, int data){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr->next = head;
    return ptr;
}

//for a
struct Node * Insertatend(struct Node *head, int data){
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

//for r
struct Node * Deleteatbegin(struct Node *head){
    struct Node *ptr= head;
    head = head->next;
    free(ptr);
    return head;
}

//for p
void printList(struct Node *ptr){
    while(ptr!=NULL){
        printf(" %d",ptr->data);
        ptr= ptr->next;
    }
    printf("\n");
}

//for q
void freequit(struct Node* head){
    struct Node *ptr= head;
    struct Node *p;
    while(ptr!=NULL){
        p=ptr->next;
        free(ptr);
        ptr= p;
    }
    exit(0); //quit
}
