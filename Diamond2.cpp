#include<iostream>
using namespace std;
int main()
{
    int left_width=7,right_width=5;
    for(int r=1;r<=10;r++)
    {
        if(r>=1 && r<=5)
       {left_width--;right_width++;}
       else
       {left_width++;right_width--;}
        for(int c=1;c<=11;c++)
        {
            if(c>=left_width && c<=right_width)
            cout<<  " ";
            else
            cout<<"*";
        }
        cout<<endl;
    }
}