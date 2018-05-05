#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,sum1=0,sum2=0;
    cin >> x >> y;
    int sum=0;
    sum=(x+y+1)/2;
    if(x<=y){
        for(int i=x,j=1;i<sum;i++,j++){
            sum1=sum1+j;
        }
        for(int i=y,j=1;i>sum;i--,j++){
            sum2=sum2+j;
        }
    }
    else{
        for(int i=y,j=1;i<sum;i++,j++){
            sum1=sum1+j;
        }
        for(int i=x,j=1;i>sum;i--,j++){
            sum2=sum2+j;
        }
    }
    cout << sum1+sum2 << endl;
    return 0;
}
