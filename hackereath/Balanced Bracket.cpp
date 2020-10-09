#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n;
	cin >> n;
	
	while ( n-- ) {
		string str;
		cin >> str;
		
		stack <char> s;
		s.push('#');
		
		for( int i=0; i<str.length(); i++ ) {
			if ( str[i] == ')' && s.top() == '(' ) 
				s.pop();
			else if ( str[i] == ']' && s.top() == '[' )
				s.pop();
			else if ( str[i] == '}' && s.top() == '{' )
				s.pop();
			else 
				s.push(str[i]);
		}
		
		if ( s.top() == '#' ) 
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	
	
	return 0;
}
