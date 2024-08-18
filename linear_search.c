#include<stdio.h>
#define size 5
int main(){
    int i;
    int arr[size];
    int flag = 0;
    int c;
    for(i = 0;i<size ;i++ ){
        scanf("%d",&arr[i]);
    }
    printf("enter the no\n");
    scanf("%d",&c);
    // search

    for(i = 0 ;i<size ;i++){
        if(arr[i] == c){
            printf("found \n index : %d" , i);
            flag = 1;
            break;
        }
    }

        if (flag == 0){
            printf("not found\n");
        }
}