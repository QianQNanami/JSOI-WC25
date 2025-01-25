#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n,t,a[1005],s=0;
cin>>n>>t;
for(int i=1;i<n;i++){
	cin>>a[i];
}
for(int i=1;i<n;i++){
	for(int j=1;j<n-1;j++){
		if(a[j]<a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
}
for(int i=1;i<t;i++){
	s++;
}
cout<<s;
return 0;	
}
