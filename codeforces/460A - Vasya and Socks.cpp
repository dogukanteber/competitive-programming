#include <iostream>

using namespace std;

int main() {
	int n,m;
	
	cin >> n >> m;
	
	int weared=0;
	int currentSocks=n;
	
	while ( currentSocks >= m ) {
		weared += m;
		currentSocks -= m;
		currentSocks++;
	}
	
	weared += currentSocks;
	
	cout << weared << "\n";
	
	return 0;
}
