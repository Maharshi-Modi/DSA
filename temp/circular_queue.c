#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define S 5
int queue[S];
int f = -1 ;
int r = -1;

void enqueue(int inp)
{
    if(r == S-1 && f == 0)
    {
        printf("\nthe queue is already full\n");
    }
    else if(r == f-1)
    {
        printf("\n queue is full\n");
    }
    else if(r == S-1 && f != 0)
    {
        r = 0;
        queue[r] = inp;
        if(f == -1)
        {
            f = 0;
        }
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

    if(front == -1 ){
        printf("\nQueue is Empty");
         
    }
    else if(front == rear){
        printf("\n%d is removed",queue[front]);  
        front=-1;
        rear=-1;
    }
    else if(front == SIZE - 1 ){
        printf("\n%d is removed",queue[front]); 
        front=0;
    }
    else
    {
        printf("\n%d is removed",queue[front]); 
        front++;
    }
}



void display()
{
    int i;
    if(r>=f)
    {
        for(i = f ; i <=r ; i++ )
        {
            printf("Q[%d] = %d\n" , i , queue[i]);       
        }   
    }
    
    else 
    {    
        for(i = 0 ; i <=r ; i++)
        {
            printf("Q[%d] = %d\n" , i , queue[i]);     
        }
        for (i = f ; i < S; i++)
        {
            printf("Q[%d] = %d\n" , i , queue[i]);     
        }
    }
}

void hexa_check(char string)
{
    printf("\nenter the sting\n");
    gets(string);
    printf("%s",string);
}


int main()
{
    int inp ,  flag = 1, choise;
    char string[20];
    
 
    while (flag == 1)
    {
        printf("\n0: EXIT\n1: INSERT\n2: DISPLAY\n3: DELETE\n4: HEXADECIMAL CHECK\nCHOISE ::");
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
                

        }
    }
    
}
