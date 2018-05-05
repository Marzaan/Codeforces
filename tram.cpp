#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,z,sum=0,pas=0;
    cin >> z;
        cin >> x >> y;
        sum=y;
        pas=y;
    for(int i=0;i<z-1;i++){
        cin >> x >> y;
        pas=pas-x;
        pas=pas+y;
        if(sum<pas){
            sum=pas;
        }
    }
    cout << sum;
}
