#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        sort(a , a+n);
        sort(b , b+n);

        int sum_a=0;
        int sum_b=0;

        for(int i=0;i<n-1;i++)
        {
            sum_a = sum_a + a[i];
            sum_b = sum_b + b[i];
        }

        if(sum_a==sum_b)
        {
            cout<<"Draw"<<endl;
        }
        else if(sum_a<sum_b)
        {
            cout<<"Alice"<<endl;
        }
        else
        {
            cout<<"Bob"<<endl;
        }
    }   
}