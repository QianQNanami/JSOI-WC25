#include<bits/stdc++.h>
using namespace std;
int n;
int m;
int x,y;
long long int a[100010],b[100010];
int main(){
cin>>n;
for(int i=1;i<=n;i++){
	cin>>a[i];
	b[i]=b[i-1]+a[i];
}
cin>>m;
for(int i=1;i<=m;i++){
	cin>>x>>y;
	cout<<b[y]-b[x-1];
}

return 0;
}

