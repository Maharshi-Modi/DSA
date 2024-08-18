#include<stdio.h>
#define max 8

int master[] = {12,34,56,78,98,98,90,54};
int player_a[max];
int player_b[max];
int f_point_a = 0;
int f_point_b = 0;
int point_a = -1;
int point_b = -1;
int i;

void distribute()
{
    for(i = 0 ; i < max ; i ++)
    {
        if(i % 2 == 0)
        {
            point_a++;
            player_a[point_a] = master[i];
        }
        else
        {
            point_b++;
            player_b[point_b] = master[i];
        }
    }
}

void display()
{
    printf("player 1: ");
    for( i = f_point_a ; i <= point_a ; i++)
    {
        printf("%d,",player_a[i]);
    }
    printf("\n");
    printf("player 2: ");
    for( i = f_point_b; i <=point_b ; i++)
    {
        printf("%d,",player_b[i]);
    }
}

void battle()
{
    int n = 0;
    int temp;
    while(n < 50)
    {
        if((f_point_a - point_a) == 1 )
        {
            printf("\n----------PLAYER B WON----------\n");
            f_point_a++;
            display();
            break;
        }
        else if((f_point_b - point_b) == 1)
        {   
            printf("\n----------PLAYER A WON----------\n");
            f_point_b++;
            display();
            break;
        }
        
        else if(player_a[n] > player_b[n])
        {
            printf("\n\n----------ROUND %d----------\n\n" , n+1);   
            printf("PLAYER A: %d\nPLAYER B : %d" , player_a[n], player_b[n]);

            printf("\n\nPLAYER A IS VICTORIOUS\n\n");
            point_a++;
            player_a[point_a] = player_a[n];
            f_point_a++;
            point_a++;
            player_a[point_a] = player_b[n];
            f_point_b++;
            n++;
            display();
        }
        else if(player_a[n] < player_b[n])
        {
            printf("\n\n----------ROUND %d----------\n\n" , n+1);   
            printf("PLAYER A: %d\nPLAYER B : %d" , player_a[n], player_b[n]);

            printf("\n\nPLAYER B IS VICTORIOUS\n\n");
            point_b++;
            player_b[point_b] = player_b[n];
            f_point_b++;
            point_b++;
            player_b[point_b] = player_a[n];
            f_point_a++;
            n++;
            display();
        }
        else
        {
            printf("\n\n----------ROUND %d----------\n\n" , n+1);   
            printf("PLAYER A: %d\nPLAYER B : %d" , player_a[n], player_b[n]);

            printf("\n\nTIE\n\n");
            f_point_a++;
            f_point_b++;
            n++;
            display();
        }
    }
}

int main()
{
    int choise;
    while(1)
    {
        printf("\n1:DISTRIBUTE\n2:DISPLAY\n:3:BATTLE\n");
        scanf("%d",&choise);

        switch(choise)
        {
            case 1:
            {
                distribute();
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                battle();
                break;
            }
        }
    }
    return 0;
}