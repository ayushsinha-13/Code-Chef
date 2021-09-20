#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int temp=0,count=n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==temp)
            {
                count--;
            }
            else
            {
                temp=arr[i];
            }
            
        }
        cout<<count<<endl;
    }
}