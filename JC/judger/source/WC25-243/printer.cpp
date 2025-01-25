#include<bits/stdc++.h>
using namespace std;
int q[1001];
int rear,tail;
int a[1001];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		q[++rear]=a[i];
	}
	
	return 0;
}
