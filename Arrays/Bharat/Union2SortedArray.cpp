#include<bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int n, int m) {
	int i=0, j=0;
	while(i<n && j<m) {
		if(a[i] < b[j]) i++;
		else if(b[j] < a[i]) j++;
		else if(a[i] == b[j]){
			cout << a[i] << " ";
			i++;
			j++;
		}
	}
	cout << '\n';
}

void unionarray(int a[], int b[], int n, int m) {
	int i = 0, j = 0;
	while(i<n && j<m) {
		if(a[i] > b[j]) {
			cout << b[j] << " ";
			j++;
		}
		else if(a[i] < b[j]) {
			cout << a[i] << " ";
			i++;
		}
		else {
			cout << a[i] << " ";
			i++;
			j++;			
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	
	for(int i=0; i<n; i++) cin >> a[i];
	for(int j=0; j<m; j++) cin >> b[j];
	
	intersection(a,b,n,m);
	
	cout << '\n';
	return 0;	
}
