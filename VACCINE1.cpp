#include<bits/stdc++.h>
using namespace std;

int main(){
    int v1,v2,d1,d2,p;
    cin>>d1>>v1>>d2>>v2>>p;

    int add=0;
    int day=0;
    while(add<p){
        day++;
        if(d1 <= day){
            add += v1;
        }
        if(d2 <= day){
            add += v2;
        }
    }

    cout<<day;
    return 0;
}