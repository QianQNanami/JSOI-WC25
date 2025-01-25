#include<bits/stdc++.h>
using namespace std;
long long n,a[50001],d,m,e;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	m=n-1;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=n;i>1;i--){
		if(a[i]>0){
			e=a[i]/2;
			while(m>0&&a[m]>e)m--;
			if(m==0)break;
			a[m]=0,m--,d++;
		}
	}
	cout<<d;
	return 0;
}
