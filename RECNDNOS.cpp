#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        int temp =0;
        int count=0;
        cin>>n;
        int a[n];
        int b[n]={0};
        int c[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i,j;
        for ( i=0; i<n; i++)
        {
            for (j=0; j<i; j++)
               if (a[i] == a[j])
                   {
                    break;
                   }
                   if(i==j)
                   {
                       b[temp]=a[i];
                       temp++;
                   }
        }
       for(i=0;i<n;i++)
       {
          if(b[i]!=0)
          cout<<b[i]<<" ";
       }
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;i++)
           {
               if(a[j]==b[i])
               {
                   if(a[i]==a[i+1])
                   {
                       count++;
                   }
               }
           }
       }
    }
}