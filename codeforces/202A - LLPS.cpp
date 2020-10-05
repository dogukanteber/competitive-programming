#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool is_lexi( string s ) {
	int j = s.length()/2;
	int n = s.length();
	for ( int i=0; i<j; i++ ) {
		if ( s[i] != s[n-i-1] ) {
			return false;
		}
	}
	return true;
}


int main() {
	string str;
	cin >> str;
	
	sort(str.begin(),str.end(),greater<int>());
	
	string res = str.substr(0,1);
	
	for( int i=0; i<str.length(); i++ ) {
		if ( str[i] == str[i+1] ) {
			res += str[i+1];
		}
		else {
			break;
		}
	}
	
	cout << res;
	
	return 0;
}
