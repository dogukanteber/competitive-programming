#include <iostream>


using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	
	int totalTime = 240;
	totalTime = totalTime - k;
	int solved = 0;
	
	for ( int i=1; i<=n; i++ ) {
		if ( totalTime - i*5 >= 0 ) {
			totalTime = totalTime - i*5;
			solved++;
		}
		else {
			break;
		}
	}
	
	cout << solved;
	
	
	return 0;
}
