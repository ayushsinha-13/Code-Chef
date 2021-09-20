#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int l,r;cin>>l>>r;
        long long int diff = (r-l)+1;
        long long int ans = (diff*(diff+1))/2;
        cout<<ans<<endl;
    }
}