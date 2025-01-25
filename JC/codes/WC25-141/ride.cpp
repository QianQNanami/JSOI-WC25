#include <bits/stdc++.h>
using namespace std;

string s,s1;
int sum=1,cnt=1;

int main(){
	cin >> s >> s1;
	for(int i=0;i<s.size();i++){
		sum*=int(s[i]-64);
	}
	for(int i=0;i<s1.size();i++){
		cnt*=int(s1[i]-64);
	}
	if(sum%47==cnt%47) cout << "GO";
	else cout << "STAY";
	return 0;
}
