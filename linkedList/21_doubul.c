#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
    struct node* pre;
};


void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->pre;
    }
}


int main(){
     struct node *head;
    struct node *second;
    struct node *third;
    struct node *fouth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fouth=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next=second;
    head->pre=NULL;

    second->data=2;
    second->next=third;
    second->pre=head;

    third->data=3;
    third->next=fouth;
    third->pre=second;

    fouth->data=4;
    fouth->next=NULL;
    fouth->pre=third;

linkedlistTraversal(head);


}