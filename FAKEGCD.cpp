#include<bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<ll> vll;

#define si(x) scanf("%d",&x)
#define sl(x) scanf("%lld",&x)
#define sf(x) scanf("%f",&x)
#define ss(x) scanf("%s",x)
#define pi(x) printf("%d\n",x)
#define pl(x) printf("%lld\n",x)
#define pf(x) printf("%f\n",x)
#define ps(x) printf("%s\n",x)
#define PI 3.14

const ll MOD = 1e9+7;
ll lcm (ll a,ll b){
    ll a0=a;
    ll b0=b;
    return a0*b0/__gcd(a0,b0);
}

const ll MAX_SIZE = 1000001;
vll isprime(MAX_SIZE,true);
vll prime;
vll SPF(MAX_SIZE);

void manipulated_sieve(int N){
    isprime[0] = isprime[1] = false;
    for(ll i=2;i<N;i++){
        if(isprime[i]){
            prime.push_back(i);
            SPF[i]=i;
        }
        for(ll j=0; j<(int)prime.size() && i*prime[j] < N && prime[j] <= SPF[i];j++){
            isprime[i*prime[j]]=false;
            SPF[i*prime[j]] = prime[j];
        }
    }
}


int main()
{
    FAST
    
    int t;si(t);
    while(t--)
    {
        // Your Code goes here
        int n;si(n);
        vi v(n);
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            si(v[i]);
            if(v[i]%2==0){
                even++;
            }else{
                odd++;
            }
        }

        if(abs(odd-even)>1){
            pi(-1);
        }else{
            sort(v.begin(),v.end());
            cout<<v[0]<<" ";
            for(int i=0;i<n-1;i++){
                if(v[i]%2==0){
                    if(v[i+1]%2==1){
                        cout<<v[i+1]<<" ";
                    }else{
                        
                    }
                }else{
                    if(v[i+1]%2==0){
                        cout<<v[i+1]<<" ";
                    }else{

                    }
                }
            }
        }

    }
}