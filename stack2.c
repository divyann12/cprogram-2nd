#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack1[SIZE], top1=-1;
int stack2[SIZE], top2=-1;
void push1()
{
    if(top1==SIZE-1)
    {
        printf("Stack-1overflow !!!\n");
    }
    else{
        top1++;
        int val;
        printf("Enter value : ");
        scanf("%d",&val);
        stack1[top1]=val;
        printf("Element Added !!!!\n");
    }
}
void push2()
{
    if(top2==SIZE-1)
    {
        printf("Stack-2 overflow !!!\n");
    }
    else{
        top2++;
        int val;
        printf("Enter value : ");
        scanf("%d",&val);
        stack2[top2]=val;
        printf("Element Added !!!!\n");
    }
}
void show1()
{
    if(top1==SIZE-1)
    {
        printf("Stack-1 is Empty !!!\n");
    }
    else
    {
        int i;
        printf("Stack Elements are : \n");
        for(i=top1; i>=0; i--)
        {
            printf("%d\n",stack1[i]);
        }
    }
}
void show2()
{
    if(top2==SIZE-1)
    {
        printf("Stack-2 is Empty !!!\n");
    }
    else
    {
        int i;
        printf("Stack Elements are : \n");
        for(i=top2; i>=0; i--)
        {
            printf("%d\n",stack2[i]);
        }
    }
}
void pop1()
{
    if(top1==SIZE-1)
    {
        printf("stack-1 underflow !!!!");
    }
    else
    {
        int val = stack1[top1];
        top1--;
        printf("Elemnet %d remove from the stack 1",val);
    }
}
void pop2()
{
    if(top2==SIZE-1)
    {
        printf("stack-2 underflow !!!!");
    }
    else
    {
        int val = stack2[top2];
        top2--;
        printf("Elemnet %d remove from the stack 2",val);
    }
}
void peek1()
{
    if(top1==SIZE-1){
        printf("stack-1 is empty !!!!");
    }
    else
    {
        int val = stack1[top1];
        printf("top element in stack is %d",stack1[top1]);
    }
}
void peek2()
{
    if(top2==SIZE-1){
        printf("stack-2 is empty !!!!");
    }
    else
    {
        int val = stack2[top2];
        printf("top element in stack is %d",stack2[top2]);
    }
}
int main()
{
    while(1)
    {
        system("cls");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Show\n");
        printf("5. Exit\n");
        int choice;
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push1();
            push2();
            break;
            case 2:
            pop1();
            pop2();
            break;
            case 3:
            peek1();
            peek2();
            break;
            case 4:
            show1();
            show2();
            case 5:
            exit(0);
            break;
            default:
            printf("Invalid Choice !!!!\n");
            break;
        }
        printf("\n\n");
        system("pause");
    }
    return 0;
}