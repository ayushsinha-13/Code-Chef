#include<bits/stdc++.h>
using namespace std;

bool check(string s){

    //checks length >= 10
    if(s.length()<10){
           return false; 
        }

    //checks rest of the case
    else{    
        int count_num = 0; // number of 
        int count_s = 0;
        int count_lwr = 0;
        int count_upr = 0;
        int count = 0;

        //iterator class for string
        std::string::iterator it;

        //iterating in every character in string s
        for(it=s.begin();it!=s.end();it++){
            if(*it >= 48 && *it<=57){
                if(count != 0 && count != s.length()-1){
                    count_num++;
                }
            }
            else if(*it >= 97  &&  *it<= 122){
                count_lwr++;
            }
            else if(*it >= 65 && *it <= 90){
                if(count != 0 && count != s.length()-1)
                    count_upr++;
            }
            else if(*it==64 || *it==35 || *it==37 || *it==38 || *it==63){
                if(count != 0 && count != s.length()-1)
                    count_s++;
            }
            count++;
        }

        if(count_s == 0 || count_upr == 0 || count_lwr == 0 || count_num == 0){
            return false;
        }
    }

        return true;      
}

int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        //cout<<s.length()<<endl;
        
        if(check(s)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}