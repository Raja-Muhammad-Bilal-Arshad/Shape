#include<iostream>
using namespace std;
int main()
{
    int a=0;
    for(int i=1;i<=5;i++)
    {
        a=a+1;
        for(int j=1;j<=6;j++)
        {
            if(j<=a)
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }

}