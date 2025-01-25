#include<bits/stdc++.h>
using namespace std;
int cnt;
int f(int a,int b){
	for(int i=a;i<=b;i++){
		if(i!=2&&i!=3&&i!=5&&i!=7){
			if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0){
				cnt++;
			}
		}
	}
	return cnt+2+1;
}
int main(){
	int a,b;
	cin >> a >> b ;
	cout << f(a,b);
	return 0;
}
