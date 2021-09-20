#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int k,x;
        cin>>k>>x;
        int count=0;
        int arr[26]={0};
        int len = s.length();
        for(int i=0;i<len;i++)
        {
            arr[s[i]-'a']++;
            if(arr[s[i]-'a']>x)
            {
                if(k>0)
                {
                    arr[s[i]-'a']--;
                    k--;
                }
                else
                {
                    break;
                }                
            }
            else
            {
                count++;
            }
            
        }
        cout<<count<<endl;
    }
}