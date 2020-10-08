#include <bits/stdc++.h>


using namespace std;

int main() {
	string str;
	cin >> str;
	
	stack <char> s;
	
	for ( int i=str.length()-1; i>=0; i-- ) {
		if ( !s.empty() ) {
			if ( str[i] == s.top() ) {
				s.pop();
			}
			else {
				s.push(str[i]);
			}
		}
		else {
			s.push(str[i]);
		}
	}
	
	if ( s.empty() ) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	
	return 0;
}
