#include<stdio.h>
#include<string.h>
#include<ctype.h>
char* convertPostfixToInfix(char *exp){
    char stack[100][30];
    int top=-1,i;
    for(i=0;exp[i]!='\0';i++){
        char ch=exp[i];
        if(isalnum(ch)){
            char temp[]={ch,'\0'};
            strcpy(stack[++top],temp);
        }
        else if(ch=='+'||ch=='-'|| ch=='*'||ch=='/'){
            char *s1=stack[top--];
            char *s2=stack[top--];
            char s3[100]="";
            snprintf(s3,100,"(%s%c%s)",s2,ch,s1);
            strcpy(stack[++top],s3);
        }
    }
    char *s=(char*)malloc(100);
    strcpy(s,stack[top]);
    return s;
}
int main(){
    char exp[100];
    printf("enter postfix expression:");
    gets(exp);
    printf("infix form of postfix expression %s is %s\n",exp,convertPostfixToInfix(exp));
 
    return 0;
}