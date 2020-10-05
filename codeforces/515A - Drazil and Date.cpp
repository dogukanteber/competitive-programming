#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a,b,s;
	cin >> a >> b >> s;
	
	a = abs(a);
	b = abs(b);
	
	if ( a+b == s ) {
		cout << "Yes";
	}
	else if ( a+b > s ) {
		cout << "No";
	}
	else {
		if ( ( s - ( a + b ) ) % 2 == 1 ) {
			cout << "No";
		}
		else {
			cout << "Yes";
		}
	}
	
	return 0;
}
