#include<iostream>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long int a,b;
        int a_sum=0,b_sum=0;

        for(int i=0;i<n;i++)
        {
            long long int temp_a=0,temp_b=0;
            cin>>a;
            cin>>b;
            while(a != 0)
            {
                temp_a += a%10;
                a /= 10;
            }
            while(b != 0)
            {
                temp_b += b%10;
                b /= 10;
            }
            
            if(temp_a > temp_b)
            {
                a_sum++;
            }
            else if(temp_a < temp_b)
            {
                b_sum++;
            }
            else if(temp_a == temp_b)
            {
                a_sum++;
                b_sum++;
            }

        }
        if(a_sum > b_sum)
        {
            cout<<"0 "<<a_sum<<endl;
        }
        else if(a_sum < b_sum)
        {
            cout<<"1 "<<b_sum<<endl;
        }
        else if(a_sum == b_sum)
        {
            cout<<"2 "<<a_sum<<endl;
        }
    }
}