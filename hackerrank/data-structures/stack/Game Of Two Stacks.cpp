#include <bits/stdc++.h>

using namespace std;

int main() {
	int g;
	cin >> g;
	
	while ( g-- ) {
		int n,m,x;
		cin >> n >> m >> x;
		
		int arr1[n];
		int arr2[m];
		
		for ( int i=0; i<n; i++ ) {
			cin >> arr1[i];
		}
		for ( int i=0; i<m; i++ ) {
			cin >> arr2[i];
		}
		
		int sum=0, score=0, i=0, j=0;
		
		while ( sum+arr1[i] <= x && i < n ) {
			sum += arr1[i];
			i++;
		}
		score = i;
		
		while ( j < m && i >= 0 ) {
			sum += arr2[j];
			j++;
			while ( sum > x && i > 0 ) {
				i--;
				sum -= arr1[i];
			}
			if ( sum <= x && i+j > score )
				score = i+j;
		}
		cout << score << endl;
	}
	
	
	
	return 0;
}
