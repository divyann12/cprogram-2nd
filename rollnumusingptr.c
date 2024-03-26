#include<stdio.h>
struct student{
    int rollnumber;
    char name[15];
    char branch[12];
    float marks;
};
int main(){
    struct student s1, *ptr;
    ptr=&s1;
    printf("enter roll number:");
    scanf("%d",&ptr->rollnumber);
    printf("enter name:");
    fflush(stdin);
    gets(ptr->name);
    printf("enter branch name:");
    gets(ptr->branch);
    printf("enter marks:");
    scanf("%f",&ptr->marks);
    printf(" roll number:%d\n",ptr->rollnumber);
    printf(" name:%s\n",ptr->name);
    printf(" branch:%s\n",ptr->branch);
    printf(" marks:%f",ptr->marks); 