#include<iostream>
#include<new>
using namespace std;


void initStack(int **q,int *p)
{
    *q=new int [1000];
    *p=100;
}
void push(int **q,int num,int *p)
{
    if(*p==1000)
    {
        cout<<"STACK is FULL."<<endl;
        return;
    }
    ++(*p);
    (*q)[*p]=num;
    cout<<num<<" has been inserted."<<endl;
}
void pop(int **q,int *p)
{
    int a;
    if(*p==100)
    {
        cout<<"STACK is EMPTY."<<endl;
        return;
    }

    a=(*q)[*p];
    --*p;
    cout<<a<<" has been deleted."<<endl;
}
void peek(int **q,int *p)
{
    int i;
    if(*p==100)
    {
        cout<<"STACK is EMPTY."<<endl;
        return;
    }
    for(i=*p; i>100; i--)
    {
        cout<<(*q)[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int num,top;
    int *arr;
    initStack(&arr,&top);
    push(&arr,10,&top);
    push(&arr,20,&top);
    pop(&arr,&top);
    peek(&arr,&top);
    return 0;
}
