#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[70005],b[70005],c[70005],d[70005],e[70005],f[70005];
	int xb=0;
	while(1){
		xb++;
		cin>>a[xb]>>b[xb]>>c[xb]>>d[xb]>>e[xb]>>f[xb];
		if(a[xb]==0 && b[xb]==0 && c[xb]==0 && d[xb]==0 && e[xb]==0 && f[xb]==0){
			break;
		}
		int sum=(a[xb]+b[xb]*4+c[xb]*9+d[xb]*16+e[xb]*25+f[xb]*36)/36+1;
		cout<<sum<<"\n";	
	}
	return 0;
}
