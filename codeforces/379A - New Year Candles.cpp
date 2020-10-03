#include <iostream>

using namespace std;

int main() {
	int a,b;
	cin >> a >> b;

	int ans = a;
	
	while ( a>=b ) {
		int rem = a % b;
		int div = a / b;
		ans += div;
		a = div + rem;
	}
	
	cout << ans << endl;
	
	return 0;
}
