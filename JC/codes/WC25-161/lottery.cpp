#include<bits/stdc++.h>
using namespace std;
int main(){
	//N-M求出M里和N里之间的距离；
	//N-M=c；转换一下；
	//用N-M转换后的c去/X；
	//输出； 
	int M,N,c,X;
	cin>>M>>N;
	c=N-M+2;
	cout<<c/X;
	return 0;
}
