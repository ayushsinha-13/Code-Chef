#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int t;cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream str(s);
        string word;
        int temp=0;
        while(str>>word)
        {     
           if(word=="not")
	        temp++;
	        else
	        temp=temp;
        }
        if(temp>0)
        {
            cout<<"Real Fancy"<<endl;
        }
        else
        {
            cout<<"regularly fancy"<<endl;
        }
        
    }
}