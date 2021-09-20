#include<iostream>
using namespace std;

int main(){
    int t;cin>>t; 
    while(t--){
        int n;cin>>n;
        int odd=0,even=0,count=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }

        if(even>0 && odd!=0){
            if(even < odd){
                cout<<even<<endl;
            }
            else{
                cout<<odd<<endl;
            }
        }
        else{
            cout<<"0\n";
        }
    }
}