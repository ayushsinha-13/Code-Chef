#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t; //test cases

    //TEST CASE
    while(t--){

        //INPUT
        int n,d; // number of persons , d peoples per day
        cin>>n>>d;
        
        //DYNAMIC ARRAY
        vector<int> risk;
        vector<int> normal;

        int age;
        for(int i=1;i<=n;i++){
            cin>>age;
            if(age<=9 || age>=80)
            {
                risk.push_back(age); //insert into risk array
            }
            else
            {
                normal.push_back(age); //insert into normal array
            }   
        }
        int a = (risk.size() / d); // No. of days for risk patients
        if(risk.size()%d !=0){
            a = a+1;
        }
        int b = (normal.size() / d); //No. of days for normal patients
        if(normal.size()%d !=0){
            b = b+1;
        }

        cout<<(a+b)<<endl;
    }
}