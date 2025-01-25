#include<bits/stdc++.h>
using namespace std;
string a,b;
int c,d,a3=1,b3=1;
int a2[100005]={},b2[100005];
int main(){
	cin>>a>>b;
	for(int i=1;i<=a.size();i++){
		c++;
		for(int j=1;j=1;j++){
			if(a[i]='A')  a2[i]=1;break;
			if(a[i]='B')  a2[i]=2;break;
			if(a[i]='C')  a2[i]=3;break;
			if(a[i]='D')  a2[i]=4;break;
			if(a[i]='E')  a2[i]=5;break;
			if(a[i]='F')  a2[i]=6;break;
			if(a[i]='G')  a2[i]=7;break;
			if(a[i]='H')  a2[i]=8;break;
			if(a[i]='I')  a2[i]=9;break;
			if(a[i]='J')  a2[i]=10;break;
			if(a[i]='K')  a2[i]=11;break;
			if(a[i]='L')  a2[i]=12;break;
			if(a[i]='M')  a2[i]=13;break;
			if(a[i]='N')  a2[i]=14;break;
			if(a[i]='O')  a2[i]=15;break;
			if(a[i]='P')  a2[i]=16;break;
			if(a[i]='Q')  a2[i]=17;break;
			if(a[i]='R')  a2[i]=18;break;
			if(a[i]='S')  a2[i]=19;break;
			if(a[i]='T')  a2[i]=20;break;
			if(a[i]='U')  a2[i]=21;break;
			if(a[i]='V')  a2[i]=22;break;
			if(a[i]='W')  a2[i]=23;break;
			if(a[i]='X')  a2[i]=24;break;
			if(a[i]='Y')  a2[i]=25;break;
			if(a[i]='Z')  a2[i]=26;break;
		}
	}		
	for(int i=1;i<=b.size();i++){
		d++;
		for(int j=1;j=1;j++){
			if(b[i]='A')  b2[i]=1;break;
			if(b[i]='B')  b2[i]=2;break;
			if(b[i]='C')  b2[i]=3;break;
			if(b[i]='D')  b2[i]=4;break;
			if(b[i]='E')  b2[i]=5;break;
			if(b[i]='F')  b2[i]=6;break;
			if(b[i]='G')  b2[i]=7;break;
			if(b[i]='H')  b2[i]=8;break;
			if(b[i]='I')  b2[i]=9;break;
			if(b[i]='J')  b2[i]=10;break;
			if(b[i]='K')  b2[i]=11;break;
			if(b[i]='L')  b2[i]=12;break;
			if(b[i]='M')  b2[i]=13;break;
			if(b[i]='N')  b2[i]=14;break;
			if(b[i]='O')  b2[i]=15;break;
			if(b[i]='P')  b2[i]=16;break;
			if(b[i]='Q')  b2[i]=17;break;
			if(b[i]='R')  b2[i]=18;break;
			if(b[i]='S')  b2[i]=19;break;
			if(b[i]='T')  b2[i]=20;break;
			if(b[i]='U')  b2[i]=21;break;
			if(b[i]='V')  b2[i]=22;break;
			if(b[i]='W')  b2[i]=23;break;
			if(b[i]='X')  b2[i]=24;break;
			if(b[i]='Y')  b2[i]=25;break;
			if(b[i]='Z')  b2[i]=26;break;
		}
	}
	for(int i=1;i<=c;i++){
		a3=a3*a2[i];
	}
	for(int i=1;i<=d;i++){
		b3=b3*b2[i];
	}
	if(a3==b3){
		cout<<"GO"<<endl;
	}else{
		cout<<"STAY"<<endl;
	}
	return 0;
}
