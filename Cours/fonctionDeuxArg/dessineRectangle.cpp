#include"dessineRectangle.h"
#include<iostream>

using namespace std;

void dessineRectangle(int l,int L)
{
    for(int i=0;i<l;i++)
    {
        cout<<" ";
        for(int j=0;j<L;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }    
}