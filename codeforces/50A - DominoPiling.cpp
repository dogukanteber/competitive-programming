#include <iostream>

using namespace std;

int main() {
	
	int m,n;
	
	cin >> m >> n;
	
	int areaDomino = 2 * 1;
	int areaRectangle = m * n;
	
	cout << areaRectangle / areaDomino << endl;
	
	return 0;
}
