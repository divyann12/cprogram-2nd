#include<stdio.h>
#define MAX 100
int queue[MAX], priority[MAX];
int front = -1, rear = -1;
int isFull()
{
    return rear == MAX-1;
}
int isEmpty()
{
    return front == -1;
}
void enqueue(int value, int p)
{
    if(isFull())
    {
        printf("Queue Overflow !!!");
    }
    else
    {
        queue[++rear] = value;  //Add the value to the next available position in queue
        priority[rear] = p;
        if(front == -1)        //If the queue was empty
        {  
            front = rear;    //Set both front and rear to the new added element position 
        }
        printf("%d Element added in queue !!!",value);
    }
}
void display()
{
    if(isEmpty())
    {
        printf("Queue is Empty !!!!\n");
    }
    else
    {
        int i;
        for(i=front; i<=rear; i++)
        {
            printf("(%d, %d)\n",queue[i],priority[i]);
        }
    }
}
int main()
{
    while(1)
    {
        system("cls");
        printf("**** Priority Queue Example ****\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        int choice, val, p;
        printf("Enter choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter Value : ");
            scanf("%d",&val);
            printf("Enter priority : ");
            scanf("%d",&p);
            enqueue(val,p);
            break;
            case 2:
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("Invalid Choice !!!!");
        }
        system("pause");
    }
    return 0;
}
