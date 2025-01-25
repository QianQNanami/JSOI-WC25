#include<bits/stdc++.h>
using namespace std;
string a,b;
long long c=1,d=1;
int main(){
	getline(cin,a);
	getline(cin,b);
	for(int i=0;i<a.size();i++)
		c=c*(int(a[i])-65);
	for(int i=0;i<b.size();i++)
		d=d*(int(b[i])-65);
	if(c%47==d%47)
		cout<<"GO"<<endl;
	else
		cout<<"STAY"<<endl;
	return 0;
}
