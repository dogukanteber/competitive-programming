#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	string str;
	cin >> str;
	
	int one = 0,zero = 0;
	
	for ( int i=0; i<n; i++ ) {
		if ( str[i] == '1' ) 
			one++;
		else 
			zero++;
	}
	
	cout << str.length() - ( 2 * min(one,zero) ) << endl;
	
	
	return 0;
}
