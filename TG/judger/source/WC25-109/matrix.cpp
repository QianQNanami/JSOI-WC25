#include <iostream>
#include <cstdio>
using namespace std;
const int inf = 0x3f3f3f3f;

int f1[405][405] = {};   //´¢´æ×óÉÏ½ÇÊý×ÖºÍ
int f2[405][405] = {};   //´¢´æÓÒÉÏ½ÇÊý×ÖºÍ
int num[405][405] = {};

int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            cin >> num[i][j];
            f1[i][j] = f1[i - 1][j - 1] + num[i][j];
        }
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = n;j >= 1;j--)
        {
            f2[i][j] = f2[i - 1][j + 1] + num[i][j];
        }
    }
    /*
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            cout << f1[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            cout << f2 [i][j] << " ";
        }
        //cout << endl;
    }
    */
    //cout << endl << endl;
    int maxn = -inf;
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= n;j++)
        {
            for(int k = 1;k <= min(n-i,n-j);k++)
            {
                //cout << i << " " << j << " " << i + k << " " << j + k << endl;
                //cout << f1[i+k][j+k] - f1[i-1][j-1] << " " << f2[i+k][j] - f2[i - 1][j + k + 1] << endl << endl;
                maxn = max(maxn,f1[i + k][j + k] - f1[i - 1][j - 1] - f2[i + k][j] + f2[i - 1][j + k + 1]);
            }
        }
    }
    cout << maxn;
	fclose(stdin);
	fclode(stdout);
	return 0;
 }
