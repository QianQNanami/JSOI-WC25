#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
int n,t,s=0,head=1,flag=1;
int p=t+1,back=n;
cin>>n>>t;
for(int i=0;i<=n;i++) {
	cin>>a[i];
}
for(int j=0;j<n;j++) {
	for(int i=2;i<=n;i++) {
		if(a[i]>a[head]) {
			a[++back]=a[head--];
			if(p==head) {
				p=back;
}
}
}
if(flag==1) {
	break;
}
}
if(p==head) {
	cout<<"1";
	return 0;
}
while(1) {
	head++;
	s+=1;
	if(p==head) {
	    break;
}
}
cout<<s+1;
return 0;
}
