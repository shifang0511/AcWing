#include<bits/stdc++.h>
using namespace std;
int n;const int N=110,INF=0x3f3f3f3f;
int w[N][N];
int main()
{
    memset(w,0x3f,sizeof w);
    cin>>n;
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)
    {
        cin>>w[i][j];
        if(i!=1||j!=1)w[i][j]+=min(w[i-1][j],w[i][j-1]);
    }
    cout<<w[n][n]<<endl;
    return 0;
}