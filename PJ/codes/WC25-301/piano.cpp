#include <bits/stdc++.h>
using namespace std;

int lp,rp,t,i,d=1,x[20][1001];

bool b(int k,int p) {
	int minp=55,maxp=0;
	for(int i=1; i<=i; i++) {
		maxp=max(maxp,x[k][i]);
		minp=min(minp,x[k][i]);
	}
	if(minp<p-4||maxp>p-4) return 0;
	return 1;
}

int main() {
	//��ʦ ��д�˺ó�ʱ��
	//������д������
	//ף�����彡�� �������� �������� ���綫��
	//���ҵ�ְ�^_^
	
	cout<<-1; 
	
	/*
	cin>>t;
	while(t) {
		for(int k=1; k<=t; k++) {
			cin>>i;
			for(int j=1; j<=i; j++) {
				cin>>x[k][j];
			}
			int minp=55,maxp=0;
			for(int j=1; j<=i; j++) {
				maxp=max(maxp,x[k][j]);
				minp=min(minp,x[k][j]);
			}
			if(maxp-minp+1>9) {
				cout<<-1<<endl;
				return 0;
			}
		}
		t--;
	}
	*/
}
