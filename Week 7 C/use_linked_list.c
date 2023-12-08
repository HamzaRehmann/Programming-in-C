#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){

    struct Node *head = NULL; //initializing head to null
    
    int a,b;
    char c;
    while(1){

        printf("Enter the character:");
        scanf(" %c",&c);

        switch (c) {
        case 'a': 
        printf("Enter the number:");
        scanf("%d",&a);
        if(head == NULL){
            head = (struct Node *)malloc(sizeof(struct Node)); //new node if the list is empty
            head->data = a;
            head->next = NULL;
        }
        else{
            head = Insertatend(head,a);
        }
        break;

        case 'b': 
        printf("Enter the number:");
        scanf("%d",&b);
        if(head == NULL){
            head = (struct Node *)malloc(sizeof(struct Node));
            head->data=b;
            head->next = NULL;
        }
        else{
           head=  Insertatbegin(head,b);
        }
        break;

        case 'r': 
        if(head != NULL){
            head = Deleteatbegin(head);
        }
        else{
            printf("List is already empty!");
        }
        break;

        case 'p':
        if(head!=NULL){
            printList(head);
        }
        else{
            printf("There's nothing here to print!");
        }
        break;

        case 'q': 
        freequit(head);
        break;

        default: 
        printf("Invalid character entered!");
        break;
    }

    }
    
    return 0;

}