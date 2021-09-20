#include<iostream>
using namespace std;
int main()
{
    //TEST CASE
    int t;cin>>t;
    while(t--)
    {
        //Initialise the variables
        int len,que;cin>>len>>que; //len -> length of string , query -> no of query
        long long int alp[26]={0};
        string s; cin>>s;
        //iterate through string
        for(int i=0;i<len;i++)
        {
            char x = s[i];
            int p = int(x);
            p = p-97; //index of that character
            alp[p] += 1;
        }  
        for(int k=0;k<que;k++)
        {
            long long int count = 0;
            long long int n;cin>>n;
            for(int i=0; i<26 ; i++)
            {
                if(alp[i]>n)
                {
                    count += (alp[i]-n);

                }
            }
            cout<<count<<endl;
        }    
    }
}