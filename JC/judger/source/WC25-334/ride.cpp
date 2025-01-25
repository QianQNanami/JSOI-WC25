#include<bits/stdc++.h>
using namespace std;
int flag=0;
string u,b;
int check(string a){
	int ans;
	for(int i=0;i<=a.size();i++){
		if(a[i]=='A')a[i]=1;	
		if(a[i]=='B')a[i]=2;
		if(a[i]=='C')a[i]=3;
		if(a[i]=='D')a[i]=4;
		if(a[i]=='E')a[i]=5;
		if(a[i]=='F')a[i]=6;
		if(a[i]=='G')a[i]=7;
		if(a[i]=='H')a[i]=8;
		if(a[i]=='I')a[i]=9;
		if(a[i]=='J')a[i]=10;
		if(a[i]=='K')a[i]=11;
		if(a[i]=='L')a[i]=12;
		if(a[i]=='M')a[i]=13;	
		if(a[i]=='N')a[i]=14;
		if(a[i]=='O')a[i]=15;
		if(a[i]=='P')a[i]=16;
		if(a[i]=='Q')a[i]=17;
		if(a[i]=='R')a[i]=18;
		if(a[i]=='S')a[i]=19;
		if(a[i]=='T')a[i]=20;
		if(a[i]=='U')a[i]=21;
		if(a[i]=='V')a[i]=22;
		if(a[i]=='W')a[i]=23;
		if(a[i]=='X')a[i]=24;
		if(a[i]=='Y')a[i]=25;
		if(a[i]=='Z')a[i]=26;
		ans+=a[i];
	}
}
int main(){
	cin>>u>>b;
	if(u==b)
		flag=1;
	else{
		if(check(u)%47==check(b)%47)
			flag=1;
	}
	if(flag)
		cout<<"GO"<<endl;
	else
		cout<<"	STAY"<<endl;
	return 0;
}
