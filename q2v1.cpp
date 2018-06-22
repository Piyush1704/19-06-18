#include<iostream>
using namespace std;
int S[1000],top;


void initStack()
{
    top=100;
}


void push(int num)
{
    if(top==1000)
    {
        cout<<"STACK is FULL."<<endl;
        return;
    }
    ++top;
    S[top]=num;
    cout<<num<<" has been inserted."<<endl;
}
void peek()
{
    int i;
    if(top==100)
    {
        cout<<"STACK is EMPTY."<<endl;
        return;
    }
    for(i=top; i>100; i--)
    {
        cout<<S[i]<<" ";
    }
    cout<<endl;
}
void pop()
{
    int temp;
    if(top==100)
    {
        cout<<"STACK is EMPTY."<<endl;
        return;
    }

    temp=S[top];
    top--;
    cout<<temp<<" has been deleted."<<endl;
}
int main()
{
    int num;
    initStack();
    push(10);
    push(20);

    peek();
    return 0;
}
