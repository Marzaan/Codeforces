#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int ar[105][4];
    int x,sum=0,sum1=0;
    cin >> x;

    for(int i=0;i<x;i++){
        for(int j=0;j<3;j++){
            cin >> ar[i][j];
        }
    }
    for(int j=0;j<3;j++){
        for(int i=0;i<x;i++){
            sum=sum+ar[i][j];
        }
        if(sum==0){
            continue;
        }
        else{
            cout << "NO" << endl;
            sum1++;
            break;
        }
    }
    if(sum1==0){
        cout << "YES" << endl;
    }
    return 0;
}
