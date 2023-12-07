#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

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

//for i
struct Node * InsertatIndex(struct Node* head, int index, int data){
    struct Node *ptr= (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

//for r
struct Node * Reverselist(struct Node *head){
    struct Node *prev = NULL;
    struct Node *ptr = head;
    struct Node *next = NULL;

    while(ptr!=NULL){
        next=ptr->next;
        ptr->next= prev;
        prev = ptr;
        ptr= next;
    }

    return prev;
}

int main(){

    struct Node *head = NULL; //initializing head to null
    
    int a,b,p,n;
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

        case 'i': 
        printf("Enter the position:");
        scanf("%d",&p);
        if(p<0){
            printf("Invalid position!\n");
        }
        else {
            printf("Enter the number:");
            scanf("%d",&n);

            if(head==NULL){
                struct Node *head = (struct Node *)malloc(sizeof(struct Node));
                head->data = n;
                head->next = NULL;
            }
            else{
                int listlen=0;
                struct Node *temp = head;
                while(temp!=NULL){
                    listlen++;
                    temp=temp->next;
                }
                if(p>listlen){
                    printf("Invalid position!\n");
                }
                else{
                    head = InsertatIndex(head,p,n);
                }
            }
        }
        break;

        case 'R':
        if(head!=NULL){
            head = Reverselist(head);
        }
        break;

        default: 
        printf("Invalid character entered!");
        break;
    }

    }
    
    return 0;

}