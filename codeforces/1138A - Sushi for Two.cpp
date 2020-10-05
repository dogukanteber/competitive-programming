#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	int arr[n];
	for ( int i=0; i<n; i++ ) {
		cin >> arr[i];
	}
	
	int count[n];
	count[0] = 0;
	
	int index=0;
	int prev= arr[0];
	
	for ( int i=0; i<n; i++ ) {
		if ( prev == arr[i] ) {
			count[index]++;
		}
		else {
			index++;
			count[index]=1;
			prev = arr[i];
		}
	}
	
	int res=0;
	
	for ( int i=0; i<index; i++ ) {
		int x = min(count[i],count[i+1]);
		res = max(x,res);
	}

	cout << res*2;
	
	return 0;
}
