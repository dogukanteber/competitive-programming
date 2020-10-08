#include <bits/stdc++.h>

using namespace std;

const long long INF = 1ll << 32;

int main() {
	int l; 
	cin >> l;
	
	stack <long long> s;
	s.push(1);
	
	long long ans = 0;
	
	while ( l-- ) {
		string command;
		cin >> command;
		
		if ( command == "for" ) {
			int x;
			cin >> x;
			s.push(min(INF, s.top() * x));
		}
		else if ( command == "end" ) {
			s.pop();
		}
		else {
			ans += s.top();
		}
	}
	
	if (ans >= INF)
		cout << "OVERFLOW!!!" << endl;
	else
		cout << ans << endl;
	
	
	
	return 0;
}
