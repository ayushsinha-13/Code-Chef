#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        int temp=0;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                if((i*j)==n){
                    temp++;
                    cout<<j<<" "<<i<<endl;
                    break;    
                }
            }
            if(temp>0)
                {break;}
        }
    }
}