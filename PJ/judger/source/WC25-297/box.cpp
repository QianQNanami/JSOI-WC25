#include<bits/stdc++.h>
using namespace std;
int s1[70002],s2[70002],s3[70002],s4[70002],s5[70002],s6[70002];
long long ans[70002];
int i;
int main(){
	for(i=1;i<=70000;i++){
		cin>>s1[i]>>s2[i]>>s3[i]>>s4[i]>>s5[i]>>s6[i];
		if(s1[i]==0&&s1[i]==s2[i]&&s1[i]==s3[i]&&s1[i]==s4[i]&&s1[i]==s5[i]&&s1[i]==s6[i])
			break;}
	for(int j=1;j<i;j++){
		long long sum=0;
		sum+=1*s1[j];
		sum+=4*s2[j];
		sum+=9*s3[j];
		sum+=16*s4[j];
		sum+=25*s5[j];
		sum+=36*s6[j];
		ans[j]=sum/36;
		if(sum%36!=0)
			ans[j]++;}
	for(int j=1;j<i;j++)
		cout<<ans[j]<<endl;
	return 0;
}
