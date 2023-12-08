#include <stdio.h>
#include <stdlib.h>


struct Node{
    char data;
    struct Node *prev;
    struct Node *next;
};
//for 1
struct Node * InsertatBegin(struct Node *head, char data){
    struct Node * ptr =(struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    ptr->prev = NULL;

    if(head!=NULL){
        head->prev = ptr;
    }

    return ptr;
}
//for 2
struct Node * RemoveallElements(struct Node *head, char value){
    struct Node * p=head;
    struct Node * q = NULL;

    while(p!=NULL){
        q = p->next;

        if(p->data == value){
            if(p->next!=NULL){
                p->next->prev = p->prev;
            }
            if(p->prev!=NULL){
                p->prev->next = p->next;
            }
            if(p==head){
                head = p->next;
            }
            free(p);
        }
        p =q;
    }
    return head;
}
//for 3
void Printlist(struct Node *ptr){
    while(ptr!=NULL){
        printf(" %c",ptr->data);
        ptr= ptr->next;
    }
    printf("\n");
}
//for 4
void reverseprintlist(struct Node *ptr){
    while(ptr!=NULL){
        printf(" %c",ptr->data);
        ptr = ptr->prev;
    }
    printf("\n");
}
//for 5
void emptyfreequit(struct Node *head){
    struct Node * ptr = head;
    struct Node *q;

    while(ptr!=NULL){
        q = ptr->next;
        free(ptr);
        ptr = q;
    }

    exit(0); //quiting the program;

}

int main() {
    struct Node * head= (struct Node *)malloc(sizeof(struct Node));

    int data;
    while(1){
        int elementinlist = 0;
        printf("Enter the number:");
        scanf("%d",&data);

        switch (data) {
            case 1: printf("Enter the character:");
            char r;
            scanf(" %c",&r);
            head = InsertatBegin(head,r);
            break;

            case 2: printf("Enter the character:");
            char w;
            scanf(" %c",&w);
            struct Node * ptr= head;
            while(ptr!=NULL){
                if(ptr->data ==w ){
                    elementinlist = 1;
                    break;
                }
                ptr = ptr->next;
            }
            if(elementinlist){
                head = RemoveallElements(head,w);
            }
            else {
                printf("The element is not in the list!\n");
            }
            break;

            case 3: Printlist(head);
            break;

            case 4: reverseprintlist(head);
            break;

            case 5: emptyfreequit(head);
            break;

            default: printf("Entered number is not valid!");
            break;

        }

    }

    return 0;

}