#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,sum=0,sum1=0,cunt=0;
    cin >> x;
    int a[1001];
    for(int i=0;i<x;i++){
        cin >> a[i];
    }
    for(int i=1;i<x;i++){
        sum=0;
        sum1=0;
        for(int j=i-1;j>=0;j--){
            sum++;
            if(a[i]>a[j]){
                sum1++;
            }
            else{
                break;
            }
        }
        if(sum==sum1){
            cunt++;
        }
    }
    for(int i=1;i<x;i++){
        sum=0;
        sum1=0;
        for(int j=i-1;j>=0;j--){
            sum++;
            if(a[i]<a[j]){
                sum1++;
            }
            else{
                break;
            }
        }
        if(sum==sum1){
            cunt++;
        }
    }
    cout << cunt << endl;
    return 0;
}
