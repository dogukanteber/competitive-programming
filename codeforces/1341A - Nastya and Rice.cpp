#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while( t-- ) {
		int n,a,b,c,d;
		cin >> n >> a >> b >> c >> d;
		
		int L = n * ( a - b );
		int R = n * ( a + b );
		
		if ( R < c - d || L > c + d )
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	
	
	return 0;
}
