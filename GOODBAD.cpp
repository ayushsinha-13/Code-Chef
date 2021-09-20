#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int k;cin>>k;
        string s; cin>>s;
        int l=0,u=0;
        for(int i=0;i<n;i++)
        {
            char x= s[i];
            int p =(int) x;
            if(p>=65 && p<=90)
            {
                u++;
            }
            else
            {
                l++;
            }
        }
        if(u==l)
        {
            if(k>=u)
            {
                cout<<"both"<<endl;
            }
            else
            {
                cout<<"none"<<endl;
            }       
        }
        else if(u<l)
        {
            if(k>=l)
            {
                cout<<"both"<<endl;
            }
            else if(k<u)
            {
                cout<<"none"<<endl;
            }
            else
            {
                cout<<"chef"<<endl;
            }
        }

        else if(u>l)
        {
            if(k>=u)
            {
                cout<<"both"<<endl;
            }
            else if(k<l)
            {
                cout<<"none"<<endl;
            }
            else
            {
                cout<<"brother"<<endl;
            }
            
        }
    }
}