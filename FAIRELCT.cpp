#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    int n,m;cin>>n>>m;


    int min = n < m ? n : m;
    long long int a[n];
    long long int b[m];
    long long int sumA = 0;
    long long int sumB = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sumA += a[i];
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
        sumB += b[i];
    }

    sort(a , a + n);
    sort(b , b + m , greater<long long int>());

    int currentIndex = 0;
    bool flag = true;
    while (sumA <= sumB)
    {
        if(currentIndex < min){
            long long int temp = a[currentIndex];
            a[currentIndex] = b[currentIndex];
            b[currentIndex] = temp;
            sumA += a[currentIndex];
            sumB -= a[currentIndex];
            sumB += b[currentIndex];
            sumA -= b[currentIndex];

        currentIndex++;
        }
        else
        {
            flag = false;
            break;
        }
        
    }

    if(flag){
        cout<<currentIndex<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    
    } 
}