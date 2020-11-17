#include<bits/stdc++.h>
using namespace std;

void print(int ar[], int n) {
	for(int i=0; i<n; i++) cout << ar[i] << " ";
	cout << endl;
}

void insertAtBegin(int ar[], int n, int data) {
	for(int i=n-1; i>=0; i--) ar[i+1] = ar[i];
	ar[0] = data;
	print(ar, n+1);
}

void insertAtEnd(int ar[], int n, int data) {
	ar[n] = data;
	print(ar, n+1);
}

void insertAtK(int ar[], int n, int k, int data) {
	for(int i=n-1; i>=k; i--) ar[i+1] = ar[i];
	ar[k] = data;
	print(ar, n+1);
}

int main() {
	int n;
	cin >> n;
	int ar[n+1];
	for(int i=0; i<n; i++) cin >> ar[i];
	
	int data;
	cin >> data;
	insertAtK(ar, n, 1, data);
}
