#include<bits/stdc++.h>
using namespace std;
int n;const int N=110,INF=0x3f3f3f3f;
int w[N][N],f[N][N];
int main()
{
    memset(w,0x3f,sizeof w);
    memset(f,0x3f,sizeof f);
    cin>>n;
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>w[i][j];
    f[1][1]=w[1][1];
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)if(i!=1||j!=1)f[i][j]=min(f[i-1][j],f[i][j-1])+w[i][j];
    cout<<f[n][n]<<endl;
    return 0;
}