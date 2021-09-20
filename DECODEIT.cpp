#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        char arr[] = {'a','d','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
        int n;cin>>n;
        string s;cin>>s;
        string temp = "";
        int index;

        for(int j=0;j<n;j=j+4){
            temp += s[j];
            temp += s[j+1];
            temp += s[j+2];
            temp += s[j+3];
            int power = 3;
            index = 0;
                for(int i=0;i<4;i++){
                    int num = temp[i]-48;
                    index += num*pow(2,power);
                    power--;
                }
            cout<<arr[index];    
            temp = "";
        }
        cout<<endl;
    }
}