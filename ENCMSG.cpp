#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;

        //encoding the message
        if(n%2==0)
        {
            //even
            for(int i=0;i<n;i+=2)
            {
                char z = s[i];
                s[i]= s[i+1];
                s[i+1]=z;
            }
        }
        else
        {
            //odd
            for(int i=0;i<n-1;i+=2)
            {
                char z = s[i];
                s[i]= s[i+1];
                s[i+1]=z;
            }
        }

        //paring the letter partner
        for(int i=0;i<n;i++)
        {
            char c= s[i];
            int index = c-97;
            int req = 25 - index;
            req =req + 97;
            char y = (char) req;
            cout<<y;
        }
        cout<<endl;
        
    }
}