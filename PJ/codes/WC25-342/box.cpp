#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>b;
	int a[6];
	while(1){
		int ans=0;
		for(int i=0;i<6;i++){
			cin >>a[i];
			if(a[i]!=0){
				ans+=a[i]*pow(i+1,2);
			}
		}
		if(ans==0){
			break;
		}
		int h=1;
		while(1){
			if(36*h>=ans){
				b.push_back(h);
				break;
			}else{
				h++;
			}
		}
	}
	for(int i=0;i<b.size();i++){
		cout<<b[i]<<endl;
	}
	return 0;
}
