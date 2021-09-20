#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long int n;cin>>n;
        long long int m ,a,r=0 ;
        m=n;
    while(m>0)
    {
        a=m%10;
        r=(r*10)+a;
        m/=10;
    } 

    cout<<r<<endl;
    }
}