#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    string c;
    cin>>c;
    if(c=="+")
    {
        cout<<fixed<<setprecision(6)<<a + b;
    }
    else if(c=="-")
    {
        cout<<fixed<<setprecision(6)<<a-b;
    }
    else if(c=="/")
    {
        cout<<fixed<<setprecision(6)<<a/b;
    }
    else if(c=="*")
    {
        cout<<fixed<<setprecision(6)<<a*b;
    }
    
}