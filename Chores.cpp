#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,k,x,sum=0,sum1=0;
    cin >> k >> n >> x;
    int a[k+1];
    for(int i=0;i<k;i++){
        cin >> a[i];
    }
    for(int i=k-1;;i--){
        a[i]=x;
        sum++;
        if(sum==n){
            break;
        }
    }
    for(int i=0;i<k;i++){
        sum1=sum1+a[i];
    }
    cout << sum1 << endl;
    return 0;
}
