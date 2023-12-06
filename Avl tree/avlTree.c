#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};
 
    int getHeight(struct Node *n){
        // here we get the hieight as for now 
        if(n==NULL)
            return 0;
        return n->height;
    }

struct node* creatnode(int key){
    struct node* node =(struct Node*)malloc(sizeof(struct Node));
   
}
    