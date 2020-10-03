#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	string str = "hello";
	int index=0;
	
	for( int i=0; i<s.length(); i++ ) {
		if ( str[index] == s[i] ) {
			index++;
		}
	}
	
	if ( index == 5 ) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	
	return 0;
}
