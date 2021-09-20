#include<iostream>
#include<math>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long int arr[n];
        long long int diff,sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        for(int i=0;i<n;i++)
        {
            diff = arr[i+1]-arr[i];
            if(diff != 0)
            {
                sum += (abs(diff)-1);
            }
        }
        cout<<sum<<endl;
    }
}