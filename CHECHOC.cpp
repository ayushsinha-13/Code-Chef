#include<iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;cin>>t;
    while(t--)
    {
        int n,m,x,y;cin>>n>>m>>x>>y;
        int mul= n*m;
        int sum;
        if(mul%2==0)
        {
            if(x<=y)
            {
                sum = (mul/2)*y;
            }
            else
            {
                if(((y-x)/x)==0)
                {
                    sum=(mul/2)*y;
                }
                else if(((y-x)/x)>0)
                {
                    sum = mul*x;
                }
            }
            
        }
        else 
        {
            if(mul==1)
            {
                sum = x;
            }
            else if(x>=y)
            {
                sum = ((mul/2)+1)*x;
            }
            else if(x<y)
            {
                sum = ((mul/2)*(y-x))+(((mul/2)+1)*x);
            }
        }
        cout<<sum<<"\n";
    }
}