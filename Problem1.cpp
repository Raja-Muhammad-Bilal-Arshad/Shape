#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=5;r++)
    {
        for(int c=1;c<=5;c++)
        {
            if(r==1 || r==5 || c==5 || c==1)
            cout<<c;
            else 
            cout<<" ";
        }
        cout<<endl;
    }
}