#include<bits/stdc++.h>
using namespace std;
struct stu{
	int l;
	int r;
};
int main(){
	int n,m;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i ++){
		cin >> a[i];
	}
	cin >> m;
	stu se[m];
	for(int i = 0; i < m; i ++){
		int c = 0;
		cin >> se[i].l >> se[i].r;
		for(int j = se[i].l-1; j < se[i].r; j ++){
			c += a[j];
		}
		cout << c << endl;
	}
	return 0;
} 
