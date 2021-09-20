#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(7),f(7);
    int sum = 0;

    for(int i=0;i<7;i++){
        cin>>a[i];
    }

    for(int i=0;i<7;i++){
        cin>>f[i];
    }

    for(int i=0;i<7;i++){
        sum += abs(a[i]-f[i]);
    }

    cout<<sum<<endl;
}