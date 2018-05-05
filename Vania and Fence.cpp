#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,a,sum=0;
    cin >> x >> y;
    for(int i=0;i<x;i++){
        cin >> a;
        if(a>y){
            sum+=2;
        }
        else{
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}
