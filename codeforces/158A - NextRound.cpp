#include <iostream>

using namespace std;

int main() {
	int n,k,i,r=0;
	
	cin >> n >> k;
	
	int arr[n];
	
	for ( i=0; i<n; ++i ) {
		int score;
		cin >> score;
		arr[i] = score;
	}

	for ( i=0; i<n; ++i ) {
		if ( arr[i] >= arr[k-1] && arr[i] > 0 ) {
			r++;
		}
	}

	cout << r << endl;
	
	return 0;
}
