#include<iostream>
using namespace std;
int main()
{
     int m,n,l;
     cout<<"Enter the length of Diamond(rows): ";
     cin>>l;

    m=l+2;n=l;
    for(int r=1;r<=l;r++)
    {
        if(r>=1 && r<=l/2)
        {m--;n++;}
        else
         {m++;n--;}
        for(int c=1;c<=((2*l)+1);c++)
        {
            if(c>=m && c<=n)
            cout<<"*";
            else
            cout<<" ";}
        cout<<endl; }}