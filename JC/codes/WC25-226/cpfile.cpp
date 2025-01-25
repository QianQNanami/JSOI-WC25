#include<bits/stdc++.h>
using namespace std;
int bi=-100000;
int ans=0;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		ans+=x;
		if(x>bi){
			bi=x;
		}
	}
	cout<<(ans-bi)*2<<endl;
	return 0;
} 
