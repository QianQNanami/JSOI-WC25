#include<iostream>
using namespace std;

int a[100010];

int main(){
	
	int n = 0;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	int t = 0;
	cin>>t;
	while(t--){
		int x = 0,y = 0;
		cin>>x>>y;
		int cnt = 0;
		for(int i = x;i<=y;i++){
			cnt+=a[i];
		}
		cout<<cnt<<endl;
		
	}
	
	
	return 0;
}
