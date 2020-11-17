#include<bits/stdc++.h>
using namespace std;
//int main() {
//	int t;
//	cin >> t; 
//	while(t--) {
//		int n;
//		cin >> n;
//		 int ar[n];
//		 for(int i=0; i<n; i++) cin >> ar[i];
//		 
//		 int min = ar[0], max = ar[0];
//		 for(int i=1; i<n; i++) {
//		 	if(ar[i] < min) min = ar[i];
//		 	
//		 	if(ar[i] > max) max = ar[i];
//		 }
//		 
//		 cout << max << " " << min << endl;
//	}
//}

struct Pair { 
	int min, max;
};

struct Pair getmin(int arr[], int n){
	
	struct Pair minmax;     
    int i;
    
	if(n==1) {
		minmax.min = arr[0];
		minmax.max = arr[0];
		return minmax;
	}
	
	if (arr[0] > arr[1]) {
        minmax.max = arr[0];
        minmax.min = arr[1];
    } 
    else {
        minmax.max = arr[1];
        minmax.min = arr[0];
    } 
     
    for(i = 2; i < n; i++) {
        if (arr[i] > minmax.max)     
            minmax.max = arr[i];
             
        else if (arr[i] < minmax.min)     
            minmax.min = arr[i];
    }
    return minmax;
}

int main() {
	int t;
	cin >> t; 
	while(t--){
		int n;
		cin >> n;
		 int ar[n];
		 for(int i=0; i<n; i++) cin >> ar[i];
		 
		 struct Pair minmax = getmin(ar, n);
		 
		 cout << minmax.max << " " << minmax.min << endl;
	}
}
