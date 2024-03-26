#include<stdio.h>
int top=-1,top2=-1;
char operator[100];
int operand[100];
void process(){
    int x=operand[top1--];
    int y=operand[top1--];
    char op=operator[top2--];
    int z;
    switch(op){
        case '+':
        z=x+y;
        break;
        case '-':
        z=y-x;
        break;
        case'*':
        z=x*y;
        break;
        case'/':
        z=y/x;
        break;
    }
    operand[++top1]=z;
}
int precedence(char op){
    switch(op){
        case '+':
        case '-':
         return 1;
         case '*':
         case '/':
         return 2;
         default:
         return 0;
    }
}
    int evalInfinixExpression(char *str){
        int i;
        for(i=0; str[i]!='\0';i++){
            char ch=str[i];
            if(ch>=48 && ch<=57)
            operand[++top1]=ch-48;
            else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
                if(top2==-1)
                

            }
            else if(ch=='('){
                operator[++top2]=ch;
                else{
                    while
                }
          

            }
        }

    }
int main(){
    return 0;
}