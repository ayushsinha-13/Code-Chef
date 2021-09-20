#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		long long int n, s;
		cin>>n>>s;

		if((n*(n+1))/2 <= s || (n*(n+1))/2-s > n ) {
			cout<<"-1\n";
		}
		else {
			cout<<((n*(n+1))/2)-s<<endl;
		}
	}
	
}