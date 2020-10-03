#include <iostream>
#include <string>

using namespace std;

int main() {
	string vowels = "aoyeuiAOYEUI";
	
	string str;
	cin >> str;
	
	string res = "";
	
	for( int i=0; i<str.length(); i++ ) {
		if ( vowels.find(str[i]) == string::npos ) {
			if ( isupper(str[i]) ) {
			res += '.';
			res += tolower(str[i]);
		}
		else if ( islower(str[i]) ) {
			res += '.';
			res += str[i];
		}
		}
	}
	cout << res << endl;
	
	
	return 0;
}
