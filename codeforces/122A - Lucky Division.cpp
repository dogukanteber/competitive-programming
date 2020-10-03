#include <iostream>

using namespace std;

bool isLucky( int n ) {
	bool flag = true;
	while ( n != 0 ) {
		if ( n % 10 == 4 ) {
			
		}
		else if ( n % 10 == 7 ) {
			
		}
		else {
			return false;
		}
		n /= 10;
	}
	return true;
} 

int main() {
	int n;
	cin >> n;
	
	if ( isLucky(n) ) {
		cout << "YES" << endl;
		return 0;
	}
		
	for( int i=1; i<n; i++ ) {
		if ( isLucky(i) && n % i == 0 ) {
			cout << "YES" << endl;
			return 0;
		}
	}
	
	cout << "NO" << endl;
	
	return 0;
}
