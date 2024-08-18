#include<stdio.h>
#include<string.h>
#include<conio.h>
#define s 10

char stack[s];
int t = -1;



char inp_str()
{
    char str;
    int i;
    printf("enter the no\n");
    for(i = 0 ; i < s ; i++)
    {
        str = getch();
        if(str == '\r')
        {
            break;
        }
        t++;
        stack[i] = str;
        putch(str);
    }
}

void print_str()
{
    printf("\n%s",stack);
}

void hexa_check()
{
    int i , temp;
    if(stack[0] == '0')
    {
        if(stack[1] == 'X' || stack[1] == 'x')
        {
            temp = t;
            for(i = t; i >=0 ; i--)
            {
                if((stack[i] >= 97 && stack[i] <= 102) || (stack[i] >= 65 && stack[i] <= 70) )
                {
                    temp--;
                }
                else if(stack[i] >= 48 && stack[i] <= 57 )
                {
                    temp--;
                }
            }
            if(temp != 0)
            {
                printf("\nIT IS NOT A HEXADECIMAL\n");
            }
            else
            {
                print_str();
                printf(": is hexadecimal\n");
            }
        }
        else
        {
            printf("\nINVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    
}

int main()
{
    inp_str();
    hexa_check();
}