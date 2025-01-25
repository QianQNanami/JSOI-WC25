#include <bits/stdc++.h>
using namespace std;
const int maxn=100+10;
string group,star;
int a[maxn];
int b[maxn];
int n1,n2,i;
int main(){
	cin>>star>>group;
	for(i=0;i<group.size();i++){
		b[i]=int(char(group[i]-64));
	}
	for(i=0;i<star.size();i++){
		a[i]=int(char(star[i]-64));
	}
	n1=a[0]*a[1];
	n2=b[0]*b[1];
	for(i=2;i<star.size();i++){
		n1=n1*a[i];
	}
	for(i=2;i<group.size();i++){
		n2=n2*b[i];
	}
	if(n2%47==n1%47){
		cout<<"GO"<<endl;
	}
	else cout<<"STAY"<<endl;
	return 0;
}
