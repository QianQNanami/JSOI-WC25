#include <bits/stdc++.h>
using namespace std;
struct Node{
	long long data, next;
};
struct Node a[20000000010];
int main(){
	int n, q;
	cin >> n;
	int i = 1;
	for (; i <= n; i++) {
		cin >> a[i].data;
		a[i].next = i + 1;
	}
	a[i].next = 0;
	int head = 1;
	int p;
	cin >> q;
	while(q--){
		p = head;
		int x, y, z;
		cin >> x;
		if (x == 1){
			cin >> y >> z;
			for (;a[p].data != y;p = a[p].next);
				i++;
				a[i].data = z;
				a[i].next = a[p].next;
				a[p].next = i;
		}
		else{
			cin >> y;
			if (a[head].data == y) head = a[head].next;
			else{
				for (;a[a[p].next].data != y;p = a[p].next);
				int v = a[p].next;
				a[p].next = a[v].next;
				a[v].next = 0;
			}
		}
	}
	p = head;
	for (;a[p].next != 0;p = a[p].next) cout << a[p].data << " ";
	return 0;
}
