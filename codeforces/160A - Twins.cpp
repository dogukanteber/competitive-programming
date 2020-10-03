#include <bits/stdc++.h>

using namespace std;

int main() {
	int n,a,total=0,sum=0,coins = 0;
	
	cin >> n;
	
	int i;
	int arr[n];
	
	for(i=0;i<n;i++) {
		cin >> a;
		arr[i] = a;
		total += a;	
	}
	
	total = total / 2;
	sort(arr,arr+n);
	for( i=n-1; i>=0; i-- ) {
		sum += arr[i];
		coins++;
		if ( sum > total ) {
			cout << coins;
			break;
		}
	}
	
	return 0;
}
