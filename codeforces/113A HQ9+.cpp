#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	
	getline(cin,str);
	
	int n = str.length();
	
	for ( int i=0; i<n; i++ ) {
		if ( str.at(i) == 'H' || str.at(i) == 'Q' || str.at(i) == '9' ) {
			cout << "YES" << endl;
			return 0;
		}
	}
	
	cout << "NO" << endl;
	
	return 0;
}
