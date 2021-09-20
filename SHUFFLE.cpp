#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t;cin>>t;
    int temp;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int count=0;
        int num[n],sorted[n];
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
            sorted[i]=num[i];
        }
        sort(sorted,sorted+n);
        for(int i=0;i<n-k;i++)
        {
           if(num[i]>=num[i+k])
           {
                temp=num[i];
                num[i]=num[i+k];
                num[i+k]=temp;
           }
        }
        for(int i=0;i<n;i++)
        {
            if(num[i]==sorted[i])
            {
                count++;
            }
        }
        if(count==n)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
    }
}