#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main()
{
    int n,m,x;
	 cin>>n>>m;
	 queue<int>a;
	 for(int i=1;i<=n;i++)
	 {
	 	cin>>x;
	 	a.push(x);
	 	b[i]=x;
	 }
	 b[m]=-1;
	 while(z)
	 {
	 	x=0;
	 for(int i=1;i<=n;i++)
	 { 
	     if(a.front()>x)
	        x=a.front();
	    a.push(a.front());
	    a.pop();
	 }
	 while(a.front()==x)
	 {
	 	a.push(a.front());
		 a.pop();
	 }
	 for(int i=0;i<n;i++)
      {
      	if(b[i]==a.front())
      	 b[i]=0;
	 }
	 a.pop();
	 n--;
	 y++;
	 for(int i=0;i<n;i++)
	 {
	 	
	 }
	  
	  return 0;  
}
