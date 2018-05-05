#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,m,sum=0,x;
    cin >> n >> k >> m;
    char s[n+1];
    int ar[n+1];
    int a1[100];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        cin >> ar[i];
    }
    for(int j=0;j<k;j++){
        cin >> x;
        for(int i=0;i<x;i++){
            cin >> a1[i];
        }
    }
    for(int i=0;i<m;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+ar[i];
    }
    cout << sum << endl;
    return 0;
}
