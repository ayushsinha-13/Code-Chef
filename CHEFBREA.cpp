//https://www.codechef.com/problems/CHEFBREA

#include<bits/stdc++.h>
using namespace std;

int gcd(int n,int m){
    if(m == 0)
        return n;
    return gcd(m, n%m);    
}
int main(){
    int t;cin>>t;
    while(t--){
        int l,b;cin>>l>>b;
        int mul = l*b;
        if(l==b){
            cout<<"1\n";
        }
        else{
            int ans = mul/(gcd(l,b)*gcd(l,b));
            cout<<ans<<endl;
        }
    }
}