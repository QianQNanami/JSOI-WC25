#include <bits/stdc++.h>
using namespace std;
char a[70],b[70],c,d,e,f;
int main(){
	cin>>a;
	cin>>b;
	for(int i=1;i<=70;i++){
		c=int(a[i]-65+1);
		d*=c;
	}
	for(int i=1;i<=70;i++){
		e=int(b[i]-65+1);
		f*=c;
	}
	if(d%47==f%47){
		cout<<"GO"<<endl;
	}
	else{
		cout<<"STAY"<<endl;
	}
	return 0;
}
