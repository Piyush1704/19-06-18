#include<iostream>
using namespace std;


void initStack(int arr[],int *p)
{
    *p=100;
}
void push(int arr[],int num,int *p)
{
    if(*p==1000)
    {
        cout<<"STACK is FULL."<<endl;
        return;
    }
    ++(*p);
    arr[*p]=num;
    cout<<num<<" has been inserted."<<endl;
}
void pop(int arr[],int *p)
{
    int temp;
    if(*p==100)
    {
        cout<<"STACK is EMPTY."<<endl;
        return;
    }

    temp=arr[*p];
    *p--;
    cout<<temp<<" has been deleted."<<endl;
}
void peek(int arr[],int *p)
{
    int i;
    if(*p==100)
    {
        cout<<"STACK is EMPTY."<<endl;
        return;
    }
    for(i=*p; i>100; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int num,top;
    int arr[1000];
    initStack(arr,&top);
    push(arr,10,&top);
    push(arr,20,&top);

    peek(arr,&top);
    return 0;
}
