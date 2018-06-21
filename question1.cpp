#include<iostream>
#include<new>
#include<cstdlib>
#include<ctime>
using namespace std;

int main ()
{   int **p;
    int *q;
    int a;
    int b;
    cin>>a;
    cin>>b;

    p=new int*[a];
    q=new int[a*b];
    for(int i=0;i<a;i++)
    {

        p[i]=&q[b*i];

    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            p[i][j]=rand()%90+10;
        }
    }
     for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<p[i][j]<<"  ";
        }
        cout<<endl<<endl;
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cout<<&p[i][j]<<"  ";
        }
        cout<<endl<<endl;
    }
}
