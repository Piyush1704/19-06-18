#include<iostream>
#include<new>
#include<cstdlib>
using namespace std;
int *q;

void initStack(int *p)
{
    q=new int [5];
    *p=0;
}
int isEmpty(int *p)
{
    if(*p==0)
        return 1;
    else
        return 0;
}
int isFull(int *p)
{
    if(*p==5)
        return 1;
    else
        return 0;
}
int push(int num,int *p)
{
    if(isFull(p))
    {

        exit(-1);
    }
    ++(*p);
    q[*p]=num;
    return 0;
}
int pop(int *p)
{
    int a;
    if(isEmpty(p))
    {

        exit(-2);
    }

    a=q[*p];
    --*p;
    return 0;
}
int peek(int *p)
{
    if(isEmpty(p))
    {

        exit(-2);
    }


    return q[*p];


}
int main()
{
    int top,a,b,c,d,e;
    initStack(&top);
    push(10,&top);
    push(20,&top);
    push(30,&top);
    push(40,&top);
    push(50,&top);
    push(60,&top);
    a=peek(&top);
    cout<<a;
    return 0;
}
