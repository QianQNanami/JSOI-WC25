#include<bits/stdc++.h>
using namespace std;
int a[70000],b[70000],c[70000],d[70000],e[70000],f[70000];
int main(){
	int n;
	for (int i=0;i<70000;i++){
		cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i]>>f[i];
		if (a[i]==b[i]&&b[i]==c[i]&&c[i]==d[i]&&d[i]==e[i]&&e[i]==f[i]){
			n = i;
			break;
		}	
	}
	int min[n];
	for(int j=0;j<n;j++){
		min[j]=(a[j]*1+b[j]*4+c[j]*9+d[j]*16+e[j]*25+f[j]*36)/36;
		cout<<min[j]<<endl;
	}
	return 0;
}
