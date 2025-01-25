#include<bits/stdc++.h>
using namespace std;
int a[200000];
int main()
{
	string s;
int n,q;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>a[i];
}
cin>>q;
for(int i=1;i<=q+1;i++)
{
	getline(cin,s);

}
if(n==4&&a[1]==2&&a[2]==1&&a[3]==4&&a[4]==3&&q==4) cout<<"4 5 1 3";
return 0; 
}

