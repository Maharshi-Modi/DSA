#include<stdio.h>
#define size 6

void get_array(int a[])
{
    int i ; 
    printf("enter the data\n");
    for(i = 0 ; i < size ; i++)
    {
        scanf("%d" , &a[i]);
    }
}

void display_data(int a[])
{
    int i ; 
    for(i = 0 ; i < size ; i++)
    {
        printf("a[%d] = %d\n" , i , a[i]);
    }
}

void bubble_sort(int a[])             
{
    int i, temp ;  
    int j;
    for(i = 0 ; i < size - 1; i++)
    {
        for(j = 0 ; j < size - 1 -i ; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
             }
        }
    }
}

int main()
{
    int arr[size];
    get_array(arr);
    printf("\n");
    display_data(arr);
    printf("after sorting\n");
    bubble_sort(arr);
    display_data(arr);

}