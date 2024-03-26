#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Precedence(char op)
{
switch(op) 
{
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
char* convertInfixToPostfix(char *str) 
{

    int i, x=0, top=-1;
    char operator[50];
    char *s = (char*)malloc(strlen(str)+1);
    for(i=0; str[i]!='\0'; i++) 
    {
        char ch=str[i];
        if(ch>=48 && ch<=57 || ch>=65 && ch<=90 || ch>=97 && ch<=122) //checking digits and alphabets
        s[x++] = ch;
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/') 
        {
            if(top==-1)
            operator[++top] = ch;
            else 
            {
                if(Precedence(str[i])<=Precedence(operator[top]))
                s[x++] = operator[top--];
                operator[++top] = ch;
            }
        }
        else if(ch=='(')
        operator[++top] = ch;
        else if (ch==')') 
        {
            while(operator[top]!='(') 
            {
                s[x++]= operator[top--];
            }
            top--;
        }
    }
        while(top!=-1) 
        {
            s[x++]=operator[top--];
        }
    s[x]='\0';
    return s;
}
char* convertInfixToPrefix(char *str) 
{

    int i, x=0, top=-1;
    char operator[50];
    char *s = (char*)malloc(strlen(str)+1);
    for(i=0; str[i]!='\0'; i++) 
    {
        char ch=str[i];
        if(ch>=48 && ch<=57 || ch>=65 && ch<=90 || ch>=97 && ch<=122) //checking digits and alphabets
        s[x++] = ch;
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/') 
        {
            if(top==-1)
            operator[++top] = ch;
            else 
            {
                if(Precedence(str[i])<=Precedence(operator[top]))
                s[x++] = operator[top--];
                operator[++top] = ch;
            }
        }
        else if(ch=='(')
        operator[++top] = ch;
        else if (ch==')') 
        {
            while(operator[top]!='(') 
            {
                s[x++]= operator[top--];
            }
            top--;
        }
    }
        while(top!=-1) 
        {
            s[x++]=operator[top--];
        }
    s[x]='\0';
    return strrev(s);
}
int main() {
    char str[100];
    printf("Enter Infix Expression: ");
    gets(str);                        //fgets(str,100,stdin);
    printf("Postfix form of INFIX expression %s is %s\n",str,convertInfixToPostfix(str));
    printf("Prefix form of INFIX expression %s is %s",str,convertInfixToPrefix(str));
}