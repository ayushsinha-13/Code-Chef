#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int a=0,b=0;
        string s,s1,s2;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            if(a==0)
            {
                s1=s;
                a++;
            }
            else if(s == s1)
            {
                a++;
            }
            else if (b==0)
            {
                s2=s;
                b++;
            }
            else
            {
                b++;
            }        
        }
        if(a==b)
            cout<<"Draw"<<endl;
            else if(a<b)
            cout<<s2<<endl;
            else
            {
                cout<<s1<<endl;
            }
    }
    
}