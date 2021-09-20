#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int flag = 0;
        long long int arr[n],k;cin>>k;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]%k==0){
                flag++;
            }
            else{
                for(int j=0;i<n;i++){
                    if((arr[i]+arr[j])%k==0){
                        flag++;
                        arr[i]+=arr[j];
                        break;
                    }
                }
            }
        }

        if(flag == n){
            cout<<" YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
