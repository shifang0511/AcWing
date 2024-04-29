#include<bits/stdc++.h>
using namespace std;
int n;const int N=15,INF=0x3f3f3f3f;
int w[N][N],f[N*2][N][N];
int main()
{
    cin>>n;
    int a,b,c;
    while(cin >> a >> b >> c, a || b || c) w[a][b] = c;//输入
    for(int k=1;k<=n*2;k++)
        for(int i1=1;i1<=n;i1++)
            for(int i2=1;i2<=n;i2++)
            {
                int j1=k-i1;int j2=k-i2;
                if(j1>=1&&j2>=1&&j1<=n&&j2<=n)
                {
                    int &x=f[k][i1][i2];
                    int y=w[i1][j1];//判断两点是否经过同一点，如果是，则只取一遍
                    if(i1!=i2)y+=w[i2][j2];
                    x=max(x,f[k-1][i1-1][i2-1]+y);
                    x=max(x,f[k-1][i1][i2-1]+y);
                    x=max(x,f[k-1][i1-1][i2]+y);
                    x=max(x,f[k-1][i1][i2]+y);
                }
            }
    cout<<f[n*2][n][n]<<endl;
    return 0;
}