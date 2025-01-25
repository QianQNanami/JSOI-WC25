#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	long long v[1001],cnt=0,b[1001],num=0,ci=1;
	long long n;
	cin>>n;
	for(int i=0;i<n;++i)
		cin>>v[i];
	for(int i=1;i<=n-1;++i)
		for(int j=i;j<=n;++j)
			if(v[i]>v[j])
				swap(v[i],v[j]);
	for(int i=1;i<=n-1;++i)
		for(int j=i;j<=n;++j)
			if(v[i]*2<=v[j]){
				cnt++;				
				if(cnt>=ci){
					num++;
					ci++;
					cnt=0;}
				else
					break;			
		}
	
	cout<<num;
	return 0;
}

