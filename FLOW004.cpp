#include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
       ostringstream str1;
       str1 <<n;
       string s = str1.str();
       int len = s.length();
       int sum = 0;
       
       char x = s[0];
       char y = s[len-1];
        int p = (int) x;
        int q = (int) y;
        p -= 48;
        q -= 48;
        sum = p + q;
        cout<<sum<<endl;
    }
}