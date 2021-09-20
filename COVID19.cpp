#include<iostream>

using namespace std;

int main() 
{
    
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int min = 11;
        int max = 1;
        int count = 1;
        int x[n];
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            //cout<<"val: "<<x[i]<<endl;
        }
        
        for(int i=0;i<n-1;i++)
        {
            int diff = x[i+1]-x[i];
            //cout<<"x[i]: "<<x[i]<<endl;
            
            if(diff<=2)
            {
                count++;
            }
            else
            {
               if(count<min)
                {
                min=count;
                }
               if(count>max)
                {
                    max=count;
                }   
                count=1;   
            }
              
        }
            if(count<min)
                {
                min=count;
                }
            if(count>max)
                {
                    max=count;
                }
        cout<<min<<" "<<max<<endl;
    }
}