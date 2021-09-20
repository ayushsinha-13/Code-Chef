#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int d,c;cin>>d>>c;
        int a1,a2,a3,a;
        cin>>a1>>a2>>a3;
        a = a1+a2+a3;

        int b1,b2,b3,b;
        cin>>b1>>b2>>b3;
        b = b1+b2+b3;

        int total = a+b,ans = 0;
        

        if(a<150 && b<150){
            ans = a + b + c + (d*2);
        }
    }
}