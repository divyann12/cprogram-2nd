#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX],front=-1,rear=-1;
int isFull(){
    return (rear+1)%MAX==front;


}
int isEmpty(){
    return front==-1;
}
void enqueue(int value){
    if(isFull())
    printf("queue overflow !!!!\n");
    else if(front==-1)
    front=rear=0;
    else if(rear==MAX-1 && front>0)
    rear=0;
    else
    rear++;
    queue[rear]=value;
    printf("Element added in Queue!!!!!\n"); 
}
void dequeue(){
    if(isEmpty())
    printf("Queue is underflow!!!!\n");
    else{
        int val=queue[front];
        if(front==rear)
        front=rear=-1;
        else if(front==MAX-1)
        front=0;
        else
        front++;
        printf("%d is dequeue from queue !!!!!!!!!!\n");
    }
}
void display(){
    if(isEmpty())
    printf("queue is empty!!!!!!!!!\n");
    else{
        int i;
        if(front<=rear){
            for(i=front;i<=rear;i++)
            printf("%d",queue[i]);
        }
        else{
            for(i=front;i<MAX;i++)
            printf("%d",queue[i]);
            for(i=0;i<=rear;i++)
            printf("%d ",queue[i]);
        }
    }
}
int main(){
    while(1){
        printf("******* circular queue ***********\n");
        printf("1 Enqueue. \n");
         printf("2 Dequeue. \n");
          printf("3 Display. \n");
           printf("1 Exit. \n");
           int choice,value;
           printf("enter choice:");
           scanf("%d",&choice);
           switch(choice){
            case 1:
            printf("Enter Value:");
            scanf("%d",value);
            enqueue(value);
            break;
            case 2:
            dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("invalid choice !!!!!!!\n");
           }
           system("pause");
    }
}