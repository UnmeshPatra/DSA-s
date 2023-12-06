// here i learn Transversal in linked list
// here i learn Transversal and inserting in head in linked list

#include <stdio.h>
#include <stdlib.h>

// here we implement the linked list
struct node
{
    int data;
    struct node *next;
};

void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//case1
struct node * deleteTheFirst(struct node* head){
    struct node* ptr = head;
    head=head->next;
    free(ptr);
    
    return head;

}

//case2
struct node * deleteTheEleInBetween(struct node* head,int index){
    struct node *p= head;
    struct node *q= head->next;
    for(int i=0;i<index-1;i++){
        p=p->next;
        q =q->next;
    }
    p->next=q->next;

    free(q);
    return head;
}

//case3
struct node* deleteTheLast(struct node*head){
    struct node*p=head;
    struct node*q=head->next;
    while(q->next!=NULL){
        q=q->next;
        p=p->next;
    }
    p->next=NULL;
    free(q);
    return head;
}

//case4
struct node * deleteByValue(struct node * head, int value){
    struct node *p = head;
    struct node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }

    
    if(q->data == value){
        p->next = q->next;
        free(q);

    }
    else{
        printf("there is no value like that so fuck offfffff\n\n");
    }
    return head;
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fouth;

    // allocate memory for nodes in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fouth = (struct node *)malloc(sizeof(struct node));

    // link first and second
    head->data = 1;
    head->next = second;

    // link  second and third
    second->data = 2;
    second->next = third;

    // link  third and fouth
    third->data = 3;
    third->next = fouth;

    // terminate the list at fouth
    fouth->data = 4;
    fouth->next = NULL;

    printf("before delection\n ");
    linkedlistTraversal(head);

    // head=deleteTheFirst(head);
    // printf("after delection in first node ");
    // linkedlistTraversal(head);

    // head=deleteTheEleInBetween(head,2);
    // printf("after delection in between \n");
    // linkedlistTraversal(head);

    // head=deleteTheLast(head);
    // printf("after delectionthe last element \n");
    // linkedlistTraversal(head);

    head=deleteByValue(head,2);
    printf("by deleting by value\n");
    linkedlistTraversal(head);
    return 0;
}