#include<bits/stdc++.h>
using namespace std;
int a[50001];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","W",stdout);
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	int cnt1=0;
	int cnt2=0;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(a[1]*2<=a[i]){
			cnt1++;
		}
		if(a[i]*2<=a[n]){
			cnt2++;
		}
	}
	cout<<min(cnt1,cnt2);
	return 0;
}
