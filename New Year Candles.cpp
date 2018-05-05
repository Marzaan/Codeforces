#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y,z=0,sum=0;
    cin >> x >> y;
    z=x;
    while(1){
        if(x<=0){
            break;
        }
        x=x-y;
        x++;
        sum++;

    }
    cout << z+sum-1 << endl;
    return 0;
}
