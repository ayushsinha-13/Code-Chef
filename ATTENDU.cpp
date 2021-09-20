#include<bits/stdc++.h>
using namespace std;

float per(float a){
    float val = (a/120)*100;
    return val;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        float m=0;
        char att[110];cin>>att;

        for(int i=0;i<n;i++){
            if(att[i]==49){
                m++;
            }     
        }

        if((per(120-n)+per(m))>=75)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;   
    }
    return 0;
}