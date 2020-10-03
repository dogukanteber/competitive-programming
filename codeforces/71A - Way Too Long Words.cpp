#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int n;
	string str;
	
	cin >> n;
	
	while ( n ) {
	cin >> str;
	int length = str.length();
	
	if ( length <= 10 ) {
		cout << str << endl;
	}
	else {
		cout << str.at(0) << length - 2 << str.at(length-1) << endl;
	}
	n--;		
	}
	

	
	return 0;
}
