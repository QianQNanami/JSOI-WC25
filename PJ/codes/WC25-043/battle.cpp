#include <bits/stdc++.h>
using namespace std;/*
char map[300][300];			//��ͼ����
bool aga[300][300];			//�������飺0δ�߹���1���߹�
int dfs(unsigned short x,unsigned short y,unsigned short p,unsigned short q)
{
	unsigned step=0;			//Ŀǰ�߹�������
	unsigned short dire=0;			//����0Ϊ�ϣ�1Ϊ�ң�2Ϊ�£�3Ϊ��
	unsigned short i=p,j=q;			//�Եз����꿪ʼ���������� 
}*/
int main()
{
//	freopen("battle.in","r",stdin);
	unsigned short m,n;
	cin>>m>>n;
	char map[m][n];
	for(unsigned short i=0;i<m;i++)
		for(unsigned short j=0;j<n;j++)
		{
			cin>>map[i][j];
/*			if(map[i][j]=='Y')			//���������괫�ݸ����Ѻ���dfs 
			{
				unsigned short x=i;
				unsigned short y=j;
			}
			if(map[i][j]=='T')			//���з����괫�ݸ����Ѻ���dfs
			{
				unsigned short p=i;
				unsigned short q=j;
			}
		}*/
	cout<<-1;
	return 0;
}
