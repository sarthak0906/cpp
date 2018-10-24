#include<bits/stdc++.h>

typedef long long int ll;

using namespace std;

ll max_subarr(int arr[],int n){
	ll local_max , global_max;
	global_max = INT_MIN;
	for (int i=0;i<n;++i){
		local_max += arr[i];
		if (local_max > global_max) global_max = local_max;
		
		if (local_max < 0) local_max = 0;
	}
	return global_max;
}

int main(){
	ll n , x;
	ll * arr = new ll [n];
	
	return 0;
}

