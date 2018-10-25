#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

// for max value query

int main(){
	int n , q;
	cin >> n >> q;
	int * arr = new int [n];
	vector <int> vec;
	for (int i=0;i<n;++i){
		cin >> arr[i];
	}
	int a = sqrt(n);
	if (a*a != n) a += 1;
	int * max = new int [a];
	for (int i=0;i<a;++i){
		int max1 = INT_MIN;
		for (int j = 0;j < sqrt(n);++j){
			if (int(i*sqrt(n))+j < n){
				if (arr[int(i*sqrt(n)) + j] > max1) max1 = arr[int(i*sqrt(n)) + j];
			}
		}
		max[i] = max1;
		//vec.push_back(max);
	}
//	for (int i=0;i<a;++i) cout << max[i] << endl;
	while (q--){
		int l , r;
		cin >> l >> r;
		
	}
	return 0;
}

