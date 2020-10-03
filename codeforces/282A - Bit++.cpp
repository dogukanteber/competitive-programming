#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1 = "X++";
	string s2 = "X--";
	string s3 = "++X";
	string s4 = "--X";
	
	int n,r= 0;
	
	cin >> n;
	
	
	while ( n -- ) {
		string s;
		cin >> s;
		if ( s1.compare(s) == 0 ) {
			r++;
		}
		if ( s2.compare(s) == 0 ) {
			r--;
		}
		if ( s3.compare(s) == 0 ) {
			r++;
		}
		if ( s4.compare(s) == 0 ) {
			r--;
		}
	}
	
	cout << r << endl;
	
	return 0;
}
