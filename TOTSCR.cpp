#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    int n,k;cin>>n>>k;
    string s;
    int points[n];
    int score;

    for(int i=0;i<k;i++){
        cin>>points[i];
    }

    for(int i=0;i<n;i++){
        cin>>s;
        score = 0;
        for(int j=0;j<k;j++){  
            if(s[j] == 49){
                score += points[j];
            }  
            
        }
        cout<<score<<endl;
        s="";
    }
    }
}