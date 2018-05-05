#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,sum=0,sum1=0;
    cin >> x;
    char ar[x+1];
    cin >> ar;
    if(x==1){
        if(ar[0]=='1'){
            cout << 1 << endl;
            return 0;
        }
        else if(ar[0]=='0'){
            cout << 0 << endl;
            return 0;
        }
    }
    for(int i=0;i<x;i++){
        if(ar[i]=='1'){
            sum++;
        }
    }
    sum1=x-sum;
    cout << 1;
    for(int i=0;i<sum1;i++){
        cout << 0;
    }
    cout << endl;
    return 0;
}
