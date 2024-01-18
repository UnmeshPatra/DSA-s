#include<stdio.h>
void comp(int a, int b){
    if(a>b){
        printf("%d greater than %d",a,b);
    }else if(b>a){
        printf("%d smaller than %d",a,b);
    }else if(a==b){
        printf("Both number are same");
    }else{
        printf("invalid");
    }
}
int main(){
    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    comp(a,b);
    return 0;
}