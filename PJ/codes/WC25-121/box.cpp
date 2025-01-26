#include<iostream>
using namespace std;

int ar[100010];

int main(){
	
	while(1){
		int a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)break;
		int x = 36;
		int sum[10] = {0};
		ar[1] = a;
		ar[2] = b;
		ar[3] = c;
		ar[4] = d;
		ar[5] = e;
		ar[6] = f;
		int temp = 1;
		for(int j = 1;j<=6;j++){
			for(int i = 1;i<=ar[j];i++){
				sum[temp] += j*j;
			}
			temp++;
		}
		int ans = 0;
		int ans2 = 0;
		for(int i = 1;i<=6;i++){
			ans+=sum[i];
		}
		if(ans<=36){
			ans2 = 1;
			cout<<ans2<<endl;
			continue;
		}
		if(ans>36){
			while(ans>36){
				ans-=36;
				ans2++;
			}
			if(ans){
				ans2++;
				cout<<ans2<<endl;
			}
		}
	}
	
	
	return 0;
}
