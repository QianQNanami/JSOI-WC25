#include<bits/stdc++.h>
using namespace std;
int a[66],b[66],x,y;
long long sum1=1,sum2=1;
char c[66],d[66];
int main(){
	int i=0;
	while(cin>>c[i]){
		i++;
		a[i]=c[i];
	}
	i=0;
	while(cin>>d[i]){
		i++;
		b[i]=d[i];
	}
	for(int i=0;i<66;i++){
		sum1*=a[i];
		sum2*=b[i];
	}
	x=sum1%47;
	y=sum2%47;
	if(x==y) cout<<"GO"<<endl;
	else cout<<"STAY"<<endl;
	return 0;
}
