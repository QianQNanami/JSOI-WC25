#include <iostream>
#include <cstdio>
using namespace std;

int a[50005] = {};

int coun[50005][35] = {};//������i֮ǰ��j�ж��ٸ�
int counting = 0;

int main()
{
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    int n,k,m;
    cin >> n >> k >> m;
    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= k;j++)//����ÿһ���ַ�
        {
            coun[i][j] = coun[i - 1][j] + (j == a[i]);
        }
    }
    int cnt = 0;
    while(m--)
    {
        int req;
        cin >> req;
        if(req == 1)
        {
            cnt++;
        }
        if(req == 2)
        {
            cout << -1 << '\n';
        }
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
