// Cyclically rotate an array by one.

#include<bits/stdc++.h>
using namespace std;

void rotateByOne(int ar[], int n) {
	int end = ar[n-1];
	for(int i = n-1; i>0; i--) ar[i] = ar[i-1];
	
	ar[0] = end;
	
	for(int i=0; i<n; i++) cout << ar[i] << " ";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int ar[n];
		for(int i=0; i<n; i++) cin >> ar[i];
		
		rotateByOne(ar, n);
	}
}
