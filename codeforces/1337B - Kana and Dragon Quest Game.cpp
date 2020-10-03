#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while ( t-- ) {
		int x,n,m;
		
		cin >> x >> n >> m;
		
		if ( m*10 >= x ) {
			cout << "YES" << endl;
			continue;
		}
		
		while ( n-- ) {
			x = x/2 + 10;
		}
		
		while ( m-- ) {
			x = x - 10;
		}
		
		if ( x <= 0 ) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	
	
	return 0;
}
