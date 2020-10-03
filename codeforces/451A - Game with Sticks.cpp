#include <iostream>

using namespace std;

int main() {
	
	int n,m;
	
	cin >> n >> m;
	
	int turn = 1;
	
	while ( n-- && m-- ) {
		turn++;
	}
	
	if ( turn % 2 == 0 ) {
		cout << "Akshat" << endl;
	}
	else {
		cout << "Malvika" << endl;
	}
	
	return 0;
}
