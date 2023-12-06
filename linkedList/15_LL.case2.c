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
struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}


//case2
struct node *insertAtBetween(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    int i = 0;
     struct node *p = head;//this p is take only for understanding  purposes


    while (i != index - 1)
    { // p ko leka khada kar raha hu jidhar hamko insert karna hai udhar (ka phele use poin karuga p ke duara )
        p= p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    //in general p is also know as head just we dont want to chande the name sowe use p insted of head
    return head;
}


//case3 
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;


    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

//case4
struct node *insertAfter(struct node *head,struct node *prenode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;


    ptr->next=prenode->next;
    prenode->next=ptr;   
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

    // free(head);
    // free(second);
    // free(third);

    // printf("the traversal is\n");
    // linkedlistTraversal(head);

    // printf("the new  traversal by inserting at head is\n");
    // head = insertAtFirst(head, 0);

    // printf("insert at between\n");
    // head=insertAtBetween(head, 35,2);

    // printf("insert at the end ");
    // head=insertAtEnd(head,45);

    printf("insert after the node\n");
    head = insertAfter(head,second,355);

    linkedlistTraversal(head);

    return 0;
}