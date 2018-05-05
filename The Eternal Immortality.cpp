#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b;
    long long sum=1;
    cin >> a >> b;
    if(a=='0'){
        a=1;
    }
    if(b=='0'){
        b=1;
    }
    for(int i=1,j=1;i<=b;i++){
        if(j<=a){
            j++;
        }
        else{
            j=1;
        }
        if(i>j){
            sum=sum*i;
            cout << sum << endl;
        }
    }

    cout << sum%10 << endl;
    return 0;
}
