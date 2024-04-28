#include<bits/stdc++.h>
using namespace std;
int r,c,T;const int N=110;
int field[N][N],f[N][N];
int main()
{
    cin>>T;
    while(T--)
    {
        //memset(0,field,sizeof field);
        cin>>r>>c;
        for(int i=1;i<=r;i++)for(int j=1;j<=c;j++)cin>>field[i][j];
        for(int i=1;i<=r;i++)for(int j=1;j<=c;j++)f[i][j]=max(f[i-1][j],f[i][j-1])+field[i][j];
        cout<<f[r][c]<<endl;
    }
    return 0;
}