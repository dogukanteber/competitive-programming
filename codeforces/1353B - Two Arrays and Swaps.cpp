#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while ( t-- ) {
		int a,b;
		cin >> a >> b;
		
		int arrA[a];
		int arrB[a];
		
		for ( int i=0; i<a; i++ ) {
			cin >> arrA[i];
		}
		for ( int i=0; i<a; i++ ) {
			cin >> arrB[i];
		}
		
		sort(arrA,arrA+a);
		sort(arrB,arrB+a,greater<int>());
		
		int max = 0;
		
		for ( int i=0; i<a; i++ ) {
			if ( arrB[i] > arrA[i] && b > 0 ) {
				arrA[i] = arrB[i];
				b--;
			}
		}
		for ( int i=0; i<a; i++ ) {
			max += arrA[i];
		}
		cout << max << endl;
	}
	
	return 0;
}
