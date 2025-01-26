#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[7];
int area[7] = {0,1,4,9,16,25,36};
/*
0 0 4 0 0 1
7 5 1 0 0 0
0 0 0 0 0 0
*/
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	memset(a,0x3f,sizeof a);
	while(a[1] == a[2] == a[3] == a[4] == a[5] == a[6] == 0){
		int cnt = 0;
		int flag = 1;
		for(int i = 1;i <= 6;i++){
			cin>>a[i];
			if(a[i] != 0) flag = 0;
		}
		if(flag) break;
		int l = 1;
		int sum = 36;
		int box = 1;
		for(int i = 1;i <= 6;i++){
			if(a[i]*area[i] <= sum){
				sum -= a[i]*area[i];
			}else{
				sum -= (int)floor(sum/area[i])* area[i];
				a[i] -= sum/area[i];
				sum += 36;
				box ++;
				i--;
			}
				
		}
		cout<<box<<endl;
		
	}
	return 0;
} 

//我操你妈看我代码
//再看我代码s全家 


