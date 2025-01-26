#include<bits/stdc++.h>
using namespace std;
int a[70010],b[70010],c[70010],d[70010],e[70010],f[70010];
int main(){
	int i=1;
	cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i]>>f[i];
	int ans=a[i]*1+b[i]*4+c[i]*9+d[i]*16+e[i]*25+f[i]*36;
	if(ans%36!=0){
		ans=ans/36+1;
	}else{
		ans=ans/36;
	}
	cout<<ans<<endl;
	while(1){
		i++;
		cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i]>>f[i];
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
			return 0;
		}
		int ans=a[i]*1+b[i]*4+c[i]*9+d[i]*16+e[i]*25+f[i]*36;
		if(ans%36!=0){
			ans=ans/36+1;
		}else{
			ans=ans/36;
		}
		cout<<ans<<endl;
	}
	return 0;
} 
