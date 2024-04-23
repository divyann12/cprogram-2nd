#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next
};
struct Node* createNode(){
    struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d",&temp->data);
    temp->next=NULL;
    return temp;
}
void creatList(){
    int n,i;
    printf("Enter total size of list: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        struct Node *newNode=creatNode();
        if(head==NULL)
        head=newNode;
        else
        temp->next = newNode;
        temp=newNode;
    } 
}
void display(){
    if(head==NULL)
    printf("List is empty!!!!!\n");
    else{
        struct Node *temp=head;
        while(temp!=NULL){
            printf("%d ",temp->data);
        }
    }
}
int main(){
    creatList();
    display();
    return 0;
}
