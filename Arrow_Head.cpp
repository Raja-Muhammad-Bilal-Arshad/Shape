#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int m,n;
    m=1;n=0;
    for(int r=1;r<=10;r++)
    {
        if(r==5)
        cout<<setw(5)<<setfill('*');
       if(r<=5)
       n++;
       else 
       n--;
        for(int c=1;c<=11;c++)
        {
            if(c>=1 && c<=n)
            {
                cout<<setw(5)<<setfill(' ')<<"*";
            }
            else
            cout<<setw(5)<<setfill(' ')<<" ";
        }
        
         cout<<endl;
    }
   
}