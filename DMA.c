#include<stdlib.h>
#include<stdio.h>
#define s 5
int main()
{
    int *p;
    int *a;
    int i;
    
        a = calloc(s,sizeof(int));

    for(i = 0 ; i < s ; i++)
    {
        printf("enter %d: ",i+1);
        scanf("%d" , &a[i]);
    }

    printf("\nBEFORE SORT\n");
    for(i = 0 ; i < s ; i++)
    {
        printf("enter %d: %d\n",i ,a[i]);
    }

    int temp ;  
    int j;
    for(i = 0 ; i < s - 1; i++)
    {
        for(j = 0 ; j < s - 1 -i ; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
             }
        }
    }

    printf("\nAFTER SORT\n");
    for(i = 0 ; i < s ; i++)
    {
        printf("enter %d: %d\n",i ,a[i]);
    }
    return 0 ;
}