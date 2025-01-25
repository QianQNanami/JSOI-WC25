#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	int la=a.length(),lb=b.length();
	int l1[la];
	int l2[lb];
	int ans1,ans2;
	int t;
	for(int i=0;i<la;i++)
	{   
		if(a[i]=='A')
			l1[i]=1;
		else
		if(a[i]=='B')
			l1[i]=2;
		if(a[i]=='C')
			l1[i]=3;
		if(a[i]=='D')
			l1[i]=4;
		if(a[i]=='E')
			l1[i]=5;
		if(a[i]=='F')
			l1[i]=6;
		if(a[i]=='G')
			l1[i]=7;
		if(a[i]=='H')
			l1[i]=8;
		if(a[i]=='I')
			l1[i]=9;
		if(a[i]=='J')
			l1[i]=10;
		if(a[i]=='K')
			l1[i]=11;
		if(a[i]=='L')
			l1[i]=12;
		if(a[i]=='M')
			l1[i]=13;
		if(a[i]=='N')
			l1[i]=14;
		if(a[i]=='O')
			l1[i]=15;
		if(a[i]=='P')
			l1[i]=16;
		if(a[i]=='Q')
			l1[i]=17;
		if(a[i]=='R')
			l1[i]=18;
		if(a[i]=='S')
			l1[i]=19;
		if(a[i]=='T')
			l1[i]=20;
		if(a[i]=='U')
			l1[i]=21;
		if(a[i]=='V')
			l1[i]=22;
		if(a[i]=='W')
			l1[i]=23;
		if(a[i]=='X')
			l1[i]=24;
		if(a[i]=='Y')
			l1[i]=25;
		if(a[i]=='Z')
			l1[i]=26;
	}
	sort(l1[la],la);
	for(int i=0;i<la;i++)
	{   
		if(b[i]=='A')
			l2[i]=1;
		if(b[i]=='B')
			l2[i]=2;
		if(b[i]=='C')
			l2[i]=3;
		if(b[i]=='D')
			l2[i]=4;
		if(b[i]=='E')
			l2[i]=5;
		if(b[i]=='F')
			l2[i]=6;
		if(b[i]=='G')
			l2[i]=7;
		if(b[i]=='H')
			l2[i]=8;
		if(b[i]=='I')
			l2[i]=9;
		if(b[i]=='J')
			l2[i]=10;
		if(b[i]=='K')
			l2[i]=11;
		if(b[i]=='L')
			l2[i]=12;
		if(b[i]=='M')
			l2[i]=13;
		if(b[i]=='N')
			l2[i]=14;
		if(b[i]=='O')
			l2[i]=15;
		if(b[i]=='P')
			l2[i]=16;
		if(b[i]=='Q')
			l2[i]=17;
		if(b[i]=='R')
			l2[i]=18;
		if(b[i]=='S')
			l2[i]=19;
		if(b[i]=='T')
			l2[i]=20;
		if(b[i]=='U')
			l2[i]=21;
		if(b[i]=='V')
			l2[i]=22;
		if(b[i]=='W')
			l2[i]=23;
		if(b[i]=='X')
			l2[i]=24;
		if(b[i]=='Y')
			l2[i]=25;
		if(b[i]=='Z')
			l2[i]=26;
	}
	ans1=l1[0];
	ans2=l2[0];
	for(int i=0;i<la-1;i++)
	{
		ans1=ans1*l1[i+1];
	}
	for(int i=0;i<la-1;i++)
	{
		ans2=ans2*l2[i+1];
	}
	if(ans1==ans2)
		cout<<"GO";
	else
		cout<<"STAY";
	return 0; 
}
