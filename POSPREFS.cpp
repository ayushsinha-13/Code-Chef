#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int arr[n];
        int count=0;

        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i]=i+1;
                count++;
            }else
            {
                arr[i]=-(i+1);
            }   
        }
        
        if(count == k){
            for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
            }
        }
        else
        {
            int i=n-1;
            while(count!=k){
                if(count<k){
                    if(arr[i]==-(i+1)){
                        arr[i]=i+1;
                        count++;
                    }
                    i--;
                }
                else if(count>k){
                    if(arr[i]==(i+1)){
                        arr[i]=-(i+1);
                        count--;
                    }
                    i--;
                }
            }

            for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
            }

        }
        

    }
}