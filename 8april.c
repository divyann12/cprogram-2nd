#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int queue[MAX], priority[MAX];
int front = -1, rear = -1;
int isFull()
{
    return rear == MAX - 1;
}
int isEmpty()
{
    return front == -1;
}
void enqueue(int value, int p)
{
    if (isFull())
        printf("queue is overflow !!!!!!\n");
    else
    {
        queue[++rear] = value;
        priority[rear] = p;
        if (front == -1)
            front = rear;
        printf("Element Added in Queue!!!!");
    }
}
void dequeue()
{
    if (isEmpty())
        printf("queue underflow!!!!!\n");
    else if (front == rear)
        front = rear = -1;
    else
    {
        int i, max = front;
        for (i = front + 1; i <= rear; i++)
        {
            if (priority[i] > priority[max])
                max = i;
        }
        for (i = max; i < rear; i++)
        {
            queue[i] = queue[i + 1];
            priority[i] = priority[i + 1];
        }
        rear--;
    }
}
void display()
{
    if (isEmpty())
        printf("Queue is Empty !!!!!!\n");
    else
    {
        int i;
        for (i = front; i <= rear; i++)
            printf("(%d %d)\n", queue[i], priority[i]);
    }
}
int main()
{
    system("cls");
    printf("**** Priority Queue Example *");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    int choice, val, p;
     printf("Enter Choice:");
        scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter value:");
        scanf("%d", &val);
        printf("Enter Priority:");
        scanf("%d", &p);
        enqueue(val, p);
        break;
    case 2:
        dequeue();
        break;
    case 3:
        display();
    case 4:
        exit(0);
    }
    system("pause");
    return 0;
}