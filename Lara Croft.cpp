#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,z=1;
    cin >> x >> y;
    int a[x*y][x*y];
    int ar[x+1][y+1];
    for(int i=1;i<=x;i++){
        ar[i][1]=z;
        a[z][z]=ar[i][1];
        z++;
    }
    for(int i=1;i<=y;i++){
        ar[x][i]=z;
        a[z][z]=ar[x][i];
        z++;
    }
    for(int i=y;i>1;i--){
        ar[x-1][i]=z;
        a[z][z]=ar[x-1][i];
        z++;
    }
    for(int i=2;i<=y;i++){
        ar[x-2][i]=z;
        a[z][z]=ar[x-2][i];
        z++;
    }
    for(int i=1;i<=y;i++){
        ar[x-3][i]=z;
        z++;
    }
    int m;
    cin >> m;
    cout << a[m][m];
    return 0;
}
