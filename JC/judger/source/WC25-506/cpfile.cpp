#include<bits/stdc++.h>
using namespace std;
int a[110];
int main(){
	int n, i, y = 0;
	cin >> n;
	int x = n - 1;
	for( i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	for(int i = 0; i < n; i++){
		y = y +  x * a[i];
		x--;
	}cout << y << endl; 
	return 0;
}
