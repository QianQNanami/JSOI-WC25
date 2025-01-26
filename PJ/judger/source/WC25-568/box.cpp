#include<bits/stdc++.h>
using namesapce std;
int main(){
    long long a[420005];
    int sum=0;
    for(int i=1;i<=;i++){
        cin>>a[i];
        if(a[i]==0&&i%6!=0){
        	sum++;
		}
		if(i%6==0){
			cout<<sum/2;
		}
    }
	return 0;
}
