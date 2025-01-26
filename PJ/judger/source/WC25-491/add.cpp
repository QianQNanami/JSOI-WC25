#include <bits/stdc++.h>
using namespace std;
int m,n;
int a[100010],s[100010],l[100010],r[100010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l[i]>>r[i];
	}
	for(int i=1;i<=m;i++){
		cout<<s[r[i]]-s[l[i]]+a[l[i]]<<endl;
	}
	return 0;
}

