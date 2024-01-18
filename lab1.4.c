#include<stdio.h>
struct complexNum{
    int a;
    int b;
};
void addition(struct complexNum *c1,struct complexNum *c2){
    int addN, addC;
    addN = c1->a+c2->a;
    addC = c1->b+c2->b;
    printf("%d + %di",addN,addC);
};
void multiplication(struct complexNum *c1,struct complexNum *c2){
    int addN, addC;
    addN = c1->a*c2->a;
    addC = c1->b*c2->b;
    printf("%d + %di",addN,addC);
};
int main(){
    struct complexNum c1,c2;
    printf("Enter first complex number : ");
    scanf("%d %d",&c1.a,&c1.b);
    printf("Enter second complex number : ");
    scanf("%d %d",&c2.a,&c2.b);
    printf("MENU\n");
    printf("1. Addition\n");
    printf("2. Multiplication\n");
    int c;
    printf("Enter your choice number : ");
    scanf("%d",&c);
    if(c==1){
        addition(&c1,&c2);
    }else if(c==2){
        multiplication(&c1,&c2);
    }else{
        printf("INVALID");
    }
    return 0;   
}