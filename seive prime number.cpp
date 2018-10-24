#include<bits/stdc++.h>

using namespace std;



//eratosthenes seive to find prime numbers
void seive(int n){
	bool prime[n+1];
	//this is a function to put same value in splice of an array
	memset(prime,true,sizeof(prime));
	for (int i=2;i*i <= n;++i){
		if (prime[i] == true){
			for (int j=i*2;j<=n;j += i){
				prime[j] = false;
			}
		}
	}
	int count = 0;
	for (int p=2; p<=n; p++) {
		
		if (prime[p]) {
//			cout << p << ",";
			count ++;
		}
	}
	cout << count ;
}

int main(){
	int n;
	cin >> n;
	if (n<3) cout << "NO";
	else seive(n);
	return 0;
}

