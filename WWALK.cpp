#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,temp=0,diff=0;
		int sum=0;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(int i=0;i<n;i++)
		{
			diff = a[i]-b[i];
			if((temp + diff) == diff)
			{
				sum += a[i];
				temp = diff;
			}
			
		}
		cout<<sum<<endl;
	}
}
