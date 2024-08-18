#include<stdio.h>
#define size 5

int stack[size];
int top = -1;

void push(int num){
    if(top == size -1){
        printf("overflow\n");
    }
    else{
        top++;
        stack[top] = num;
    }
}

void pop(){
    if(top == -1){
        printf("underflow\n");
    }
    else{
        printf("-------\n%d popped\n-------\n" , stack[top]);
        top--;
    }
     
}

void display(){
    int i;
    if(top == -1){
        printf("stack is empty\n");
    }
    else{
        printf("--------\n");
        for(i = top ; i >= 0 ; i--){
            printf("%d\n", stack[i]);
        }
        printf("--------\n");
    }
}
void main(){
    int choise;
    int n ;
    while(1){    
        printf("1 for push\n2 for pop\n3 for display\n4 for exit\n");
        scanf("%d" , &choise);
        if(choise == 1 ){
            printf("enter the no\n");
            scanf("%d",&n);
            push(n);
        }
        else if(choise == 2){
            pop();
        }
        else if(choise == 3){
            display();
        }
        else if(choise == 4){
            break;
        }
    }
    printf("%d",top);
}
