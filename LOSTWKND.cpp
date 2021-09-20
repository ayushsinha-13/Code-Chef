#include<iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int a[5];
		int p;
		int sum=0;
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
		}
		cin>>p;
		for(int i=0;i<5;i++)
		{
			a[i] *=p;
			sum += a[i];
		}
		if(sum<=120)
		{
			cout<<"No"<<endl;
		}
		else
		cout<<"Yes"<<endl;
	}
}
