#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m=7,n=0;
    for (int r=1;r<=6; r++)
    {
        m--;
        for(int c=1;c<=6;c++)
        {
            if(c>=m && c<=6)
            cout<<setw(2)<<setfill('*');
            else
            cout<<" ";
        }
        cout<<endl;
    }

}
