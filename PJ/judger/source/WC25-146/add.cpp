#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	int a[100006], l[100006],r[100006];
	cin >> n;
	for(int i = 0; i <= n; i++){
		cin >> a[i];
	}
	cin >> m;
	while(m--){
		long long l, r;
		cin >> l >> r;
		long long ans;
	    if(r-l==1){
	    	ans = a[l] + a[r];
		}if(r-l==2){
	    	ans = a[l] + a[r] + a[l+1];
		}if(r-l==3){
	    	ans = a[l] + a[r] + a[l+1] +a[l+2];
		}if(r-l==4){
	    	ans = a[l] + a[r] + a[l+1] + a[l+2] + a[l+3];
		}if(r-l==5){
	    	ans = a[l] + a[r] + a[l+1] + a[l+2] + a[l+3] + a[l+4];
		}
		cout << ans << endl;
	}
	return  0;
}
