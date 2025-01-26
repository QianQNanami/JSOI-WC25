#include <bits/stdc++.h>
using namespace std;
int main(){
	long long ans[9000],f=0,a[8],hef,cs=0;
	while(1){
		f=0;
		hef=0;
		cs++;
		for(int u=1;u<=6;u++){
			cin>>a[u];
			if(a[u]==0)
			f++;
		}
		if(f==6)
		break;
		for(int u=1;u<=6;u++){
			hef+=u*u*a[u];
		}
		if(hef%36==0)
		ans[cs]=hef/36;
		else
		ans[cs]=hef/36+1;
	}
	for(int u=1;u<=cs-1;u++)
	cout<<ans[u]<<endl;
	return 0;
}
