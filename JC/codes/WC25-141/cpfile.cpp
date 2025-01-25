#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a[105],sum=0;
	cin >>n;
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n);
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			sum+=a[j];
		}
	}
	cout << sum;
	return 0;
}

