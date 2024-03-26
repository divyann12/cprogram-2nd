#include<stdio.h>
struct student{
    int rollnumber;
    char name[30];
    char branch[10];
    float marks;
};
int main(){
    struct student s1={12001,"sachin","IT",345.23};
    printf("roll no=%d",s1.rollnumber);
    scanf("%d",&s1.rollnumber);
    printf("enter name:");
    fflush(stdin);
    gets(s1.name);
    printf("enter branch:");
    gets(s1.branch);
    printf("enter marks:");
    scanf("%f",&s1.marks);
       printf("roll number=%d\n",s1.rollnumber);
    printf("name=%s\n",s1.name);
    printf("branch=%s\n",s1.branch);
    printf("marks=%f",s1.marks);
    
    struct student s2={12002,"achin","IT",245.23};
    printf("roll no=%d",s2.rollnumber);
    scanf("%d",&s2.rollnumber);
    printf("enter name:");
    fflush(stdin);
    gets(s2.name);
    printf("enter branch:");
    gets(s2.branch);
    printf("enter marks:");
    scanf("%f",&s2.marks);
    printf("roll number=%d\n",s2.rollnumber);
    printf("name=%s\n",s2.name);
    printf("branch=%s\n",s2.branch);
    printf("marks=%f",s2.marks);
    
    
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    return 0;
}
