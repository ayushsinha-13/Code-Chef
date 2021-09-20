#include<iostream>

using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
         int a=0,b=0,c=0,d=0;
         cin>>a>>b>>c>>d;
        
        if(a==b && c==d)
        {
            cout<<"YES"<<endl;
        }
        else if(a==c && b==d)
        {
            cout<<"YES"<<endl;
        }
        else if(a==d && b==c)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}