#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int h,p;cin>>h>>p;
        while(h>0 && p>0)
        {
            h -= p;
            p /=2;
        }
        if(h<=0)
        {
            cout<<"0"<<"\n";
        }
        else if(p<=0)
        {
            cout<<"1"<<"\n";
        }
    }
}