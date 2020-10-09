#include<bits/stdc++.h>

using namespace std;

int main()

{
	int n,k;
	
	cin>>n>>k;
	
	long int ar[n], suml=0, sums=0, max=0;
	
	for(long int i=0; i<n; i++)	{
		cin>>ar[i];
		
		if(i >= n-k)
			suml+=ar[i];
	
	}
	
	for(long int i=0; i<k; i++) {
		sums+=ar[i];
		suml-=ar[n-k+i];
		
		if(max < sums + suml)
		max = sums+suml;
	}
	
	cout<<max;
	
	return 0;

}
