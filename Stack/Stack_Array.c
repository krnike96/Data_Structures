#include "stdio.h"
#include "stdlib.h"

typedef struct stackArray{
    int * arr;
    int data;
    int top;
}stack;

int isfull(stack);
int isempty(stack);
int peek(stack);
int push(stack,int);
int pop(stack);

void display(stack);

int main(){
    stack *s = (stack *)malloc(sizeof(stack));
    s->top = -1;
    printf("\nEnter the size of Stack : ");
    int size;
    scanf("%d",&size);
    s->arr = (int *)malloc(sizeof(int)*size);
    int choice,data;
    while(1){
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Peek");
        printf("\n4.Check Fullness");
        printf("\n5.Check Emptiness");
        printf("\n0.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            
            case 2:

            case 3:

            case 4:

            case 5:

            case 0:
                printf("\nExiting...");
                free(s->arr);
                free(s);
                return 0;
            default:
                printf("\nError 400 : Bad Behaviour");
                break;
        }
    }
    return 0;
}