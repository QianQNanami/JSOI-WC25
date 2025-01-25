#include <bits/stdc++.h>
using namespace std;
queue <int> q, s;
int main(){
	
	int a, b, c, j = 0;
	int maxn = 0, sum = 0;
	cin >> a >> b;
	b++;
	for (int i = 1; i <= a; i++){
		cin >> c;
		q.push(c);
		s.push(i);
		if (c >= maxn){
			maxn = c;
		}
	}
	
	while(1){
		for (int i = 1; i <= q.size(); i++){
			if (q.back() == maxn){
				q.pop();
				s.pop();
				sum++;
			}else{
				int d = q.back();
				q.pop();
				q.push(d);
				d = s.back();
				s.pop();
				s.push(d);
			}
		}
		maxn = 0;
		for (int i = 1; i <= q.size(); i++){
			if (q.back() >= maxn){
				maxn = q.back();
			}
			q.pop();
			q.push(c);
		}
		if (s.back() == b){
			break;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
