#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;//i will dynamically allocate the memory in stack 

};

//agar bisket ka packet khali hai then wo kase pop hoga wese 
//agar bisket ka packet pura bhara hua hai then kase push hoga kyn ki jagha hi nahi hai  
//to check ehether the stack is full or not

int isEmpty(struct stack * ptr){//it will check wether the stack is empty or not 
    //jab khali hota hai tab top ki value kya hota hai??
    //answer is -1
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack * ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    // struct stack s; 
    // s.size=80;
    // s.top=-1;//i.e top most element is empty so -1 //iska matlab koi bhi element stack mai nahi hai
    // s.arr=(int*)malloc(s.size * sizeof(int));//ky ki integer store kar raha hai

    struct stack *s; 
    //arrow operator first do dereferencing and   dot operator 
    s->size=4;
    s->top=-1;
    s->arr=(int*)malloc(s->size * sizeof(int));//heapp mai ready hai

//pushing an element 

    s->arr[0]=1;
    s->top++;
    s->arr[1]=2;
    s->top++;
    s->arr[2]=3;
    s->top++;
    s->arr[3]=4;
    s->top++;


    if(isEmpty(s)){
        printf("the stack is enpty\n");
    }
    else{
        printf("the stACK IS NOT EMPY\n");
    }
    if(isFull(s)){
        printf("the stack is full\n");
    }
    else{
        printf("the stACK IS NOT full\n");
    }



    return 0;
}