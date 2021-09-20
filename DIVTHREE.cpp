#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;
        long long int k,d;
        cin>>n>>k>>d;

        long long int sum=0;
        long long int temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            sum += temp;
        }

        long long int days = sum / k;
        long long int min = days < d ? days : d;

        cout<<min<<endl;
    }
}