#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define S 5

int queue[S];
int f = -1;
int r = -1;

void enqueue(int inp)
{
    if(r == S-1)
    {
        printf("cannot insert the queue is already full\n");
    }
    else
    {
        r++;
        queue[r] = inp;

        if(f == -1)
        {
            f = 0;
        }
    }
}

void dequeue()
{
    if(f == -1)
    {
        printf("the queue is empty\n"); 
    }
    else if(f == r)
    {
        printf("\n%d : removed\n" , queue[f]);
        f = -1 ; 
        r = -1;
    }
    else
    {
        f++;
    }
}

void display()
{
    int i;
    if(f == -1)
    {
        printf("the queue is empty\n");
    }
    else
    {        
        for (i = f ; i <=r ; i++)
        {
            printf("Q[%d] = %d\n" , i , queue[i]);
        }
    }
}

void digi_count()
{
    int i;
    int a;
    int h = 0;
    int max_dig = 0;
    int t;
    int b;
    int j;
    int count;
    for(i = 0 ; i <= r ; i++)
    {
        if(queue[i] > h)
        {
            h = queue[i];
        }
    }
    while(h >= 1)
    {
        h = h/10;
        max_dig++;
    }

    for(i = 1 ; i <= max_dig ; i++)
    {
        count = 0;
        for( j = 0 ; j <= r ; j++)
        {
            t = 0;
            a = queue[j];
            while(a >= 1)
            {
                a = a/10;
                t++;
            }
            if(t == i)
            {
                count++;
            }
        }
        if(count!=0)
        {
            printf("there are %d no of %d digits\n" , count , i );
        }
    }   
    
}

int main()
{
    int inp ,  flag = 1, choise;
    while (flag == 1)
    {
        printf("\n0: EXIT\n1: INSERT\n2: DISPLAY\n3: DELETE\n4: TO GET THE DIGITS\nCHOISE ::");
        scanf("%d" , &choise);
    
    

        switch(choise)
        {
            case 0:
                exit(0);
            case 1: 
                printf("enter the no to insert in queue\n");
                scanf("%d",&inp);
                enqueue(inp);
                break;
            case 2:
                display();
                break;
            case 3:
                dequeue();
                break;
            case 4:
                digi_count();

        }
    }
    
}
