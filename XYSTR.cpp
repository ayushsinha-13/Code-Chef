#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int count=0;
        int len = (int) s.size();
        for(int i=0;i<len-1;i++)
        {
            if(s[i]=='x')
            {
                if(s[i+1]=='y')
                {
                    count++;
                    i++;
                }
            }
            else
            {
                if(s[i+1]=='x')
                {
                    count++;
                    i++;
                }
            }   
        }
        cout<<count<<endl;
    }
}