#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int temp=0 ;
        long long int count=0;
        for(int j=0;j<q;j++)
        {
            int f,d;
            cin>>f>>d;
            if(f>n)
            {
                f = n;
            }
            if(d>n)
            {
                d = n;
            }
            int diff =0;
            
            diff = (f-temp);
            count += abs(diff);
            diff = (d - f );
            count += abs(diff);
            temp = d;
            
        } 
        cout<<count<<endl;  
    }
}