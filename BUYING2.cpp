//https://www.codechef.com/problems/BUYING2

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int sum =0;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }

        sort(arr,arr+n);

        if(sum%k == 0){
            cout<<(sum/k)<<endl;
        }
        else if(sum%k > 0){
            int temp = sum/k;
            sum -=arr[0];
            if(sum%k >= 0 && sum/k == temp){
                cout<<"-1\n";
            }
            else{
                sum += arr[0];
                cout<<(sum/k)<<endl;
            }
        }

        /*
            BETTER SOLUTION 
            / yashss1 - 42131680 \

            int temp = sum % k;
            if(temp >= arr[0]){
                cout<<"-1"<<endl;
            }
            else{
                cout<<sum/x<<endl;
            }
            
        */
    }
}