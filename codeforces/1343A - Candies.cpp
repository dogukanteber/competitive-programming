#include <iostream>
#include <math.h>

using namespace std;


int main() {
	int t;
	
	cin >> t;
	
	while( t-- ) {
		int n;
		cin >> n;

		
		for( int k=2; k<35; k++ ) {
			int p = pow(2,k);
			--p;
			if ( n % p == 0 ) {
				cout << n / p << endl;
				break;
			}
		}
	}
	
	
	return 0;
}
