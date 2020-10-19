#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	
	int cost1 = n*a;
	int cost2 = (n/m) * b;
	
	int r = n % m;
	
	int res = min(cost1,cost2);
	res = min(res+r*a,res+b);
	
	cout << res;
	
	return 0;
}
