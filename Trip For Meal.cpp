#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,b,c,sm=0,sum=0,sum1=0,sum2=0,sum3=0;
    cin >> n >> a >> b >> c;
    if(n==1){
        cout << "0";
        return 0;
    }
    if(a<b){
        sum1=1;
    }
    if(a>b){
        sum2=1;
    }
    while(sm!=n-1){
        if(sum1==1){
            sum=sum+a;
            sum1=0;
            sum3=1;
            sm++;
        }
        else if(sum2==1){
            sum=sum+b;
            sum2=0;
            sum1=1;
            sm++;
        }
        else if(sum3==1){
            sum=sum+c;
            sum2=1;
            sum3=0;
            sm++;
        }
    }
    cout << sum << endl;
    return 0;
}
