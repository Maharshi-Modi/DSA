#include<stdio.h>
#define size 6
void bubble_sort(int arr[])
{
    int i , j , temp;
    for(i = 0 ;i < size - 1 ; i++)
    {
        for(j = 0 ; j<size -1 -i ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;            
            }
        }
    }
}
void display(int arr[])
{
    int p;
    for(p = 0 ; p < size ; p++)
    {
        printf("arr[%d] = %d\n" , p , arr[p]);
    }
}

void insertion_sort(int arr[])
{
    int i , j ,temp;
    for(i = 1 ; i < size ; i++)
    {
        temp = arr[i];
        for(j = i-1 ; j >= 0 ; j--)
        {
            if(arr[j] > temp)
            {
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int a[] = {7 , 11 , 9 , 2 , 17 , 14};
    
    // bubble_sort(a);
    // printf("\nbubble sort result\n");
    // display(a);
    printf("\ninsertion sort result\n");
    insertion_sort(a);
    display(a);

}