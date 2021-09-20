#include<iostream>
using namespace std;
int main()
{
    int l,b;cin>>l>>b;
    int area=l*b;
    int peri=2*(l+b);
    if(area>peri)
    {
        cout<<"Area"<<endl;
        cout<<area;
    }  
    else if(peri>area)
    {
        cout<<"Peri"<<endl;
        cout<<peri;
    }
    else
    {
        cout<<"Eq"<<endl;
        cout<<area;
    }
    
}