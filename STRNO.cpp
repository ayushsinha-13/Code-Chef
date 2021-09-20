#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
       long long int x,k;
       cin>>x>>k;
       if(x%k==0 )
       {
          cout<<"1"<<endl; 
       }
       else
       {
           cout<<"0"<<endl;
       }
       
    }
}