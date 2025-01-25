#include<bits/stdc++.h>
using namespace std;
int main(){
	int aa[1010],a,d=0;
	cin>>a;
	for(int i=1;i<=a;i++){
		cin>>aa[i];
	}
	for(int ii=1;ii<=a;ii++){
		for(int iii=1;iii<=a-ii;iii++){
			for(int i2=1;i2<=a-ii;i2++){
		if (aa[iii]>aa[iii+1]) swap(aa[iii],aa[iii+1])
		;}
	}
	}
	for(int i1=1;i1<=a;i1++){
		d=d+(a-i1)*aa[i1];
	}cout<<d;
	return 0;
}
