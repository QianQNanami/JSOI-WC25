#include<bits/stdc++.h>

using namespace std;

int a[100005], b[100005];
int he(int li, int ri){
	int ans = 0;
	for (int i = li; i <= ri; i++){
		ans += a[i];
	}
	return ans;
}

int main (){
	int m, n, sum = 0, li, ri;
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	cin >> m;
	for (int j = 1; j <= m; j++){
		cin >> li >> ri;
		sum = he(li,ri);
		b[j] = sum;
	}
	for (int i =1 ; i<= m; i++){
		cout << b[i] << endl;
	}
	return 0;
}

