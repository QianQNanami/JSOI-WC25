#include<bits/stdc++.h>
using namespace std;
string x,y;
int sum,q;
char c[30]={67,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92};
int main(){
	getline(cin,x);getline(cin,y);
	char(c[30]);
	for(int i=1;i<=x.size();i++){
		for(int j=1;j<=26;j++){
			if(x[i]==c[i]) sum+=j;
		}
	}
	sum=sum%47;
	for(int i=1;i<=y.size();i++){
		for(int j=1;j<=26;j++){
			if(y[i]==c[i]) sum+=j;
		}
	}
	q=q%47;
	if(sum==q) cout<<"GO";
	else cout<<"STAY";
	return 0;
}
