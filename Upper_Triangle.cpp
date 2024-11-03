#include<iostream>
using namespace std;
int main ()
{
    // int a,n,m,cc,r;
    // cout<<"Enter how long you want your Triangle(rows) : ";
    // cin>>a;
    // m=n=a+1;
    // cc=r*2+1;
    int m,n;
    n=7; m=5;
    for(int r=1;r<=5;r++)
    {
        n--; m++;
        for(int c=1;c<=11;c++)
        {
            if(c>=n && c<=m )
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
system("pause");
return 0; }