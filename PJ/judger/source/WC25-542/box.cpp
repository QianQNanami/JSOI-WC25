#include<bits/stdc++.h>
using namespace std;
long long a[10],ret,f = 0,cnt;
int main(){
	while(1){
		ret = 0;
		cnt = 0;
		f = 0;
		for(int i = 1;i<=6;i++){
			cin>>a[i];
			if(a[i]!=0)f = 1;
			for(int j = 1;j<=a[i];j++){
				ret+=i*i;
				if(ret>36){
				    cnt++;
				    ret = i*i;
				}
			}
		}
		if(ret!=0)cnt++;
		if(f==0)return 0;
		cout<<cnt<<endl;
	}
	return 0;
}
