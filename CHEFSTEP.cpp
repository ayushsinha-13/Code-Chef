#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long int k,d;cin>>k;

        for(int i=0;i<n;i++)
        {
            cin>>d;
            if(d%k==0)
            cout<<"1";
            else
            cout<<"0";
        }
        cout<<"\n";
    }
}