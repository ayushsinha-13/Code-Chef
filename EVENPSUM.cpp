#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;

        long long int odd1=0,odd2=0,even1=0,even2=0; 

        if(a%2==0){
            odd1 = a/2;
            even1 = a/2;
        }
        else
        {
            odd1 = (a/2)+1;
            even1 = a/2;
        }

        if(b%2==0){
            odd2 = b/2;
            even2 = b/2;
        }
        else
        {
            odd2 = (b/2)+1;
            even2 = b/2;
        }
        


        long long int ans = (odd1 * odd2)+(even1 * even2);
        cout<<ans<<"\n";
    }
}