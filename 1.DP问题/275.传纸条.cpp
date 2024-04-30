#include<bits/stdc++.h>
using namespace std;
int m,n;const int N=55,INF=0x3f3f3f3f;
int w[N][N],f[N*2][N][N];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)for(int j=1;j<=m;j++) cin>>w[i][j];//输入
    for(int k=2;k<=n+m;k++)
        for(int i=1;i<=n&&i<k;i++)
            for(int j=1;j<=n&&j<k;j++)
            {
                int v = w[i][k - i];
                if (i != j) v += w[j][k - j];

                int &t = f[k][i][j];
                t = max(t, f[k - 1][i][j]);
                t = max(t, f[k - 1][i - 1][j]);
                t = max(t, f[k - 1][i][j - 1]);
                t = max(t, f[k - 1][i - 1][j - 1]);
                t += v;
            }
    cout<<f[n+m][n][n]<<endl;
    return 0;
}