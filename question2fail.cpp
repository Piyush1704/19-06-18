#include<iostream>
#include<new>
#include<ctime>
#include<cstdlib>
using namespace std;

void init(int size_of_stack)
{
    int *p;
    p=new int(size_of_stack);
}

int push(int x,int index)
{

    if(index < 1000)
    {
        p[index]=x;
        index++;
        return index;
    }
    else
    cout<<"Stack is full";

}
void pop(int index)
{
    if(index > 100)
    {
        p[index]=0;
        index--;
        return index;
    }
    else
        cout<<"Stack will underflow";
}
void peek(int index)
{
    cout<<p[index];
}
int main()
{
    int min_size=100;
    int max_size=1000;
    int index=0;
    int s,a;
    cin>>s;
    if(s<min_size||s>max_size){
        cout<<"Stack Creation Not Possible"<<endl;
    }
    cin>>a
    init(s);
    index=push(a,index);
    index=pop(index);
    peek();
   
}
