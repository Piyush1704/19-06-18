#include<iostream>
#include<new>
#include<cstdlib>
using namespace std;
int *q;

void initStack(int *p)
{
    q=new int [1000];
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
    if(*p==2000)
        return 1;
    else
        return 0;
}
void freestack(int *p)
{
    for(int i=*p; i>0; i--)
    {
        q[i]=0;
        --*p;
    }
}
int push(int num,int *p)
{
    if(isFull(p))
    {
        //freestack(p);
        //return 0;
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
void tester(int *p)
{
    int a,b,c,d;
    a=rand()%1000+100;
    b=rand()%100;
    c=rand()%100;
    for(int i=0;i<a;i++)
        push(c,p);
    for(int i=0;i<b;i++)
        pop(p);
    d=peek(p);
    cout<<d;
}


int main()
{
    int top;
    initStack(&top);
    tester(&top);
    return 0;
}

