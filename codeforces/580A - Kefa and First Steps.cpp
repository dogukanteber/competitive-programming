#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int arr[n];
	
	int max=1,strike=1;
	
	for ( int i=0; i<n; i++ ) {
		cin >> arr[i];
	}
	
	for ( int i=1; i<n; i++ ) {
		if ( arr[i] >= arr[i-1] ) {
			strike++;
			if ( strike > max ) {
				max = strike;
			}
		}
		else {
			strike = 1;
		}
	}
	
	cout << max;
	
	return 0;
}
