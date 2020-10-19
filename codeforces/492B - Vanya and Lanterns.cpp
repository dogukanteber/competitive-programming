#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int n,l;
	cin >> n >> l;
	
	int arr[n];
	
	for ( int i=0; i<n; i++ ) {
		cin >> arr[i];
	}

	sort(arr,arr+n);
	
	int res = 2*max(arr[0], l-arr[n-1]);
	
	for ( int i=0; i<n-1; i++ ) {
		res = max(res, arr[i+1]-arr[i]);
	}
	
	printf("%.10f", res/2.);
	
	return 0;
}
