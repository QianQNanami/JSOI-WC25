#include<bits/stdc++.h>
using namespace std;
int t[1001],N,g;
int main(){
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>t[i];
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(t[j]<t[i]){
				g+=t[j];
			}
		}
	}
	cout<<g;
	return 0;
}
