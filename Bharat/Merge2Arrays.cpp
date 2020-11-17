// Merge 2 sorted arrays without using Extra space.

#include<bits/stdc++.h>
using namespace std;

void method1(int ar1[], int ar2[], int n, int m) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			if(ar1[i] > ar2[j]) swap(ar1[i], ar2[j]);
		}
		sort(ar2, ar2+m);
	}
	
	
}

void gapMethod(int ar1[], int ar2[], int n, int m) {
	int gap = ceil(n + m) / 2;
	
	while(gap > 0) {
		for(int i=0; i+gap<n; i++) {
			if(ar1[i] > ar1[i+gap]) swap(ar1[i], ar1[i+gap]);
		}
		int j=0;
		for(int i=gap>n ? gap-n : 0; i<n && j < m; i++, j++) if(ar1[i] > ar2[j]) swap(ar1[i], ar2[j]);
		
		for(int i=0; i+gap<m; i++) if(ar2[i] > ar2[i+gap]) swap(ar1[i], ar2[i+gap]);
		
		gap = gap / 2;
	}
	
	for(int i=0; i<n; i++) cout << ar1[i] << " ";
	cout << '\n';
	for(int i=0; i<m; i++) cout << ar2[i] << " ";
	cout << '\n';
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int ar1[n], ar2[m];
		
		for(int i=0; i<n; i++) cin >> ar1[i];
		for(int j=0; j<m; j++) cin >> ar2[j];
	
		method1(ar1, ar2, n, m);
		
		for(int i=0; i<n; i++) cout << ar1[i] << " ";
		cout << '\n';
		for(int i=0; i<m; i++) cout << ar2[i] << " ";
		cout << '\n';
	}
}
