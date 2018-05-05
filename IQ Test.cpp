#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,sum=0,sum1=0,sum2=0;
    cin >> x;
    int ar[x+1];
    for(int i=0;i<x;i++){
        cin >> ar[i];
        if(ar[i]%2==0){
            sum1++;
        }
        if(ar[i]%2==1){
            sum2++;
        }
    }
    for(int i=0;i<x;i++){
        if(sum1>sum2){
            if(ar[i]%2==1){
                sum=i+1;
                break;
            }
        }
        else if(sum1<sum2){
            if(ar[i]%2==0){
                sum=i+1;
                break;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
