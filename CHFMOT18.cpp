#include<iostream>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int s,n;cin>>s>>n;
        int sum=0 ;
        while(s!=0)
        {
        	sum += s/n;
        	s =s%n;
        	if(s==0)
        	{
        		break;
			}
			else if(s==1)
			{
				sum += 1;
				break;
			}
			n -=2;
		}
        cout<<sum<<endl;
    }
}