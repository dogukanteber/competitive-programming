#include <iostream>

using namespace std;

int main() {
	int t,n;
	cin >> t;
	
	
	while( t-- ) {
		cin >> n;
		
		long long int moves = 0, coeff = 1, numberofcells = 0;
		long long int ncurr=3, npre=1;
		
		for ( int i=n/2+1; i<n; i++ ) {
			numberofcells = ncurr*ncurr - npre*npre;
			moves += numberofcells * coeff;
			coeff++;
			ncurr += 2;
			npre += 2;
		}
		
		cout << moves << endl;
	}
	
	return 0;
}
