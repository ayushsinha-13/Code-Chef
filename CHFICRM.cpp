#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,flag=0;
        int bal[]={0,0};
        for(int i=0;i<n;i++)
        {
            cin>>a;
            if(a==5)
            {
                bal[0]++;
            }
            else if(a==10)
            {
                if(bal[0]>=1)
                {
                    bal[0]--;
                    bal[1]++;
                }
                else
                {
                    flag = 1;
                }  
            }
            else if(a==15)
            {
                if(bal[1]>=1)
                {
                    bal[1]--;
                }
                else if(bal[0]>=2)
                {
                    bal[0]-=2;
                }
                else
                {
                    flag = 1;
                }
                
            }
        }
        if(flag==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}