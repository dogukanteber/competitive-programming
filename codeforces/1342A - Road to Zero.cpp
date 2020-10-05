#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while ( t-- ) {
		long long x,y,a,b;
		cin >> x >> y >> a >> b;
		
		if ( x > y ) {
			swap(x,y);
		}
		
		long long ans1 = (x+y)*a;
		long long ans2 = (y-x)*a+x*b;
		
		cout << min(ans1,ans2) << endl;
	}
	
	return 0;
}
