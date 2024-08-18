#include<stdio.h>


int binary(int key){
    int i  , arr[] = {1 , 2 ,3 ,4 ,5};
    int flag;
    int max = 5;
    int min = 0;
    int mid = (min+max)/2;
    while(min <= max){
         mid = (min+max)/2;
        if(arr[mid] == key){
            printf("%d",mid);
            return mid;
            break;
        }
        else if (key > arr[mid]){
            min = mid +1 ;
        }
        else if(key <  arr[mid]){
            max = mid -1;
        }
    }
}
void main(){
    int key;
    printf("enter the no u want to find\n");
    scanf("%d" , &key);
    binary(key);
}