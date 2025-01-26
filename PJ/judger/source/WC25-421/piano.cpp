#include<bits/stdc++.h>
using namespace std;
int m;
int x[1005];
int a[20005];
int z;
int main(){
	cin >> m;
	for (int i =1;i <= m;i++){
		cin >> x[i];
		for (int j =1;j <= x[i];j++){
			cin >> a[i];
		}
	}
	sort(a+1,a+m+1);
	for (int i=1;i<=m;i++){
		for (int j = 1;j <= x[i];j++){
			z++;
		}
	}

	cout << z-19;
	return 0;
}
