#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t[105],s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i];
	}
	sort(t+1,t+1+n);
	for(int i=1;i<=n;i++){
		s=t[i]+t[i--];
	}
	
	return 0;
}
///*1 2 3 4 5
//C A B E D
//0 1 3 6 10
//8976
