#include<stdio.h>
#define max 8

int master[] = {12,56,78,98,98,54,90};
int p_a[max];
int p_b[max];
int i;
int point_a = -1;
int point_b = -1;


void distribute()
{
    for( i = 0 ; i < max ; i++)
    {  
        if(i % 2 == 0)
        {
            point_a++;
            p_a[i] = master[i]; 
        }
        else
        {
            point_b++;
            p_b[i] = master[i];
        }
    }
}

void display()
{
    //player a
    // printf("%d" , point_a);
    // printf("\n%d",point_b);
    printf("player a :");
    for(i = 0 ; i < point_a ; i++ )
    {
            printf("%d",p_a[i]);
            printf(",");
                
    }
    // // player b
    // printf("\n");
    // printf("player b :");
    // for(i = 0 ; i <= max ; i++ )
    // {
    //     if(i%2 !=0)
    //     {
    //         printf("%d",p_b[i]);
    //         printf(",");
    //     }
    // }
}

void main()
{
    distribute();
    display();
}