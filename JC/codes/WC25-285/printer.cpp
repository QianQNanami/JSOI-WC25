#include<bits/stdc++.h>
#include<queue>
using namespace std;
int c[100];//¥Ê∑≈ ‰»Î 
int main()
{
queue<int> a;
int n,t,i,j,x=0,flag;
cin>>n>>t;
for(i=0;i<=n-1;i++)
{
cin>>c[i];
a.push(i); 
}
while(!a.empty())
{for(i=0;i<=n-1;i++)
{flag=0;
for(j=i;j<=n-1;j++)
if(c[i]<c[j]) flag=1;
if(flag==1)
{
x=a.front();
a.pop();
a.push(x); 
}
else if(flag==0) a.pop();
}
}
for(i=1;i<=n;i++)
{

cout<<a.front();
a.pop();	
}
return 0;
}

