#include<iostream>
using namespace std;
int main()
{
    int a=5;
    for(int i=1;i<=5;i++)
    {
        a--;
        for( int j=1;j<=5;j++)
        {
            if(j<=a)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }
}