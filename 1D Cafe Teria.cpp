#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,sum=0,d=0;
    cin >> x;
    int a[x+1],b[x+1];
    for(int i=0;i<x;i++){
        cin >> a[i] >> b[i];
        d=b[i]-a[i];
        sum+=d;
    }
    cout << sum << endl;
    return 0;
}
