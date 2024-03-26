#include<stdio.h>
struct student{
    int rollnumber;
    char name[30];
    char branch[10];
    float marks;
};
int main(){
    int size,i;
    printf("enter array size:");
    scanf("%d",&size);
    struct student slist[size];
    for(i=0;i<size;i++){
        printf("enter roll number :");
        scanf("%d",&slist[i].rollnumber);
        printf("enter name:");
        fflush(stdin);
        gets(slist[i].name);
        printf("enter branch:");
        gets(slist[i].branch);
        printf("enter marks:");
        scanf("%f",&slist[i].marks);
    }
    printf("students records are:\n");
    for(i=0;i<size;i++){
        printf("%15d %15s %15s %15.2f\n",slist[i].rollnumber,slist[i].name,slist[i].branch,slist[i].marks);
    }
}
