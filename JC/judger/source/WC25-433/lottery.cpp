#include<iostream>
using namespace std;
int sum=0;
int check(int x,int y){
	for(int i=x;i<y;i++){
	
	for(int j=2;j<=i;j++){
	
	if(i%j!=0&&j!=i&&j!=1)
	sum++;	
}
}
return sum;
}
int main(){
	int M,N;
	cin>>M>>N;
	if(N<M)swap(M,N);
	check(M,N);
	return 0;
}
