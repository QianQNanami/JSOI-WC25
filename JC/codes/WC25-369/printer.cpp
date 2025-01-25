#include<bits/stdc++.h>
using namespace std;
int ans=0;



int main(){
	int n,t,hc,ans=0;cin>>n>>t;
	int yxrw[10]={0},yxj2[n];
	queue<int>yxj,dz;
	for(int i=0;i<n;i++){
		cin>>hc;yxj2[i]=hc;
		yxj.push(hc);dz.push(i);
		yxrw[hc]++;
	}
	for(int i=8;i>yxj2[t];i--){
		while(yxrw[i]){
			while(yxj.front()!=i){
				yxj.push(yxj.front());
				yxj.pop();
				dz.push(dz.front());
				dz.pop();
			}
			yxj.pop();dz.pop();ans++;yxrw[i]--;
		}
	}while(dz.front()!=t){
		dz.pop();ans++;
	}ans++;
	cout<<ans<<endl;
	return 0;
}
