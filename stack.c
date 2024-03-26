#include<stdio.h>
#include<stdlib.h>

#define max 10

int stack[2][max],top[] = {-1,-1};

void push(int val,int* top, int stack[]){
    if(*top==max-1){
        printf("OVERFLOW\n");
    }
    else{
        (*top)++;
        stack[*top]=val;
        printf("Elements inserted\n");
    }
}

void pop(int *top, int stack[]){
    if(*top==-1){
        printf("UNDERFLOW\n");
    }
    else{
        printf("Deleted Element : %d\n",stack[*top]);
        *top--;
    }
}

void peek(int *top, int stack[]){
    if(*top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Topmost Element : %d\n",stack[*top]);
    }
}

void show(int *top, int stack[]){
    printf("%d\n",*top);
    if(*top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Elements in Stack : ");
        for(int i=*top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main(){
    while(1){
        printf("MENU :\n1.Push\n2.Pop\n3.Peek\n4.Show\n5.Exit\n");
        int choice;
        int n;
        printf("Enter stack number(1-2)");
        scanf("%d",&n);
        n--;
        printf("Enter Choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                {
                    int val;
                    
                    printf("Enter Elements: ");
                    scanf("%d",&val);
                    push(val,&top[n],stack[n]);
                }
                break;
            case 2:
                pop(&top[n],stack[n]);
                break;
            case 3:
                peek(&top[n],stack[n]);
                break;
            case 4:
                show(&top[n],stack[n]);
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("Invalid Choice......\n");
                break;
        }
        printf("\n\n");
}
}