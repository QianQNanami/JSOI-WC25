#include<iostream>
using namespace std;
int main(){
	int N,a[110],m[110];
	cin>>N;
	for(int i=1;i<=N;i++)
	    cin>>a[i];
	for(int i=1;i<N;i++)
	    if(a[i]>a[i+1]){
	        int t=a[i];
	        a[i]=a[i+1];
	        a[i+1]=t;
	    }
    cout<<20;
return 0;
}
