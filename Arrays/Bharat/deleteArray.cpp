#include<bits/stdc++.h>
using namespace std;

void print(int ar[], int n) {
	for(int i=0; i<n; i++) cout << ar[i] << " ";
	cout << endl;
}

void deleteFromBegin(int ar[], int n) {
	for(int i=0; i<n; i++) ar[i] = ar[i+1];
	
	print(ar, n-1);
}

void deleteFromEnd(int ar[], int n) {
	print(ar, n-1);	
}

void deleteFromK(int ar[], int n, int k) {
	for(int i=k; i<n; i++) ar[i] = ar[i+1];
	
	print(ar, n-1);
}

int main() {
	int n;
	cin >> n;
	int ar[n+1];
	for(int i=0; i<n; i++) cin >> ar[i];
	
	deleteFromK(ar, n, 1);
}
