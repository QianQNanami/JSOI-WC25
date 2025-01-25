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
int x[50001],s=0,a;
void wobuxiangkaoshi(){
	int d=a/2,f=a;
	while(d>0&&f>0){
		if(x[d]*2<=x[f]){
			d--;f--;s++;
		}else d--;
	}
	return;
}
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	a=read();
	for(int i=1;i<=a;i++){
		x[i]=read(); 
	}
	sort(x+1,x+a+1);
	wobuxiangkaoshi();
	cout<<s;
	return 0;
}
//freopenע�ͼǵ�ɾ 
