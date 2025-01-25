#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
int n,s=0;
cin>>n;
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int j=0;j<n-1;j++){
	for(int i=1;i<n-j;i++){
		if(a[i]<a[i-1]) {
			swap(a[i],a[i-1]);
}
}
}
for(int i=1;i<n;i++){
	s+=a[i-1]*(n-i);
}
cout<<s;
return 0;
}
