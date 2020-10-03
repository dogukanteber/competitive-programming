#include <iostream>

using namespace std;

int main() {
	
	int t;
	
	cin >> t;
	
	while ( t-- ) {
		int n,count=0;
		bool flag = false;
		cin >> n;
		
		while ( n != 1 ) {
			if ( n % 3 != 0 ) {
			flag = true;
			break;
		}
		else if ( n % 3 == 0 && n % 2 != 0 ) {
			n = n * 2;
			count++;
		}
		else if ( n % 6 == 0 ) {
			n = n / 6;
			count++;
			}
		}
		if ( flag ) {
			cout << -1 << endl;
		}
		else {
			cout << count << endl;
		}
	}
	
	return 0;
}
