#include <stdio.h>
#define size 6




void getData(int arr[]){
    int i;
    printf("Enter the Elements:\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

}


void printData(int arr[]){


    for( int  i = 0; i < size; i++)

    {
        printf(" %d ",arr[i]);
    }
    

}

void insertion_sort(int arr[])
{
    int i , j;
    int temp;
    for(i = 1 ; i < size ; i++)
    {
        temp = arr[i];
        for(j = i-1 ; j >= 0 ; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;    
    }
}

void main(){
    int arr[size];
    getData(arr);
    printData(arr);
    printf("\n");
    insertion_sort(arr);
    printData(arr);
}