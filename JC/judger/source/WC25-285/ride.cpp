#include<bits/stdc++.h>
using namespace std;
int a(char c)
{
	if(c=='A') return 1;
	if(c=='B') return 2;
	if(c=='C') return 3;
	if(c=='D') return 4;
	if(c=='E') return 5;
	if(c=='F') return 6;
	if(c=='G') return 7;
	if(c=='H') return 8;
	if(c=='I') return 9;
	if(c=='J') return 10;
	if(c=='K') return 11;
	if(c=='L') return 12;
	if(c=='M') return 13;
	if(c=='N') return 14;
	if(c=='O') return 15;
	if(c=='P') return 16;
	if(c=='Q') return 17;
	if(c=='R') return 18;
	if(c=='S') return 19;
	if(c=='T') return 20;
	if(c=='U') return 21;
	if(c=='V') return 22;
	if(c=='W') return 23;
	if(c=='X') return 24;
	if(c=='Y') return 25;
	if(c=='Z') return 26;
}
int main()
{
string s,n;
int l=1,f=1;
cin>>s>>n;
for(int i=0;i<s.size();i++)
{
	 l=l*a(s[i]);
}
for(int i=0;i<n.size();i++)
{
	 f=f*a(n[i]);
}
if(f%47==l%47) cout<<"GO";
else cout<<"STAY";
return 0;
}

