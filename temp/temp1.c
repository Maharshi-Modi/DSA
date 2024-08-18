#include<stdio.h>

void pattern()
{
    int inp, i , j;
    printf("enter the no\n");
    scanf("%d" , &inp);
    for(j = 0 ; j < inp ; j++)
    {
        for(i = inp ; i >= 0 ; i--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    pattern();
}