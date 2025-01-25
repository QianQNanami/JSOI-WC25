#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int z=0;
	for(int i=n-k;i>k;i=(i-k)/2){
		if(i/2==0){
			z=z*2;
		}
	}
		
	cout<<z;
	return 0;
}
