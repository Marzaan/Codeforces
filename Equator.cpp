#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long x,sum=0,sum1=0;
    cin >> x;
    int ar[x+1];
    for(int i=0;i<x;i++){
        cin >> ar[i];
    }
    for(int i=0;i<x;i++){
        sum=sum+ar[i];
    }
    if(sum%2==1){
        sum++;
    }
    sum=sum/2;
    for(int i=0;i<x;i++){
        sum1=sum1+ar[i];
        if(sum1>=sum){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}
