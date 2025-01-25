#include<bits/stdc++.h>
using namespace std;
int main(){
	string h,d;
	int i,j,a=1,b=1;
	cin>>h>>d;
	for(i=0;i<d.size();i++)
		a*=int(d[i]-64);
	for(j=0;j<h.size();j++)
		b*=int(h[j]-64);
    if((a%47)==(b%47))cout<<"GO"<<endl;
    else cout<<"STAY"<<endl;
	return 0;
} 
