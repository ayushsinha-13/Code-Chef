#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int val;
        int arr[100]={0};
        for(int k=0;k<n;k++)
        {
            cin>>val;
            arr[k]=val;
        }
        int pos_i, pos_f;
        int temp=0;
            for(int j=0;j<n;j++)
            {
                if(arr[j]==1)
                {
                    pos_i=j;
                    break;
                }
            }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                pos_f =i;
                if((pos_f-pos_i)<6 && (pos_f-pos_i)!=0)
                {
                    temp++;
                    break;
                }
                else
                {
                    pos_i=pos_f;
                }
                
            }

        }
        if(temp>0)
        {
           cout<<"NO"<<endl; 
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}