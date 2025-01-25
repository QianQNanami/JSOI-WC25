#include<bits/stdc++.h>
using namespace std;
int n,t,a[100000000+5];
int front,rear;
bool check(int x){
	for(int i=1;i<=n;i++)
		if(a[i]>x)	
			return false;		
}
return true;
int main(){
	cin>>n>>t;
	t=t+1;
	for(int i=1;i<=n;i++)	
		cin>>a[++rear];
	while(check(a[t])){
		if(check(a[front-1])&&)
		if(check(a[front+1])){
			front++;
			ans++;
		}
		else{
			a[++rear].a=a[front+1].a;
			a[rear].
		}
	}
	return 0;
}

