#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int solved=0,slow=0,bot=0;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp>=0){
                solved++;
            }
            if(temp>k){
                slow++;
            }
            if(temp==0 || temp==1){
                bot++;
            }
        }

        if(solved < ceil((float)n/2)){
            cout<<"rejected\n";
        }
        else if(slow>=1){
            cout<<"too slow\n";
        }
        else if(bot == n){
            cout<<"bot\n";
        }
        else{
            cout<<"accepted\n";
        }
    }
}