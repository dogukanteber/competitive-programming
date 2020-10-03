#include <iostream>
#include <string>

using namespace std;

int main() {
	string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
	
	char c;
	cin >> c;
	
	string message;
	cin >> message;
	
	for( int i=0; i<message.length(); i++ ) {
		int index = keyboard.find(message[i]);
		if ( c == 'L' ) {
			message[i] = keyboard[index+1];
		}	
		else {
			message[i] = keyboard[index-1];				
		}
	}
	
	cout << message << endl;
	
	return 0;
}
