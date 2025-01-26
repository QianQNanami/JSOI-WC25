#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, m;
	cin >> n;
	long long sum[n];
	for (int i=0;i<n;++i){
		cin >> sum[i];
		if (i!=0) sum[i]+=sum[i-1];
	}
	cin >> m;
	for (int i=0;i<m;++i){
		int li, ri;
		cin >> li >> ri;
		cout << (li!=1?sum[ri-1]-sum[li-2]:sum[ri-1]) << endl;
	}
	return 0;
}
