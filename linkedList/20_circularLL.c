#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
    /* data */
};
void transversal(struct node*head){
    struct node*ptr= head;//ek pointer bano jo head pe point kar raha ho

    //idhar phele se hi ptr head mai hai isilye ham bas push kar rahe hai thoda sa 


    //in while loop
    // printf("element :%d\n",ptr->data);
    //     ptr=ptr->next;
    // {
    // while (ptr!=head)
    //     printf("element :%d\n",ptr->data);
    //     ptr=ptr->next;
    // }
    
    // we use do while here becoz it is a circular linked list
    //in do while
    do{
        printf("element :%d\n",ptr->data);
        ptr=ptr->next;
    
    }while (ptr!=head);    
}


struct node* insertAtFirst(struct node *head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head->next;
    while(p->next!=head){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;//i amlost got this but i forgot to write this 
    return head;
}



struct node* insertAtBetween(struct node* head,int data,int index){
     struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    int i = 0;
    struct node *p = head;


    while (i != index - 1)
    { // p ko leka khada kar raha hu jidhar hamko insert karna hai udhar (ka phele use poin karuga p ke duara )
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}



struct node* insertAtEnd(struct node* head,int data){
    struct node* ptr=(struct node* )malloc(sizeof(struct node));
    ptr->data=data;
    struct node* p=head;
    while(p->next!=head){
        p=p->next;
    }
    ptr->next=head;
    p->next=ptr;
    return head;
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

//format of circular linked list 

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fouth;

    fouth->data=4;
    fouth->next=head;

    printf("traversal\n");
    transversal(head);

    // head=insertAtFirst(head,15);
    // head=insertAtFirst(head,16);
    // head=insertAtFirst(head,17);
    // printf("inserting a number in first place\n");
    // transversal(head);

    // printf("insert in between\n");
    // head=insertAtBetween(head,33,1);
    // head=insertAtBetween(head,34,3);
    // head=insertAtBetween(head,35,5);
    // // head=insertAtBetween(head,36,9);
    // // head=insertAtBetween(head,37,12);
    // transversal(head);

    printf("insert at end");
    head=insertAtEnd(head,45);
    transversal(head);
 }