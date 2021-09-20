#include<iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,a;
        cin>>n>>a;
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                arr[i][j]=a;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}