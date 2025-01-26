#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[100005],s[100005];
struct node{
	int start,end;
}b[100005];
signed main(){
	s[0] = 0;
	cin >> n;
	for(int i=1;i <= n;i++){
		cin >> a[i];
		s[i] = s[i - 1] + a[i];
	}
	cin >> m;
	for(int i =1;i<= m;i++){
		cin >>b[i].start >> b[i].end;
	}
	for(int i =1;i<= m;i++){
		cout << s[b[i].end] - s[b[i].start - 1] << '\n';
	}
}
