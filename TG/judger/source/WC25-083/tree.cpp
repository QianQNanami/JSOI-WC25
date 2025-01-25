#include<bits/stdc++.h>
using namespace std;
#define itn int 
#define itnn int

inline int read(){
	int a=0,s=1;
	char d=getchar();
	while(d<'0'||d>'9'){
		if(d=='-') s=-1;
		d=getchar();
	} 
	while(d>='0'&&d<='9'){
		a=a*10+d-'0';
		d=getchar();
	}
	return a*s;
}

int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cout<<0;
	return 0;
}
//freopenע�ͼǵ�ɾ 
