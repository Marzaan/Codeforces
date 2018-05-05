#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,sum=0,sum2=0;
    cin >> a >> b >> c;
    sum=a+b+c;
    sum2=sum;
    sum=a+b*c;
    if(sum>sum2){
        sum2=sum;
    }
    sum=a*b+c;
    if(sum>sum2){
        sum2=sum;
    }
    sum=a*(b+c);
    if(sum>sum2){
        sum2=sum;
    }
    sum=(a+b)*c;
    if(sum>sum2){
        sum2=sum;
    }
    sum=a*b*c;
    if(sum>sum2){
        sum2=sum;
    }
    cout << sum2;
    return 0;
}
