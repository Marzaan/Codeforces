#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,a=0,b=0,sum=0,sum1=0,sum2=0;
    cin >> x;
    int ar[x+5];
    for(int i=0;i<x;i++){
        cin >> ar[i];
    }
    a=ar[0];
    for(int i=1;i<x;i++){
        if(a!=ar[i]){
            b=ar[i];
            sum=0;
            break;
        }
        else{
            sum=1;
        }
    }
    for(int i=0;i<x;i++){
        if(ar[i]==a){
            sum1++;
            continue;
        }
        else if(ar[i]==b){
            sum2++;
            continue;
        }
        else{
            sum=1;
            break;
        }
    }
    if(sum==0 && sum1==sum2){
        cout << "YES" << endl << a << " " << b << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
