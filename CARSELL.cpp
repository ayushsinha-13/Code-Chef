#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n]={0};
        int val = 0;
        long long int temp = 0;
        long long int num;
        for(int i =0;i<n;i++)
        {
            cin>>num;
            arr[i]=num;
        }
        sort(arr, arr + n, greater<int>());
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                arr[i] = arr[i]-val;
                if(arr[i]>=0)
                {
                    temp = (temp + arr[i]) % 1000000007;
                }
                val++;
            }
            else
            {
                temp=temp;
            }
            
        }
        cout<<temp<<endl;
    }
}