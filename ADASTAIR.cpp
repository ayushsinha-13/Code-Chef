#include<iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int diff=0 , x=0;
        int count=0;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            diff = arr[i]-x;
            x=arr[i];
            if(diff%k==0)
            {
                count += (diff/k)-1;
            }
            else
            {
                count += (diff/k);
            }
            
        }
        cout<<count<<endl;
    }
}