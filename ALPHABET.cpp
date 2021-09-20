#include<iostream>
using namespace std;
int main()
{
    string s; cin>>s; 
    int n;cin>>n;
    while(n--)
    {
        int temp =0;
        string si;cin>>si;

        //lengths of strings

        int len = s.length(); //length of learned letters 
        int len1 = si.length();  //length of given word

        //loop for learned characters
        for(int i=0;i<len;i++)
        {
            char x= s[i];
            int q= (int) x;

            //loop for letter matching
             for(int j=0;j<len1;j++)
            {
                char y= si[j];
                int p =(int) y;

                //if given word's letter and learned letter match
                if(p==q)
                {
                    temp++;
                }
            }
        }
        if(temp==len1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
        
    }
}