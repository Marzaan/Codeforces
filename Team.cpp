#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int x;
    int sum=0,sum2=0;
    long long int n[1000][3];
    cin >> x;
    for(int i=0;i<x;i++){
        for(int j=0;j<3;j++){
            cin >> n[i][j];
        }
    }
    for(int i=0;i<x;i++){
        sum=0;
        for(int j=0;j<3;j++){
            if(n[i][j]==1){
                sum++;
            }
        }
        if(sum>=2){
            sum2++;
        }
    }
    cout << sum2 << endl;
    return 0;
}
