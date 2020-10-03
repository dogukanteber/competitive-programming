#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int num1,num2;
	
	if ( n > 0 ) {
		cout << n << endl;
		return 0;
	}
	
	
	else {
		n = -1 * n;
		num1 = n / 10;
		int r = n % 10;
		num2 = n / 100;
		num2 = num2 * 10;
		num2 = num2 + r;
		cout << -1 * min(num1,num2) << endl;
	}
	
	return 0;
}
