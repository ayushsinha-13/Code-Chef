#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int rem = n%8;
        if(rem==1 || rem==4)
        {
            if(rem==1)
            cout<<(n+3)<<"LB"<<endl;
            else
            cout<<(n-3)<<"LB"<<endl;
        }
        else if(rem==2 || rem==5)
        {
            if(rem==2)
            cout<<(n+3)<<"MB"<<endl;
            else
            cout<<(n-3)<<"MB"<<endl;
        }
        else if(rem==3 || rem==6)
        {
            if(rem==3)
            cout<<(n+3)<<"UB"<<endl;
            else
            cout<<(n-3)<<"UB"<<endl;
        }
        else
        {
            if(rem==7)
            cout<<(n+1)<<"SU"<<endl;
            else
            cout<<(n-1)<<"SL"<<endl;
        }
        
    }
}