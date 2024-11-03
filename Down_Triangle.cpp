#include<iostream>
using namespace std;
int main()
{
    int m,n;
    m=1;n=11;
    for(int r=1;r<=5;r++)
    {
        m++;n--;
        for(int c=1;c<=11;c++)
        {
            if(c>=m && c<=n)
            cout<<"*";
            else 
            cout<<" ";
        }
        cout<<endl;
    }

system("pause");
return 0;
}