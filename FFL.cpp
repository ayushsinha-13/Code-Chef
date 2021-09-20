#include<iostream>
#include<algorithm>


using namespace std;


int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,s;cin>>n>>s;
        int zero[n];
        int one[n];
        int p_in=0,q_in=0;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i]; 
            if(b[i]==0)
            {
                zero[p_in] = a[i];
                p_in++;
            }
            else
            {
                one[q_in]=a[i];
                q_in++;
            }          
        }
        if(p_in==0 || q_in==0 )
        {
            cout<<"no"<<endl;
        }
        else
        {
        sort(one,one+(q_in));
        sort(zero,zero+(p_in));
        s+=one[0];
        s+=zero[0];
        if(s<=100 && s>=13)
        cout<<"yes"<<endl;
        else
        {
            cout<<"no"<<endl;
        }
        }
        
    }
}