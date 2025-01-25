#include<bits/stdc++.h>
using namespace std;
string a,b;
int sum,h;
int  c[27]={67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,81,83,84,85,86,87,88,89,90,91,92};
int main()
{
	getline(cin,a);
	getline(cin,b);
	for(int i=1;i<=a.size();i++){
		for(int j=1;j<=26;j++){
			if(a[i]==c[i]) sum+=j;
		}
	}
	sum=sum%47;
	for(int i=1;i<=b.size();i++){
		for(int j=1;j<=26;j++){
			if(b[i]==c[i]) h+=j;
		}
	}
	h=h%47;
	if(sum==h) cout<<"GO";
	else cout<<"STAY";
	return 0;
}
