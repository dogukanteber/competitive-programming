#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	int i,count = 0;
	
	cin >> str;
	
	for ( i=0; i<str.length()-1; ++i ) {
		if ( str[i] == str[i+1] ) {
			count++;
		}
		else {
			count = 0;
		}
		
		if ( count >= 6 ) {
			cout << "YES" << endl;
			return 0;
		}
	}	
	
	cout << "NO" << endl;
	
	return 0;
}
