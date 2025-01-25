#include <bits/stdc++.h>
using namespace std;
int a[110];
queue <int> q;
int main(){
	
	int n;
	cin >> n;
	int s = 0, sum = 0;
	q.push(0);
	for (int i = 1; i <= n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	for (int i = 1; i <= n; i++){
		s += i - 1 + q.front();
		sum += s;
		q.push(s);
	}
	
	cout << sum << endl;
	
	return 0;
}
