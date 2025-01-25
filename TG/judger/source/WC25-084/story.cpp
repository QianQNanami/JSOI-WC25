#include<bits/stdc++.h>
using namespace std;

const int maxn=50050;

int n,k,m;
int num[maxn];
long long mir=0;
int ans=0;

void func(){
	
	int point=1;
	while(point<=n){
		ans=0;
		long long jud=ans;
		while(true){
		    if(!(jud^(1<<num[point]))){
		    	ans++;
		    	point++;
			}else{
				break ;
			}
			
		}
	}
	
}

int main(){
	
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>num[i];
		mir+=(1<<num[i]);
	}
	
	for(int i=1;i<=m;i++){
		int choice;
		cin>>choice;
		if(choice==1){
			int p,v;
			cin>>p>>v;
			num[p]=v;
		}else{
			func();
			cout<<ans<<endl;
		}
	}
	
} 
