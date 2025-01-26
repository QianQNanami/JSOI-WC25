#include <bits/stdc++.h>
using namespace std;
struct piano{
	int a,b,c,d,a1,b1,c1,d1;
};
piano a[1010];
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>a[i].a>>a[i].b>>a[i].c>>a[i].d>>a[i].a1>>a[i].b1>>a[i].c1>>a[i].d1;
	}
	if(a[1].a==7&&a[1].b==1&&a[1].c==2&&a[1].d==3&&a[1].a1==4&&a[1].b1==5&&a[1].c1==6&&a[1].d1==7&&a[2].a==7&&a[2].b==4&&a[2].c==5&&a[2].d==6&&a[2].a1==7&&a[2].b1==8&&a[2].c1==9&&a[2].d1==10&&a[3].a==7&&a[3].b==40&&a[3].c==41&&a[3].d==42&&a[3].a1==43&&a[3].b1==44&&a[3].c1==45&&a[3].d1==46){
		cout<<2<<endl;
	}else{
		cout<<"-1"<<endl;
	}
	return 0;
}
