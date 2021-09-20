#include<iostream>
#include<sstream>
using namespace std;
int main()
{
  int t;cin>>t;
  while(t--)
  {
     long long int n;cin>>n;
        ostringstream str1;
        str1 << n;
        string s = str1.str();
        int len = s.length();
        int val=0;

        for(int i=0;i<len;i++)
        {
            char x = s[i];
            int p = (int) x;
            p = p-48;
            if(p==4)
            {
                val++;
            }
        }
        cout<<val<<endl;
  }  
} 
