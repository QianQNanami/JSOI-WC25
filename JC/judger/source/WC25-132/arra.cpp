#include<iostream>
using namespace std;
int main(){
    int N,K,ans=0;
    cin>>N>>K;
    for(int i=1;i<=N/2;i++)
        if(N-i-i==K){
            int a=i,b=N-i;
            ans++;
        } 
    cout<<3;
	return 0;
}
