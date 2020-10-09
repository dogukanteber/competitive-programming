#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while ( t-- ) {
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
			cout << "KHALI" << endl;
		}
		else {
			while ( !s.empty() ) {
				cout << s.top();
				s.pop();
			}
			cout << endl;
		}
	}
	
	return 0;
}
