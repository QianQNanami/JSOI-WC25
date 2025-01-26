#include<bits/stdc++.h>
using namespace std;
int n,a[55],l,r;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		for(int j=1;j<=x;j++){
			int y;
			cin>>y;
			a[y]++;
		}
	}
	for(int i=1;i<=52;i++)
		if(a[i])l++;
	if(l<=18)cout<<1;
	else cout<<-1;
	return 0;
}
