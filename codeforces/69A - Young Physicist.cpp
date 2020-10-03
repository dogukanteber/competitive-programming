#include <iostream>

using namespace std;


int main() {
	int n;
	cin >> n;
	int x=0,y=0,z=0;
	
	for( int i=0; i<n; i++ ) {
		int a;
		cin >> a;
		x += a;
		cin >> a;
		y += a;
		cin >> a;
		z += a;
	}
	
	if ( x == 0 && y == 0 && z == 0 ) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	
	return 0;
}
