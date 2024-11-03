#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=5;r++)
    {
        cout<<"*";
        for(int c=1;c<=5;c++)
        {
            if(r==1 || r==5)
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
}