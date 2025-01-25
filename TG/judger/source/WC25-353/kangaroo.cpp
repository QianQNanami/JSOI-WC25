#include<bits/stdc++.h>
using namespace std;
int n,a[50001],ans=0;
bool cmp(long long q,long long w){
	return q>w;
}
deque<int> b;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<=n;i++){
		b.push_back(a[i]);
		if(b.front()/2>=b.back()){
			b.pop_front();
			b.pop_back();
			ans++;
		}
	}
	cout<<ans;
}
/*
8
2 5 7 6 9 8 4 2
*/
