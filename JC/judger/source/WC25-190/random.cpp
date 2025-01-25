#include<bits/stdc++.h>
using namespace std;
int x[999999999999],y[999999999999],z[999999999999];
int main()
{
	int c,b;cin>>c;
	string a;cin>>a;
	cin>>b;
	for(int i=1;i<=b;i++){
		cin>>x[i];
		if(x[i]==1)cin>>y[i];
		else cin>>y[i]>>z[i];
	}
	for(int i=1;i<=b;i++){
		if(x[i]==1)a=a-x[i];
		else a=a+x[i];
	}
	cout<<a;
	return 0;
}
