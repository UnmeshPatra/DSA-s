#include<stdio.h>
#include<stdlib.h>
int check_prime(int i){
    int s = 0;
    for(int j = 1;j<=i; j++){
        if(i%j==0){
            s++;
        }
    }
    if(s==2){
        return 1;
    }
    return -1;
}
int sum_prime(int *arr,int size){
    printf("Enter the Elements:");
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int s = 0;
    for(int i = 0;i<=size;i++){
        if(check_prime(arr[i])==1){
            // printf("%d",arr[i]);
            s= s+(arr[i]);
        }
    }
    free(arr);
    printf("sum:");
    return s;
    
}
int main(){
    int size;
    printf("Enter Array Size: ");
    scanf("%d",&size);
    int arr = (int)malloc(sizeof(int)*size);
    printf("%d",sum_prime(&arr,size));
    return 0;
}