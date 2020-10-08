// This question is written for Roco Language but I wanted to implement in C++ to practice Stack Structure.

#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	cin >> str;
	
	stack <int> s;
	
	for ( int i=0; i<str.length(); i++ ) {
		if ( isalnum(str[i]) )
			s.push(str[i]-'0');
		else {
			int x = s.top();
			s.pop();
			int y = s.top();
			s.pop();
			int ans=0;
			if ( str[i] == '*' ) {
				ans = x*y;
				s.push(ans);
			}
			else if ( str[i] == '+' ) {
				ans = x+y;
				s.push(ans);
			}
		}
	}
	
	cout << s.top();
	
	return 0;
}
