#include<bits/stdc++.h>
using namespace std;
int a[10];
int main(){
	bool flag=1;
	for (int i=1;i<=6;i++) cin>>a[i];
	while (flag){
		int ans=0;
		ans+=a[6];
		ans+=a[5];
		a[1]-=a[5]*11;
		ans+=a[4];
		a[2]-=5*a[4];
		ans+=a[3]/4;
		if (a[3]%4) ans++;
		ans+=max(a[2]/9,0);
		if (a[1]>0&&a[2]<0) a[1]+=a[2]*4;
		ans+=max(a[1]/36,0);
		cout<<ans<<endl;
		flag=0;
		for (int i=1;i<=6;i++){
			cin>>a[i];
			if (a[i]) flag=1;
		}
	}
	
	return 0;
	
}
