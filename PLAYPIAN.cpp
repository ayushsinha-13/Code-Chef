#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        int len = s.length();
        for(int i=0;i<len;i+=2)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        

    }
}