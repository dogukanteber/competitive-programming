#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	int result = 0;
	
	while ( n-- ) {
		int a,b,c;
		cin >> a >> b >> c;
		
		int sum = a + b + c;
		if (  sum >= 2 ) {
			result++;
		}
	}
	
	cout << result << endl;
	
	return 0;
}
