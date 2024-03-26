#include<stdio.h>
#include<string.h>
#include<ctype.h>
int op[100],t1=-1;
int or[100],t2=-1;
void op_push( int val)
{
    t1++;
    op[t1]=val;
}
int pop()
{
    int x=op[t1];
    t1--;
    return x;
}
void opr_push(char a)
{
    or[++t2]=a;
}
char opr_pop()
{
    char c=or[t2];
    t2--;
    return c;
}
void number(char *s,int l)
{
    char num[100];
    int i=-1;
    printf("%d,%d\n",i,l);
    while(i<l)
    {
        printf("i=%d\n",i);
        i++;
        int j=0;
    while(i<l)
    {
        if(isdigit(s[i]))
        {
            num[j]=s[i];
            printf("%d,%c\n",j,s[i]);
            i++,j++;
        }
        else
        {
            printf("\n%s\n",num);
            break;
        }

    }
    printf("%c,%s\n",num[2],num);
    }
}
void main()
{
    char exp[]="43+76*2";
    int l=strlen(exp);
    number(exp,l);
}