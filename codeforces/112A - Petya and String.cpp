#include <iostream>
#include<bits/stdc++.h> 
#include <string>

using namespace std;

int main() {
	string str1,str2;
	
	getline(cin,str1);
	getline(cin,str2);
	
	transform(str1.begin(),str1.end(), str1.begin(), ::tolower);
	transform(str2.begin(),str2.end(), str2.begin(), ::tolower);
	
	cout << str1.compare(str2) << endl;
	
	return 0;
}
