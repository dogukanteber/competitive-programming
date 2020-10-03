#include <iostream>
#include <string>

using namespace std;

int main() {
	string result = "";
	string phrase = "WUB";
	string str;
	
	getline(cin,str);
	
	size_t pos = str.find(phrase);
	
	while ( pos != string::npos ) {
		if ( pos == 0 ) {
			str.erase(pos,phrase.length());
		}
		else {
			result += str.substr(0,pos) + " ";
			str.erase(0,pos);
		}
		pos = str.find(phrase);
	}
	
	if ( str.length() != 0 ) {
		result += str;
	}

	cout << result << endl;
		
	return 0;
}
