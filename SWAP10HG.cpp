#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        string p;cin>>p;
        int s1=0,s0=0;
        int p1=0,p0=0;
        
        for(int i=0;i<n;i++){
            if(s[i]==48){
                s0++;
            }
            else
            {
                s1++;
            }
        }
        for(int i=0;i<n;i++){
            if(p[i]==48){
                p0++;
            }
            else
            {
                p1++;
            }
        }
        
        if((s0==p0)&&(s1==p1)){
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}